//
//  File.swift
//  Simple
//
//  Created by Vrana, Jozef on 2/21/17.
//  Copyright © 2017 Vrana, Jozef. All rights reserved.
//

import UIKit
import WDeCom

class PaymemtVC: UIViewController {
    
    public var client : WDECClient?
    
    override func viewDidLoad() {
        super.viewDidLoad()
         self.client = WDECClient.init(environment: WDECEnvironment.TEST)!
    }
    
    public func merchantSignedPaymentByMerchantSecretKey(merchantAccountID:String, payment:WDECPayment?,merchantSecretKey:String) {
        
        if let payment = payment {
            payment.merchantAccountID = merchantAccountID
            payment.requestID = NSUUID.init().uuidString
            
            let requestIDStr : String = payment.requestID
            let transactionTypeStr : String = WDECTransactionTypeGetCode(payment.transactionType)
            let amountStr : String = (payment.amount?.stringValue)!
            let currencyStr : String = payment.currency ?? ""
            let IPAddressStr : String = (payment.ipAddress) ?? ""
            let date = Date()
        
            let requestTimestampStrV2 : String = DateFormatter.requestTimestampDateFormatterV2().string(from: date)
            
            /**
            @Warning: We ask you to never share your Secret Key with anyone, or store it inside your application or phone. This is crucial to ensure the security of your transactions.
            You will be generating the signature on your own server’s backend, as it is the only place where you will store your Secret Key.
            */
            payment.signature = self.serverSideSignatureCalculationV2(requestTimestamp: requestTimestampStrV2, requestID: requestIDStr, merchantID: merchantAccountID, transactionType: transactionTypeStr, amount: amountStr, currency: currencyStr, IPAddress: IPAddressStr, secretKey: merchantSecretKey as NSString) as String

        }
    }
    
    /**
     @Warning: We ask you to never share your Secret Key with anyone, or store it inside your application or phone. This is crucial to ensure the security of your transactions.
     You will be generating the signature on your own server’s backend, as it is the only place where you will store your Secret Key.
     */
    public func serverSideSignatureCalculation(requestTimestamp:String,
                                               requestID:String,
                                               merchantID:String,
                                               transactionType:String,
                                               amount:String,
                                               currency:String,
                                               IPAddress:String?,
                                               secretKey:String) -> NSString
    {
        // request-timestamp - UTC in format yyyyMMddHHmmss
        // request-id
        // merchant-account-id
        // transaction-type
        // amount
        // currency
        // redirect-url (optional) - not used for mobile payments
        // ip-address (optional)
        // secretkey
        let signatureStr = NSMutableString()
        signatureStr.append(requestTimestamp)
        signatureStr.append(requestID)
        signatureStr.append(merchantID)
        signatureStr.append(transactionType)
        signatureStr.append(amount)
        signatureStr.append(currency)
        if (IPAddress != nil) {
            signatureStr.append(IPAddress!)
        }
        signatureStr.append(secretKey)
        
        let signature = signatureStr.SHA256()
        return signature;
    }
    
    public func serverSideSignatureCalculationV2(requestTimestamp:String,
                                                 requestID:String,
                                                 merchantID:String,
                                                 transactionType:String,
                                                 amount:String,
                                                 currency:String,
                                                 IPAddress:String?,
                                                 secretKey:NSString) -> String
    {
        let params = NSMutableArray(capacity: 9)
        params.add("HS256")
        params.add("request_time_stamp=\(requestTimestamp)")
        params.add("merchant_account_id=\(merchantID)")
        params.add("request_id=\(requestID)")
        params.add("transaction_type=\(transactionType)")
        params.add("requested_amount=\(amount)")
        params.add("requested_amount_currency=\(currency)")
        
        if let IPAddress = IPAddress {
            params.add("ip_address=\(IPAddress)");
        }
        
        let payload = params.componentsJoined(by: "\n")
        let data = payload.data(using: String.Encoding.utf8)
        let payloadBase64 = data!.base64EncodedString(options: NSData.Base64EncodingOptions(rawValue: 0))
        let hmacBase64 = payload.HMAC256WithKey(key: secretKey)
        
        let signatureObjects = NSMutableArray(capacity: 2)
        var signature = ""
        signatureObjects.addObjects(from: [payloadBase64, hmacBase64])
        signature = signatureObjects.componentsJoined(by: ".")
        
        return signature
    }
}



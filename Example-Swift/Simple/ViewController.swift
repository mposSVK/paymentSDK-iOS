//
//  ViewController.swift
//  Simple
//
//  Created by Vrana, Jozef on 2/21/17.
//  Copyright © 2017 Vrana, Jozef. All rights reserved.
//

import UIKit
import PassKit
import WDeComApplePay
import WDeCom
import WDeComCard
import WDeComPayPal
import WDeComSEPA

let AMOUNT = NSDecimalNumber.init(mantissa: 199, exponent: -2, isNegative: false)

let PMTitleApplePay = "ApplePay"
let PMTitleCard     = "Card"
let PMTitleCardManualBrandSelection = "Card manual brand selection"
let PMTitlePayPal   = "PayPal"
let PMTitleSEPA     = "SEPA"

class ViewController: PaymemtVC, UIActionSheetDelegate, UIPopoverPresentationControllerDelegate {
    
    @IBOutlet weak var payButton: UIButton!
    
    override func viewDidLoad() {
        super.viewDidLoad()
    }
    
    @IBAction func onPay(_ sender: UIButton) {
    
        let actionSheetController = UIAlertController(title: "Payment", message: nil, preferredStyle: .actionSheet)
        
        func handler(actionTarget: UIAlertAction){
            
            
            if actionTarget.style == .cancel {
                self.dismiss(animated: true, completion: nil)
                return
            }
            
            let paymentTitle = actionTarget.title
            let payment = self.createPayment(title: paymentTitle!)
            
            if self.client == nil {
                return
            }
           
            self.client!.make(payment, withCompletion:{(response: WDECPaymentResponse?,error: Error?) in
                let alertTitle = error != nil ? "Error" : "Success"
                let alertMessage = error != nil ? error!.localizedDescription : "Item(s) has been purchased."
                let ac = UIAlertController(title: alertTitle, message: alertMessage, preferredStyle: .actionSheet)
                ac.popoverPresentationController?.sourceView = self.view
                ac.popoverPresentationController?.sourceRect = CGRect(x: self.view.bounds.width / 2.0,y: self.view.bounds.height,width: 1.0,height: 1.0)

                ac.addAction(UIAlertAction(title:"OK", style:.default, handler:nil));
                self.present(ac, animated:true, completion:nil)
            })
        }
        let canMakeApplePayPayment = self.canMakeApplePayPayment()
        if canMakeApplePayPayment {
            actionSheetController.addAction(UIAlertAction(title: PMTitleApplePay, style: .default, handler: handler))
        }
        actionSheetController.addAction(UIAlertAction(title: PMTitleCard, style: .default, handler: handler))
        actionSheetController.addAction(UIAlertAction(title: PMTitleCardManualBrandSelection, style: .default, handler: handler))
        actionSheetController.addAction(UIAlertAction(title: PMTitlePayPal, style: .default, handler: handler))
        actionSheetController.addAction(UIAlertAction(title: PMTitleSEPA, style: .default, handler: handler))
        actionSheetController.addAction(UIAlertAction(title: "Cancel", style: .cancel, handler: handler))
        actionSheetController.popoverPresentationController?.sourceView = self.view
        actionSheetController.popoverPresentationController?.sourceRect = CGRect(x: self.view.bounds.width / 2.0,y: self.view.bounds.height,width: 1.0,height: 1.0)
        
        self.present(actionSheetController, animated: true, completion: nil)
    }
    
    func prepareForPopoverPresentation(_ popoverPresentationController: UIPopoverPresentationController) {
        
    }
    
    func canMakeApplePayPayment() -> Bool {
        let networks = [PKPaymentNetwork.masterCard, PKPaymentNetwork.visa]
        let result = PKPaymentAuthorizationViewController.canMakePayments(usingNetworks: networks)
        return result;
    }
    
    func createPayment(title:String) -> WDECPayment {
        var result : WDECPayment
        switch title {
        case PMTitleApplePay : result = self.createPaymentApplePay()
        case PMTitleCard : result = self.createPaymentCard()
        let cardLayout =  WDECCardLayout.appearance()
        cardLayout.manualCardBrandSelectionRequired = false
        case PMTitleCardManualBrandSelection :
            result = self.createPaymentCard()
            let cardLayout =  WDECCardLayout.appearance()
            cardLayout.manualCardBrandSelectionRequired = true
        case PMTitlePayPal : result = self.createPaymentPayPal()
        case PMTitleSEPA : result = self.createPaymentSEPA()
        default : result = WDECPayment()
        }
        return result
    }
    
    func createPaymentApplePay() -> WDECPayment {
        
        let APPLE_MERCHANT_ID = "merchant.com.wirecard.paymentsdk.example.Simple"
        let payment = WDECApplePayManagedPayment()
        payment.appleMerchantID = APPLE_MERCHANT_ID
        payment.appleMerchantCountry = .US
        payment.amount = AMOUNT
        payment.currency = WDECCurrencyGetISOCode(WDECCurrency.USD)
        payment.transactionType = .purchase
        /**
        @Warning: We ask you to never share your Secret Key with anyone, or store it inside your application or phone. This is crucial to ensure the security of your transactions.
        You will be generating the signature on your own server’s backend, as it is the only place where you will store your Secret Key.
        */
        let WD_MERCHANT_ACCOUNT_ID = "";
        let WD_MERCHANT_SECRET_KEY = "";
        self.merchantSignedPaymentByMerchantSecretKey(merchantAccountID: WD_MERCHANT_ACCOUNT_ID, payment: payment, merchantSecretKey: WD_MERCHANT_SECRET_KEY)
        
        return payment
    }
    
    func createPaymentCard() -> WDECPayment {
        let payment = WDECCardPayment()
        payment.amount = AMOUNT
        payment.currency = "USD"
        payment.transactionType = .purchase
        /**
        @Warning: We ask you to never share your Secret Key with anyone, or store it inside your application or phone. This is crucial to ensure the security of your transactions.
        You will be generating the signature on your own server’s backend, as it is the only place where you will store your Secret Key.
        */
        let WD_MERCHANT_ACCOUNT_ID = "33f6d473-3036-4ca5-acb5-8c64dac862d1"
        let WD_MERCHANT_SECRET_KEY = "9e0130f6-2e1e-4185-b0d5-dc69079c75cc"
        self.merchantSignedPaymentByMerchantSecretKey(merchantAccountID: WD_MERCHANT_ACCOUNT_ID, payment: payment, merchantSecretKey: WD_MERCHANT_SECRET_KEY)
        
        return payment
    }
    
    func createPaymentPayPal() -> WDECPayment {
        let orderItem = WDECOrderItem()
        orderItem.name = "The Watch"
        orderItem.amount = AMOUNT;
        orderItem.amountCurrency = .EUR;
        
        let order = WDECOrder()
        order.descriptor = "DEMO DESCRIPTOR"
        order.number = NSUUID.init().uuidString
        order.detail = "DEMO ORDER DETAIL"
        order.items = [orderItem]
        
        let payment = WDECPayPalPayment()
        payment.amount = AMOUNT
        payment.currency = "EUR"
        payment.transactionType = .debit
        payment.order = order;
        /**
        @Warning: We ask you to never share your Secret Key with anyone, or store it inside your application or phone. This is crucial to ensure the security of your transactions.
        You will be generating the signature on your own server’s backend, as it is the only place where you will store your Secret Key.
        */
        let WD_MERCHANT_ACCOUNT_ID = "9abf05c1-c266-46ae-8eac-7f87ca97af28"
        let WD_MERCHANT_SECRET_KEY = "5fca2a83-89ca-4f9e-8cf7-4ca74a02773f"
        self.merchantSignedPaymentByMerchantSecretKey(merchantAccountID: WD_MERCHANT_ACCOUNT_ID, payment: payment, merchantSecretKey: WD_MERCHANT_SECRET_KEY)
        
        return payment
    }
    
    func createPaymentSEPA() -> WDECPayment {
        let payment = WDECSEPAPayment()
        payment.creditorID = "DE98ZZZ09999999999"
        payment.mandateID = "12345678"
        payment.amount = AMOUNT
        payment.currency = "EUR"
        payment.transactionType = .pendingDebit
        /**
        @Warning: We ask you to never share your Secret Key with anyone, or store it inside your application or phone. This is crucial to ensure the security of your transactions.
        You will be generating the signature on your own server’s backend, as it is the only place where you will store your Secret Key.
        */
        let WD_MERCHANT_ACCOUNT_ID = "4c901196-eff7-411e-82a3-5ef6b6860d64"
        let WD_MERCHANT_SECRET_KEY = "ecdf5990-0372-47cd-a55d-037dccfe9d25"
        
        self.merchantSignedPaymentByMerchantSecretKey(merchantAccountID: WD_MERCHANT_ACCOUNT_ID, payment: payment, merchantSecretKey: WD_MERCHANT_SECRET_KEY)
        
        return payment
    }
}



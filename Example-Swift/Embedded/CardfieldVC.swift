//
//  ViewController.swift
//  Embedded
//
//  Created by Vrana, Jozef on 3/6/17.
//  Copyright © 2017 Vrana, Jozef. All rights reserved.
//

import WDeComCard
import WDeComCardScannerGallery

let AMOUNT = NSDecimalNumber.init(mantissa: 199, exponent: -2, isNegative: false)

class CardfieldVC: PaymemtVC, UIActionSheetDelegate, WDECCardFieldDelegate {
    
    @IBOutlet weak var cardField: WDECCardFieldScannerGallery!
    @IBOutlet weak var cardFieldStateLabel: UILabel!
    @IBOutlet weak var payBtn: UIButton!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        self.cardField.becomeFirstResponder()
        let cardLayout = WDECCardLayout.appearance()
        self.cardField.isManualCardBrandSelectionRequired = cardLayout.manualCardBrandSelectionRequired
        self.cardField.scanImage = UIImage(named: "scan_cf2")
        self.cardField.scanImageTintColor = UIColor.blue
        self.cardField.enableScanImageButton = true

        self.cardField.scanToolbarButtonTitle = "Scan Card"
        self.cardField.enableScanToolbarButton = true

        // Appearance posibility
        //WDECCardFieldScannerGallery.appearance().scanImage = UIImage(named: "scan_cf2")
        //WDECCardFieldScannerGallery.appearance().scanImageTintColor = UIColor.blue
        //WDECCardFieldScannerGallery.appearance().enableScanImageButton = true

        //WDECCardFieldScannerGallery.appearance().scanToolbarButtonTitle = "Scan Card"
        //WDECCardFieldScannerGallery.appearance().enableScanToolbarButton = true
    }
    
    @IBAction func onClearAction(_ sender: UIButton) {
        self.cardField.clear()
    }
    
    @IBAction func onPayAction(_ sender: UIButton) {
        // if you create payment object just before calling makePayment you are sure that timestamp is correct
        var payment = self.createCardPayment()
        self.cardField.cardPayment = payment // append card data
        
        payment = self.cardField.cardPayment
        self.client?.make(payment, withCompletion:{(response: WDECPaymentResponse?,error: Error?) in
            let alertTitle = error != nil ? "Error" : "Success"
            let alertMessage = error != nil ? error!.localizedDescription : "Item(s) has been purchased."
            let ac = UIAlertController(title: alertTitle, message: alertMessage, preferredStyle: .actionSheet)
            
            ac.addAction(UIAlertAction(title:"OK", style:.default, handler:nil));
            self.present(ac, animated:true, completion:nil)
            
            // each request shall have unique ID, once it is used create new one
            self.cardField.cardPayment = self.createCardPayment()
        })
    }
    
    func cardField(_ cardField: WDECCardField, didChange state: WDECCardFieldState) {
        self.payBtn.isEnabled = cardField.isValid
        
        var text : String?
        
        switch state {
        case WDECCardFieldState.cardInitial: text = "card initial"
        case WDECCardFieldState.jailbrokenDevice: text = "jailbroken device"
        case WDECCardFieldState.cardValid: text = "card valid"
        case WDECCardFieldState.cardUnsupported: text = "card unsupported"
        case WDECCardFieldState.numberEditting: text = "number editting"
        case WDECCardFieldState.numberIncomplete: text = "number incomplete"
        case WDECCardFieldState.numberInvalid: text = "number invalid"
        case WDECCardFieldState.numberValid: text = "number valid"
        case WDECCardFieldState.monthEditting: text = "month editting"
        case WDECCardFieldState.yearEditting: text = "year editting"
        case WDECCardFieldState.expirationDateIncomplete: text = "expiration date incomplete"
        case WDECCardFieldState.expirationDateInvalid: text = "expiration date invalid"
        case WDECCardFieldState.expirationDateValid: text = "expiration date valid"
        case WDECCardFieldState.securityCodeEditting: text = "security code editting"
        case WDECCardFieldState.securityCodeIncomplete: text = "security code incomplete"
        case WDECCardFieldState.securityCodeInvalid: text = "security code invalid"
        case WDECCardFieldState.securityCodeValid: text = "security code valid"
        }
        
        self.cardFieldStateLabel.text = text
    }
    
    func createCardPayment() -> WDECCardPayment {
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
        let accountHolder = WDECCustomerData()
        accountHolder.firstName = "John"
        accountHolder.lastName = "Doe"
        payment.accountHolder = accountHolder
        
        return payment
    }
}


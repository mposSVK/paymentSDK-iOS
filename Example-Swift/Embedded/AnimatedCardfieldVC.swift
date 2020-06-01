//
//  AnimatedCardfieldVC.swift
//  Embedded
//
//  Created by Vrana, Jozef on 28/02/2019.
//  Copyright © 2019 Vrana, Jozef. All rights reserved.
//

import WDeComCard
import WDeComCardScannerGallery

class AnimatedCardfieldVC: PaymemtVC, WDECAnimatedCardFieldDelegate {
    
    @IBOutlet weak var animatedCardfield: WDECAnimatedCardFieldScannerGallery!
    @IBOutlet weak var animatedCardfieldStateLabel: UILabel!
    @IBOutlet weak var payBtn: UIButton!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        let cardLayout = WDECCardLayout.appearance()
        self.animatedCardfield.isManualCardBrandSelectionRequired = cardLayout.manualCardBrandSelectionRequired
        self.animatedCardfield.scanToolbarButtonTitle = "Scan Card"
        self.animatedCardfield.enableScanToolbarButton = true
        
        // Appearance posibility
        //WDECAnimatedCardFieldScannerGallery.appearance().scanToolbarButtonTitle = "Scan Card"
        //WDECAnimatedCardFieldScannerGallery.appearance().enableScanToolbarButton = true
    }
    
    @IBAction func onClearAction(_ sender: UIButton!) {
        self.animatedCardfield.clear()
    }
    
    @IBAction func onPayAction(_ sender: UIButton!) {
        // if you create payment object just before calling makePayment you are sure that timestamp is correct
        var payment = self.createCardPayment()
        self.animatedCardfield.cardPayment = payment // append card data
        
        payment = self.animatedCardfield.cardPayment
        self.client?.make(payment, withCompletion:{(response: WDECPaymentResponse?,error: Error?) in
            let alertTitle = error != nil ? "Error" : "Success"
            let alertMessage = error != nil ? error!.localizedDescription : "Item(s) has been purchased."
            let ac = UIAlertController(title: alertTitle, message: alertMessage, preferredStyle: .actionSheet)
            
            ac.addAction(UIAlertAction(title:"OK", style:.default, handler:nil));
            self.present(ac, animated:true, completion:nil)
            
            // each request shall have unique ID, once it is used create new one
            self.animatedCardfield.cardPayment = self.createCardPayment()
        })
    }
    
    func animatedCardField(_ animatedCardField: WDECAnimatedCardField, didChange state: WDECAnimatedCardFieldState) {
        self.payBtn.isEnabled = animatedCardField.isValid
        
        var text : String?
        
        switch state {
        case WDECAnimatedCardFieldState.cardInitial: text = "card initial"
        case WDECAnimatedCardFieldState.cardValid: text = "card valid"
        case WDECAnimatedCardFieldState.cardUnsupported: text = "card unsupported"
        case WDECAnimatedCardFieldState.numberEditting: text = "number editting"
        case WDECAnimatedCardFieldState.numberIncomplete: text = "number incomplete"
        case WDECAnimatedCardFieldState.numberInvalid: text = "number invalid"
        case WDECAnimatedCardFieldState.numberValid: text = "number valid"
        case WDECAnimatedCardFieldState.expirationDateEditting: text = "expiration editting"
        case WDECAnimatedCardFieldState.expirationDateIncomplete: text = "expiration date incomplete"
        case WDECAnimatedCardFieldState.expirationDateInvalid: text = "expiration date invalid"
        case WDECAnimatedCardFieldState.expirationDateValid: text = "expiration date valid"
        case WDECAnimatedCardFieldState.securityCodeEditting: text = "security code editting"
        case WDECAnimatedCardFieldState.securityCodeIncomplete: text = "security code incomplete"
        case WDECAnimatedCardFieldState.securityCodeInvalid: text = "security code invalid"
        case WDECAnimatedCardFieldState.securityCodeValid: text = "security code valid"
        case WDECAnimatedCardFieldState.cardholderInvalid: text = "cardholder invalid"
        case WDECAnimatedCardFieldState.cardholderEditting: text = "cardholder editting"
        case WDECAnimatedCardFieldState.supportedCardsInvalid: text = "unsupported usage of cards CUP & UPI type at the same time"
        }
        
        self.animatedCardfieldStateLabel.text = text
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

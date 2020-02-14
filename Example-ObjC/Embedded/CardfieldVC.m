//
//  ViewController.m
//  Embedded
//
//  Created by Sedlak, Stefan on 7/21/16.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import "CardfieldVC.h"

#import <libextobjc/EXTScope.h>
#import <WDeComCard/WDeComCard.h>
#import <WDeComCardScannerGallery/WDECCardFieldScannerGallery.h>

#define NSStringize_helper(x) #x
#define NSStringize(x) @NSStringize_helper(x)

#define AMOUNT [NSDecimalNumber decimalNumberWithMantissa:199 exponent:-2 isNegative:NO]

@interface CardfieldVC () <WDECCardFieldDelegate>

@property (weak, nonatomic) IBOutlet WDECCardFieldScannerGallery *cardField;
@property (weak, nonatomic) IBOutlet UILabel *cardFieldStateLabel;
@property (weak, nonatomic) IBOutlet UIButton *payBtn;

@end

@implementation CardfieldVC

- (void)viewDidLoad {
    [super viewDidLoad];
    [self.cardField becomeFirstResponder];
    self.cardField.manualCardBrandSelectionRequired = [[WDECCardLayout appearance] manualCardBrandSelectionRequired];
    [[WDECCardFieldScannerGallery appearance] setScanImage: [UIImage imageNamed:@"scan_bf2"]];
    [[WDECCardFieldScannerGallery appearance] setScanImageTintColor:[UIColor blueColor]];
    [[WDECCardFieldScannerGallery appearance] setEnableScanImageButton:YES];

    [[WDECCardFieldScannerGallery appearance] setScanToolbarButtonTitle:@"Scan Card"];
    [[WDECCardFieldScannerGallery appearance] setEnableScanToolbarButton:YES];
    
    //Local customization
    //self.cardField.scanImageTintColor = [UIColor blueColor];
    //self.cardField.scanImage = [UIImage imageNamed:@"scan_bf2"];
    //self.cardField.enableScanImageButton = YES;

    //self.cardField.scanToolbarButtonTitle = @"Scan Card";
    //self.cardField.enableScanToolbarButton = YES;
}

- (IBAction)onClear:(UIButton *)sender {
    [self.cardField clear];
}

- (IBAction)onPay:(UIButton *)sender {
    // if you create payment object just before calling makePayment you are sure that timestamp is correct
    WDECCardPayment *payment = [self createCardPayment];
    self.cardField.cardPayment = payment; // append card data
    payment = self.cardField.cardPayment;
    
    if (!self.client) {
        return;
    }
    sender.enabled = NO;
    @weakify(self, sender);
    [self.client makePayment:payment withCompletion:^(WDECPaymentResponse * _Nullable response, NSError * _Nullable error) {
        @strongify(self, sender);
        sender.enabled = YES;
        
        NSString *alertTitle = error ? @"Error" : @"Success";
        NSString *alertMessage = error ? error.localizedDescription : @"Item(s) has been purchased.";
        UIAlertController *ac = [UIAlertController alertControllerWithTitle:alertTitle
                                                                    message:alertMessage
                                                             preferredStyle:UIAlertControllerStyleAlert];
        
        [ac addAction:[UIAlertAction actionWithTitle:@"Cancel" style:UIAlertActionStyleCancel handler:nil]];
        [self presentViewController:ac animated:YES completion:nil];
        
        // each request shall have unique ID, once it is used create new one
        self.cardField.cardPayment = [self createCardPayment];
    }];
}
#pragma mark - WDECCardFieldDelegate

- (void)cardField:(nonnull WDECCardField *)cardField didChangeState:(WDECCardFieldState)state {
    self.payBtn.enabled = cardField.valid;
    
#define SWITCH_CASE(value) case value: { text = NSStringize(value); break; }
    NSString *text = nil;
    switch (state) {
            SWITCH_CASE(WDECCardFieldStateCardInitial)
            SWITCH_CASE(WDECCardFieldStateJailbrokenDevice)
            SWITCH_CASE(WDECCardFieldStateCardValid)
            SWITCH_CASE(WDECCardFieldStateCardUnsupported)
            SWITCH_CASE(WDECCardFieldStateNumberEditting)
            SWITCH_CASE(WDECCardFieldStateNumberIncomplete)
            SWITCH_CASE(WDECCardFieldStateNumberInvalid)
            SWITCH_CASE(WDECCardFieldStateNumberValid)
            SWITCH_CASE(WDECCardFieldStateMonthEditting)
            SWITCH_CASE(WDECCardFieldStateYearEditting)
            SWITCH_CASE(WDECCardFieldStateExpirationDateIncomplete)
            SWITCH_CASE(WDECCardFieldStateExpirationDateInvalid)
            SWITCH_CASE(WDECCardFieldStateExpirationDateValid)
            SWITCH_CASE(WDECCardFieldStateSecurityCodeEditting)
            SWITCH_CASE(WDECCardFieldStateSecurityCodeIncomplete)
            SWITCH_CASE(WDECCardFieldStateSecurityCodeInvalid)
            SWITCH_CASE(WDECCardFieldStateSecurityCodeValid)
    }
#undef SWITCH_CASE
    
    self.cardFieldStateLabel.text = text;
}

- (WDECCardPayment *)createCardPayment {
    WDECCardPayment *payment = [WDECCardPayment new];
    payment.amount = AMOUNT;
    payment.currency = @"USD";
    payment.transactionType = WDECTransactionTypePurchase;
    /**
    @Warning: We ask you to never share your Secret Key with anyone, or store it inside your application or phone. This is crucial to ensure the security of your transactions.
    You will be generating the signature on your own server’s backend, as it is the only place where you will store your Secret Key.
    */
    static NSString *const WD_MERCHANT_ACCOUNT_ID = @"33f6d473-3036-4ca5-acb5-8c64dac862d1";
    static NSString *const WD_MERCHANT_SECRET_KEY = @"9e0130f6-2e1e-4185-b0d5-dc69079c75cc";
    [self merchant:WD_MERCHANT_ACCOUNT_ID signPayment:payment byMerchantSecretKey:WD_MERCHANT_SECRET_KEY];
    payment.accountHolder = [self accountHolder];
    
    return payment;
}

- (WDECCustomerData *)accountHolder {
    WDECCustomerData *accountHolder = nil;
    accountHolder = [WDECCustomerData new];
    accountHolder.lastName = @"Doe";
    
    return accountHolder;
}

@end

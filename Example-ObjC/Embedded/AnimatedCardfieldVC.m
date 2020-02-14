//
//  AnimatedCardfieldVC.m
//  Embedded
//
//  Created by Vrana, Jozef on 28/02/2019.
//  Copyright © 2019 Wirecard Technologies GmbH. All rights reserved.
//

#import "AnimatedCardfieldVC.h"
#import <libextobjc/EXTScope.h>
#import <WDeComCard/WDeComCard.h>
#import <WDeComCardScannerGallery/WDECAnimatedCardFieldScannerGallery.h>

#define NSStringize_helper(x) #x
#define NSStringize(x) @NSStringize_helper(x)

#define AMOUNT [NSDecimalNumber decimalNumberWithMantissa:199 exponent:-2 isNegative:NO]

@interface AnimatedCardfieldVC () <WDECAnimatedCardFieldDelegate>

@property (weak, nonatomic) IBOutlet WDECAnimatedCardFieldScannerGallery *animatedCardField;
@property (weak, nonatomic) IBOutlet UILabel *animatedCardFieldStateLabel;
@property (weak, nonatomic) IBOutlet UIButton *animatedPayBtn;

@end

@implementation AnimatedCardfieldVC

- (void)viewDidLoad {
    [super viewDidLoad];

    self.animatedCardField.manualCardBrandSelectionRequired = [[WDECCardLayout appearance] manualCardBrandSelectionRequired];
    [[WDECAnimatedCardFieldScannerGallery appearance] setScanToolbarButtonTitle:@"Scan Card"];
    [[WDECAnimatedCardFieldScannerGallery appearance] setEnableScanToolbarButton:YES];

    //self.animatedCardField.scanToolbarTitle = @"Scan Card";
    //self.animatedCardField.enableScanToolbarButton = YES;
}

- (IBAction)onClear:(UIButton *)sender {
    [self.animatedCardField clear];
}

- (IBAction)onPay:(UIButton *)sender {
    // if you create payment object just before calling makePayment you are sure that timestamp is correct
    WDECCardPayment *payment = [self createCardPayment];
    self.animatedCardField.cardPayment = payment; // append card data
    
    payment = self.animatedCardField.cardPayment;
    
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
        self.animatedCardField.cardPayment = [self createCardPayment];
    }];
}
#pragma mark - WDECCardFieldDelegate

- (void)animatedCardField:(WDECAnimatedCardField *)animatedCardField didChangeState:(WDECAnimatedCardFieldState)state {
    self.animatedPayBtn.enabled = animatedCardField.valid;
    
#define SWITCH_CASE(value) case value: { text = NSStringize(value); break; }
    NSString *text = nil;
    switch (state) {
            SWITCH_CASE(WDECAnimatedCardFieldStateCardInitial)
            SWITCH_CASE(WDECAnimatedCardFieldStateCardValid)
            SWITCH_CASE(WDECAnimatedCardFieldStateCardUnsupported)
            SWITCH_CASE(WDECAnimatedCardFieldStateNumberEditting)
            SWITCH_CASE(WDECAnimatedCardFieldStateNumberIncomplete)
            SWITCH_CASE(WDECAnimatedCardFieldStateNumberInvalid)
            SWITCH_CASE(WDECAnimatedCardFieldStateNumberValid)
            SWITCH_CASE(WDECAnimatedCardFieldStateExpirationDateEditting)
            SWITCH_CASE(WDECAnimatedCardFieldStateExpirationDateIncomplete)
            SWITCH_CASE(WDECAnimatedCardFieldStateExpirationDateInvalid)
            SWITCH_CASE(WDECAnimatedCardFieldStateExpirationDateValid)
            SWITCH_CASE(WDECAnimatedCardFieldStateSecurityCodeEditting)
            SWITCH_CASE(WDECAnimatedCardFieldStateSecurityCodeIncomplete)
            SWITCH_CASE(WDECAnimatedCardFieldStateSecurityCodeInvalid)
            SWITCH_CASE(WDECAnimatedCardFieldStateSecurityCodeValid)
            SWITCH_CASE(WDECAnimatedCardFieldStateCardholderInvalid)
            SWITCH_CASE(WDECAnimatedCardFieldStateCardholderEditting)
    }
#undef SWITCH_CASE
    
    self.animatedCardFieldStateLabel.text = text;
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

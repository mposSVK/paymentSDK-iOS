//
//  PaymentVC.h
//  Embedded
//
//  Created by Sedlak, Stefan on 7/27/16.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WDECClient;
@class WDECPayment;

@interface PaymentVC : UIViewController

@property (strong, nullable, nonatomic) WDECClient *client;

/**
@Warning: We ask you to never share your Secret Key with anyone, or store it inside your application or phone. This is crucial to ensure the security of your transactions.
You will be generating the signature on your own server’s backend, as it is the only place where you will store your Secret Key.
*/
- (void)merchant:(nonnull NSString *)merchantAccountID
     signPayment:(nonnull WDECPayment *)payment byMerchantSecretKey:(nonnull NSString *)merchantSecretKey;

@end

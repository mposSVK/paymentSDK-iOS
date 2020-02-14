//
//  PaymentVC.m
//  Embedded
//
//  Created by Sedlak, Stefan on 7/27/16.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import "PaymentVC.h"

#import <WDeCom/WDeCom.h>

#import "NSDateFormatter+Utils.h"
#import "NSString+Utils.h"

@implementation PaymentVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.client = [[WDECClient alloc] initWithEnvironment:WDECEnvironmentTEST];
}

- (void)merchant:(nonnull NSString *)merchantAccountID
     signPayment:(nonnull WDECPayment *)payment byMerchantSecretKey:(nonnull NSString *)merchantSecretKey
{
    if (!payment) {
        return;
    }
    
    payment.merchantAccountID = merchantAccountID;
    payment.requestID = [[NSUUID UUID] UUIDString];
    
    NSString *requestIDStr = payment.requestID;
    NSString *transactionTypeStr = WDECTransactionTypeGetCode(payment.transactionType) ?: @"";
    NSString *amountStr = [payment.amount stringValue];
    NSString *currencyStr = payment.currency ?: @"";
    NSString *IPAddressStr = payment.IPAddress;
    NSDate *requestTimestamp = [NSDate date]; // UTC
    NSString *requestTimestampStr = [[NSDateFormatter timestampDateFormatter] stringFromDate:requestTimestamp];
    /**
    @Warning: We ask you to never share your Secret Key with anyone, or store it inside your application or phone. This is crucial to ensure the security of your transactions.
    You will be generating the signature on your own server’s backend, as it is the only place where you will store your Secret Key.
    */
    NSString *signature = [self serverSideSignatureCalculationV2:requestTimestampStr
                                                       requestID:requestIDStr
                                                      merchantID:merchantAccountID
                                                 transactionType:transactionTypeStr
                                                          amount:amountStr
                                                        currency:currencyStr
                                                       IPAddress:IPAddressStr
                                                       secretKey:merchantSecretKey];
    payment.signature = signature;
}

/**
@Warning: We ask you to never share your Secret Key with anyone, or store it inside your application or phone. This is crucial to ensure the security of your transactions.
You will be generating the signature on your own server’s backend, as it is the only place where you will store your Secret Key.
*/
- (NSString *)serverSideSignatureCalculationV2:(NSString *)requestTimestamp
                                     requestID:(NSString *)requestID
                                    merchantID:(NSString *)merchantID
                               transactionType:(NSString *)transactionType
                                        amount:(NSString *)amount
                                      currency:(NSString *)currency
                                     IPAddress:(NSString *)IPAddress
                                     secretKey:(NSString *)secretKey
{
    NSMutableArray<NSString *> *params = [NSMutableArray arrayWithCapacity:9];
    [params addObject:@"HS256"];
    [params addObject:[NSString stringWithFormat:@"request_time_stamp=%@", requestTimestamp]];
    [params addObject:[NSString stringWithFormat:@"merchant_account_id=%@", merchantID]];
    [params addObject:[NSString stringWithFormat:@"request_id=%@", requestID]];
    [params addObject:[NSString stringWithFormat:@"transaction_type=%@", transactionType]];
    [params addObject:[NSString stringWithFormat:@"requested_amount=%@", amount]];
    [params addObject:[NSString stringWithFormat:@"requested_amount_currency=%@", currency]];
    if (IPAddress) {
        [params addObject:[NSString stringWithFormat:@"ip_address=%@", requestTimestamp]];
    }
    NSString *payload = [params componentsJoinedByString:@"\n"];
    
    NSString *payloadBase64 = [[payload dataUsingEncoding:NSUTF8StringEncoding] base64EncodedStringWithOptions:0];
    NSString *hmacBase64    = [payload HMAC256WithKey:secretKey];
    
    NSString *signature = [@[payloadBase64, hmacBase64] componentsJoinedByString:@"."];
    return signature;
}

@end

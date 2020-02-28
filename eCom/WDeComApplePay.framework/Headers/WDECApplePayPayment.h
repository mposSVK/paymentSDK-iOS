//
//  WDECApplePayPayment.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 10/12/15.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <WDeCom/WDECPayment.h>
#import <WDeComCoreCard/WDECCardBrand.h>

@class PKPayment;
@class PKPaymentSummaryItem;

/** @addtogroup ios_sdk
 *  @{
 */

/**
 @brief Defines Apple Pay payment method.
 @details It is merchant's app responsibility to gather parameters via PKPaymentAuthorizationViewController.
  Supported transaction types:
  - WDECTransactionTypeAuthorization,
  - WDECTransactionTypePurchase
 */
@interface WDECApplePayPayment : WDECPayment

/**
 @brief PKPayment object gathered via PKPaymentAuthorizationViewController
 */
@property (strong, nonatomic, nullable) PKPayment *payment;

/**
 @brief summaryItems gathered via PKPaymentAuthorizationViewController
 */
@property (strong, nonatomic, nullable) NSArray<PKPaymentSummaryItem *> *summaryItems;

@end

/** @} */

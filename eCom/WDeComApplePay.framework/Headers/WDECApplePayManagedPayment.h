//
//  WDApplePayManagedPayment.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 10/31/15.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <WDeComApplePay/WDECApplePayPayment.h>

/** @addtogroup ios_sdk
 *  @{
 */

/**
 @brief Defines ApplePay payment method.
 @details WDClient handles PKPaymentAuthorizationViewController. As it does not support complex use cases (shipping address selection, ...) it is intended for simple payments. In case of complex use cases handle PKPaymentAuthorizationViewController by your own and use WDECApplePayPayment
 */
@interface WDECApplePayManagedPayment : WDECApplePayPayment

/**
 @brief Apple Merchant ID
 */
@property (copy, nonatomic, nonnull) NSString *appleMerchantID;
/**
 @brief Merchant's Country
 */
@property (assign, nonatomic) WDECCountry appleMerchantCountry;

/**
 @brief prompt user for billing address
 */
@property (assign, nonatomic) BOOL requiredBillingAddress;
/**
 @brief prompt user for shipping address
 */
@property (assign, nonatomic) BOOL requiredShippingAddress;

/**
 *  @brief Set of supported card brands.
 *  @details If supportedCardBrands is set SDK call canMakePayment and returns error WDECErrorCodeUnsupportedPaymentMethod if card is unavailable. Set can contain NSNumbers with ::WDECCardBrand values. Example:
 
 payment.supportedCardBrands = [NSSet setWithObjects:@(WDECCardBrandAmex), @(WDECCardBrandMasterCard), @(WDECCardBrandVisa), nil];
 
 */
@property (copy, nonatomic, nullable) NSSet<NSNumber *> *supportedCardBrands;

@end

/** @} */

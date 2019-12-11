//
//  WDECAlipayPayment.h
//  WDeCom
//
//  Created by Vrana, Jozef on 2/5/17.
//  Copyright © 2017 Wirecard Technologies GmbH. All rights reserved.
//

#import <WDeCom/WDECPayment.h>

/** @addtogroup ios_sdk
 *  @{
 */

/**
 *  @brief Defines Alipay payment method.
 */

@interface WDECAlipayPayment : WDECPayment

/**
 *  @brief Initialize payment object
 *
 *  @param amount          Amount that accompanies the transaction
 *  @param currency        Currency in which the transaction is processed
 *
 *  @return initialized object or nil
 */
- (nullable instancetype)initWithAmount:(nonnull NSDecimalNumber *)amount
                               currency:(WDECCurrency)currency DEPRECATED_MSG_ATTRIBUTE("Use [initWithAmount:currencyString:] instead.");

/**
 *  @brief Initialize payment object
 *
 *  @param amount          Amount that accompanies the transaction
 *  @param currency        Currency in which the transaction is processed
 *
 *  @return initialized object or nil
 */
- (nullable instancetype)initWithAmount:(nonnull NSDecimalNumber *)amount
                         currencyString:(nonnull NSString *)currency NS_DESIGNATED_INITIALIZER;

- (nonnull instancetype)init NS_UNAVAILABLE;

@end

/** @} */

//
//  WDCardPayment.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 10/12/15.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <WDeCom/WDeCom.h>

#import <WDeComCoreCard/WDECCardToken.h>

/** @addtogroup ios_sdk
 *  @{
 */

/**
 *  @brief Defines Card payment method
 */
@interface WDECCardPayment : WDECPayment

/**
 *  @brief Indicates that the Transaction Request should proceed with the 3D Secure workflow if the [Card Holder] is enrolled. Otherwise, the transaction proceeds without 3D Secure
 *  @details Default value is WDECBoolYes. In case of referenced transactions (WDECTransactionTypeCaptureAuthorization, WDECTransactionTypeReferencedAuthorization, WDECTransactionTypeReferencedPurchase), it is ignored.
 */
@property (assign, nonatomic) WDECBool attemptThreeD;

/**
 @brief It describes recurring transactions.
 */
@property (strong, nonatomic, nullable) WDECPeriodic *periodic;

/**
 *  @brief Prompt [Card Holder] for security code, in case of referenced transactions.
 *  @details Default value is NO.
 */
@property (assign, nonatomic, getter=isSecurityCodeRequired) BOOL requireSecurityCode;

/**
 @Used to signalize card token usage
 */
@property (assign, nonatomic, getter=istokenIndicatorUsed) BOOL tokenUsageIndicator;

/**
 *  @brief Prompt Card Holder
 *  @details Default value is YES.
 */
@property (assign, nonatomic, getter=isCardholderRequired) BOOL requireCardholder;

/**
 *  @brief Tokenized card data gathered by previous transaction [WDECCardPaymentResponse cardToken].
 *  @details set [WDECCardToken tokenID] if you want to use the same card as in previous transaction. In case of transaction referenced by parentTransactionID and security code is required set [WDECCardToken maskedAccountNumber] to help user with security code typing
 */
@property (strong, nonatomic, nullable) WDECCardToken *token;

/**
 *  @brief Info about particular merchant.
 *  @details It is optional.
 */
@property (strong, nonatomic, nullable) WDECSubMerchantInfo *subMerchantInfo;

@end

/** @} */

//
//  WDPayment.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 10/8/15.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <WDeCom/WDECCurrency.h>
#import <WDeCom/WDECCustomerData.h>
#import <WDeCom/WDECLocale.h>
#import <WDeCom/WDECNotification.h>
#import <WDeCom/WDECNotificationFormat.h>
#import <WDeCom/WDECOrder.h>
#import <WDeCom/WDECTransactionType.h>
#import <WDeCom/WDECAirlineIndustry.h>
#import <WDeCom/WDECIsoTransactionType.h>
#import <WDeCom/WDECMerchantRiskIndicator.h>
#import <WDeCom/WDECLoyaltyCard.h>
#import <WDeCom/WDECCardData.h>

@class WDECPaymentMethod;

/** @addtogroup ios_sdk
 *  @{
 */

/**
 *  @brief Base class of all Payment Methods.
 *  @details Initialization WDECPayment object is useful only for [WDECClient checkPayment:] method.
 */
@interface WDECPayment : NSObject

/**
 *  @brief Authorize client to process the transaction.
 *  @details It is mandatory.
 */
@property (strong, nonatomic, nonnull) NSString *requestSignature DEPRECATED_MSG_ATTRIBUTE("Use 2nd generation signature instead");


/**
 *  @brief Date when requestSignature was generated
 *  @details It is mandatory for requestSignature
 */
@property (strong, nonatomic, nonnull) NSDate *requestTimestamp DEPRECATED_MSG_ATTRIBUTE("Use 2nd generation signature instead");

/**
 *  @brief 2nd generation signature. Authorize client to process the transaction. checkPayment works only with this signature.
 *  @details It is mandatory. It supersedes requestSignature and requestTimestamp.
 */
@property (copy, nonatomic, nonnull) NSString *signature;

/**
 *  @brief Unique identifier assigned for every Merchant Account.
 *  @details It is mandatory.
 */
@property (strong, nonatomic, nonnull) NSString *merchantAccountID;

/**
 *  @brief Category used by frontend merchant to resolve internal merchant for processing payment.
 *  @details It is optional.
 */
@property (strong, nonatomic, nullable) NSString *merchantAccountResolverCategory;

/**
 *  @brief Unique identifier associated with the transaction, which is created by the merchant.
 *  @details It is mandatory.
 */
@property (strong, nonatomic, nonnull) NSString *requestID;

/**
 @brief The only amount that accompanies the transaction when it is created and/or requested.
 @details For transactionType WDECTransactionTypeAuthorizationOnly the only valid value is [NSDecimalNumber zero].
 It is mandatory.
 */
@property (strong, nonatomic, nullable) NSDecimalNumber *amount;

/**
 @brief Currency in which the transaction is processed.
 @details This property is deprecated, use NSString *currency instead.
 */
@property (assign, nonatomic) WDECCurrency amountCurrency DEPRECATED_MSG_ATTRIBUTE("Use currency property instead");

/**
 @brief Currency in which the transaction is processed.
 @details It is mandatory. Exaples: "EUR", "GBP", "USD", ...
 */
@property (strong, nonatomic, nullable) NSString *currency;

/**
 @brief Determines transaction processing behaviour.
 @details It is mandatory.
 */
@property (assign, nonatomic) WDECTransactionType transactionType;

/**
 @brief Customer's account information.
 @details It is optional.
 */
@property (strong, nonatomic, nullable) WDECCustomerData *accountHolder;

/**
 @brief Customer's shipping information
 @details It is optional.
 */
@property (strong, nonatomic, nullable) WDECCustomerData *shipping;

/**
 @brief Customer's order information.
 @details It is optional.
 */
@property (strong, nonatomic, nullable) WDECOrder *order;

/**
 @brief Notifications configuration
 @details It is optional.
 */
@property (strong, nonatomic, nullable) NSArray<WDECNotification *> *notifications;

@property (assign, nonatomic) WDECNotificationFormat notificationsFormat;
/**
 @brief The IP Address of the Customer as recorded by the entity receiving the Transaction Attempt from the Customer
 @details It is optional.
 */
@property (strong, nonatomic, nullable) NSString *IPAddress;

/**
 @brief Defines the user's language and any special variant preferences that the user wants to see in their user interface.
 @details Typically used by WDECPayPalPayment and 3D Secure WDCardPayment HTML formulars.
 It is optional.
 */
@property (assign, nonatomic ) WDECLocale locale;

/**
 * Airline industry
 */
@property (strong, nonatomic, nullable) WDECAirlineIndustry *airlineIndustry;

/**
 * Merchant's assessment of the level of fraud risk for the specific authentication for both the cardholder and   the authentication being conducted.
 */
@property (strong, nonatomic, nullable) WDECMerchantRiskIndicator *merchantRiskIndicator;

/**
 * Identifies the type of transaction being authenticated. The values are derived from ISO 8583.
 */
@property (assign, nonatomic) WDECIsoTransactionType isoTransactionType;

/**
 @brief transaction identifier of previous transaction gathered by [WDECPaymentResponse transactionIdentifier]
 @details It is used with referenced transactions: WDECTransactionTypeCaptureAuthorization, WDECTransactionTypeReferencedAuthorization, WDECTransactionTypeReferencedPurchase, WDECTransactionTypeRefundCapture, WDECTransactionTypeRefundPurchase and WDECTransactionTypeVoidAuthorization
 */
@property (strong, nonatomic, nullable) NSString *parentTransactionID;

/**
 * @brief App scheme which is configured in Info.plist and associated with your app. It is used to redirect consumers from the banking apps or websites to your app.
 */
@property (strong, nonatomic, nonnull) NSString *appScheme;

/**
 * @brief Loyalty card information
 * @details Typically used by card for WDECTransactionTypeEnrollment transaction
 */
@property (strong, nonatomic, nullable) WDECLoyaltyCard *loyaltyCard;

/**
 * @brief Extre card data informations
 * @details Typically used by card for WDECTransactionTypeEnrollment transaction
 */
@property (strong, nonatomic, nullable) WDECCardData *cardData;

/**
 * @brief Instrument Country
 */
@property (assign, nonatomic) WDECCountry instrumentCountry;

/**
 * @brief Consumer ID
 * @details Typically used by card for WDECTransactionTypeEnrollment transaction. It's required field for transaction without acount holder identification data (email, phone)
 */
@property (strong, nonatomic, nullable) NSString *consumerID;

/**
 @brief initialize payment with mandatory parameters

 @param merchantAccountID Unique identifier assigned for every Merchant Account
 @param requestID Unique identifier associated with the transaction, which is created by the merchant
 @param transactionType determines transaction processing behaviour
 @param amount The only amount that accompanies the transaction when it is created and/or requested
 @param currency in which the transaction is processed
 @param signature 2nd generation signature. Authorize client to process the transaction
 
 @details you can use WDECTransactionTypeUndefined and nil amount/currency to checkPayment
 
 @return Returns payment object for WDECClient.
 */
- (nullable instancetype)initWithMerchantAccountID:(nonnull NSString *)merchantAccountID
                                         requestID:(nonnull NSString *)requestID
                                   transactionType:(WDECTransactionType)transactionType
                                            amount:(nullable NSDecimalNumber *)amount
                                          currency:(nullable NSString *)currency
                                         signature:(nonnull NSString *)signature;

/**
 @brief initialize payment with mandatory parameters for checkPayment
 
 @param merchantAccountID Unique identifier assigned for every Merchant Account
 @param requestID Unique identifier associated with the transaction, which is created by the merchant
 @param signature 2nd generation signature. Authorize client to process the transaction
 
 @details It is useful for [WDECClient checkPayment:].
 
 @return Returns payment object for WDECClient.
 */
- (nullable instancetype)initWithMerchantAccountID:(nonnull NSString *)merchantAccountID
                                         requestID:(nonnull NSString *)requestID
                                         signature:(nonnull NSString *)signature;

/**
 @brief Returns the notification for transaction state.
 @param state The transaction state defined by WDECTransactionState enumaration
 @return Returns notification or nil if no associated notification.
 */
- (nullable WDECNotification *)notificationForState:(WDECTransactionState)state;

@end

/** @} */

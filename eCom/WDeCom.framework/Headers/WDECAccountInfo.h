//
//  WDECAccountInfo.h
//  WDeCom
//
//  Created by Vrana, Jozef on 16/04/2019.
//  Copyright © 2019 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WDeCom/WDECAuthenticationMethod.h>
#import <WDeCom/WDeCChallengeIndicator.h>
/** @addtogroup ios_sdk
 *  @{
 */

/**
 * @brief Account info
 */
@interface WDECAccountInfo : NSObject

/**
 * @brief Date that the cardholder opened the account with the 3DS Requestor. Date format = YYYYMMDD.
 */
@property(strong, nonatomic, nullable) NSDate *creationDate;

/**
 * @brief Date that the cardholder’s account with the 3DS Requestor was last changed. Including Billing or Shipping   address, new payment account, or new user(s) added. Date format = YYYYMMDD.
 */
@property(strong, nonatomic, nullable) NSDate *updateDate;

/**
 * @brief Date that cardholder’s account with the 3DS Requestor had a password change or account reset. Date   format must be YYYYMMDD.
 */
@property(strong, nonatomic, nullable) NSDate *passwordChangeDate;

/**
 * @brief Date when the shipping address used for this transaction was first used with the 3DS Requestor. Date   format must be YYYYMMDD.
 */
@property(strong, nonatomic, nullable) NSDate *shippingAddressFirstUse;

/**
 * @brief Number of transactions (successful and abandoned) for this cardholder account with the 3DS Requestor across   all payment accounts in the previous 24 hours.
 */
@property(assign, nonatomic) NSInteger transactionsLastDay;

/**
 * @brief Number of transactions (successful and abandoned) for this cardholder account with the 3DS Requestor across   all payment accounts in the previous year.
 */
@property(assign, nonatomic) NSInteger transactionsLastYear;

/**
 * @brief Number of Add Card attempts in the last 24 hours.
 */
@property(assign, nonatomic) NSInteger cardTransactionsLastDay;

/**
 * @brief Number of purchases with this cardholder account during the previous six months.
 */
@property(assign, nonatomic) NSInteger purchasesLastSixMonths;

/**
 * @brief Indicates whether the 3DS Requestor has experienced suspicious activity(including previous fraud) on  the cardholder account.  Accepted values are:
 * true -> No suspicious activity has been observed
 * false -> Suspicious activity has been observed
 */
@property(assign, nonatomic) BOOL suspiciousActivity;

/**
 * @brief Date that the payment account was enrolled in the cardholder’s account with the 3DS Requestor. Date format must be YYYYMMDD.
 */
@property(strong, nonatomic, nullable) NSDate *cardCreationDate;

/**
 * @brief Indicates the type of the cardholder login in the merchant’s shop by the WDECAuthenticationMethod enum.
 */
@property (assign, nonatomic) WDECAuthenticationMethod authenticationMethod;

/**
 * @brief Date and time (UTC) of the consumer login in the merchant’s shop. Date Format: YYYY-MM-DDThh:mm:ssZ. For guest checkout, the timestamp is now.
 */
@property (strong, nonatomic, nullable) NSDate *authenticationTimestamp;

/**
 * @brief Indicates whether a challenge is requested for this transaction with the 3DS Requestor. If the element is not provided, the ACS will interpret this as WDECChallengeIndicatorNoPreference.
 */
@property (assign, nonatomic) WDECChallengeIndicator challengeIndicator;

@end



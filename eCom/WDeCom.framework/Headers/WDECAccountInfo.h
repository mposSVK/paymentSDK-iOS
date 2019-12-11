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
 * Date that the cardholder opened the account with the 3DS Requestor. Date format = YYYYMMDD.
 */
@property(strong, nonatomic, nullable) NSDate *creationDate;

/**
 * Date that the cardholder’s account with the 3DS Requestor was last changed. Including Billing or Shipping   address, new payment account, or new user(s) added. Date format = YYYYMMDD.
 */
@property(strong, nonatomic, nullable) NSDate *updateDate;

/**
 * Date that cardholder’s account with the 3DS Requestor had a password change or account reset. Date   format must be YYYYMMDD.
 */
@property(strong, nonatomic, nullable) NSDate *passwordChangeDate;

/**
 * Date when the shipping address used for this transaction was first used with the 3DS Requestor. Date   format must be YYYYMMDD.
 */
@property(strong, nonatomic, nullable) NSDate *shippingAddressFirstUse;

/**
 * Number of transactions (successful and abandoned) for this cardholder account with the 3DS Requestor across   all payment accounts in the previous 24 hours.
 */
@property(assign, nonatomic) NSInteger transactionsLastDay;

/**
 * Number of transactions (successful and abandoned) for this cardholder account with the 3DS Requestor across   all payment accounts in the previous year.
 */
@property(assign, nonatomic) NSInteger transactionsLastYear;

/**
 * Number of Add Card attempts in the last 24 hours.
 */
@property(assign, nonatomic) NSInteger cardTransactionsLastDay;

/**
 * Number of purchases with this cardholder account during the previous six months.
 */
@property(assign, nonatomic) NSInteger purchasesLastSixMonths;

/**
 * Indicates whether the 3DS Requestor has experienced suspicious activity(including previous fraud) on   the cardholder account. Accepted values are:
 * true -> No suspicious activity has been observed
 * false -> Suspicious activity has been observed
 */
@property(assign, nonatomic) BOOL suspiciousActivity;

/**
 * Date that the payment account was enrolled in the cardholder’s account with the 3DS Requestor. Date format must be YYYYMMDD.
 */
@property(strong, nonatomic, nullable) NSDate *cardCreationDate;

@property (assign, nonatomic) WDECAuthenticationMethod authenticationMethod;
@property (strong, nonatomic, nullable) NSDate *authenticationTimestamp;
@property (assign, nonatomic) WDECChallengeIndicator challengeIndicator;

@end



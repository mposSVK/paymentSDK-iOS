//
//  WDPeriodic.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 11/5/15.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "WDECPeriodicType.h"
#import "WDECSequenceType.h"

/** @addtogroup ios_sdk
 *  @{
 */

/**
 * @brief Describes how the recurring transaction is related to previous/following transaction(s)
 */
@interface WDECPeriodic : NSObject

/**
 @brief Indicates how and why a Payment occurs more than once
 @details It is intended as differentiation for the merchant's use. Which of the two [periodic type](WDECPeriodicType) is chosen depends on the merchant's business model.
 
 - WDECPeriodicTypeInstallment indicates one in a set that completes a financial transaction.
 - WDECPeriodicTypeRecurring: indicates one in a set that occurs repeatedly, such as a subscription.
 
 Both WDECPeriodicTypeInstallment and WDECPeriodicTypeRecurring transactions will be processed the same way.
 */
@property (assign, nonatomic) WDECPeriodicType periodicType;

/** Indicates the sequence of the recurring transaction */
@property (assign, nonatomic) WDECSequenceType sequenceType;

/**
 * Date after which no further authorizations shall be performed. This field is limited to 8 characters, and the accepted format is YYYYMMDD. This field is required for 01-PA and for 02-NPA, if 3DS Requestor Authentication Indicator = 02 or 03.
 */
@property (strong, nonatomic, nullable) NSDate *periodicExpiryDate;
/**
 * Indicates the minimum number of   days between authorizations. The field is limited to maximum 4 characters. This field is required if 3DS Requestor Authentication Indicator = 02 or 03.
 */
@property (strong, nonatomic, nullable) NSString *recurringFrequency;

@end

/** @} */

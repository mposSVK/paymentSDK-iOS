//
//  WDECAvailabilityTime.h
//  WDeCom
//
//  Created by Vrana, Jozef on 23/04/2019.
//  Copyright © 2019 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of availability times */
typedef NS_ENUM(NSUInteger, WDECAvailabilityTime) {
    /** Uninitialized or invalid value */
    WDECAvailabilityTimeUndefined = 0,
    /**
     * Merchandise available
     */
    WDECAvailabilityTimeMerchantsideAvailability,
    /**
     * Future availability
     */
    WDECAvailabilityTimeFutureAvailability,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    WDECAvailabilityTimeTotalNumber
};

/**
 @brief Converts transaction type string representation to WDECAvailabilityTime enumeration
 
 @param code availability time string representation
 
 @return WDECAvailabilityTime enumeration
 */
WDECAvailabilityTime WDECAvailabilityTimeFromCode(NSString *code);
/**
 @brief Converts availability time WDECAvailabilityTime enumeration to string representation
 
 @param availabilityTime WDECAvailabilityTime enumeration
 
 @return availability time type string representation
 */
NSString *WDECAvailabilityTimeGetCode(WDECAvailabilityTime availabilityTime);

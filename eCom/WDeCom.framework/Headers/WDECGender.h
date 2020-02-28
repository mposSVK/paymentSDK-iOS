//
//  WDECGender.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 10/12/15.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** Gender */
typedef NS_ENUM(NSUInteger, WDECGender) {
    /** Uninitialized or invalid value */
    WDECGenderUndefined = 0,
    
    /** Male */
    WDECGenderMale,
    /** Female */
    WDECGenderFemale,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    WDECGenderTotalNumber
};

/** @} */

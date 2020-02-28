//
//  WDECBool.h
//  WDeCom
//
//  Created by Vrana, Jozef on 3/24/17.
//  Copyright © 2017 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of general boolean values */
typedef NS_ENUM(NSUInteger, WDECBool) {
    /** Uninitialized or invalid value */
    WDECBoolUndefined = 0,
    
    /** Positive boolean value */
    WDECBoolYes,
    /** Negative boolean value */
    WDECBoolNo,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    WDECBoolTotalNumber
};

/** @} */

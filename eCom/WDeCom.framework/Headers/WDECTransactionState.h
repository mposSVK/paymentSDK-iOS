//
//  WDECTransactionState.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 10/12/15.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of transaction states */
typedef NS_ENUM(NSUInteger, WDECTransactionState) {
    /** Uninitialized or invalid value */
    WDECTransactionStateUndefined = 0,
    
    /** Successful state */
    WDECTransactionStateSuccess,
    /** Failure state */
    WDECTransactionStateFailed,
    /** In-progress state */
    WDECTransactionStateInProgress,
    /** Repeated state */
    WDECTransactionStateRepeated,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    WDECTransactionStateTotalNumber
};

WDECTransactionState WDECTransactionStateFromCode(NSString *code);
NSString *WDECTransactionStateGetCode(WDECTransactionState transactionState);
/** @} */

//
//  WDECReorderType.h
//  WDeCom
//
//  Created by Vrana, Jozef on 16/04/2019.
//  Copyright © 2019 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of reorder types */
typedef NS_ENUM(NSUInteger, WDECReorderType) {
    /** Uninitialized or invalid value */
    WDECReorderTypeUndefined = 0,
    /**
     * First time ordered
     */
    WDECReorderTypeFirstTime,
    /**
     * Reordered
     */
    WDECReorderTypeReordered,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    WDECReorderTypeTotalNumber
};

/**
 @brief Converts transaction type string representation to WDECTransactionType enumeration
 
 @param code reorder type string representation
 
 @return WDECReorderType enumeration
 */
WDECReorderType WDECReorderTypeFromCode(NSString *code);
/**
 @brief Converts reorder type WDECReorderType enumeration to string representation
 
 @param reorderType WDECReorderType enumeration
 
 @return reorder type string representation
 */
NSString *WDECReorderTypeGetCode(WDECReorderType reorderType);

/** @} */

    


//
//  DeliveryTimeframe.h
//  WDeCom
//
//  Created by Vrana, Jozef on 16/04/2019.
//  Copyright © 2019 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of delivery time frames */
typedef NS_ENUM(NSUInteger, WDECDeliveryTimeframe) {    
    /** Uninitialized or invalid value */
    WDECDeliveryTimeframeUndefined = 0,
    /**
     * Electronic Delivery
     */
    WDECDeliveryTimeframeElectronicDelivery,
    /**
     * Same day shipping
     */
    WDECDeliveryTimeframeSameDay,
    /**
     * Overnight shipping
     */
    WDECDeliveryTimeframeOvernight,
    /**
     * Two-day or more shipping
     */
    WDECDeliveryTimeframeTwoOrMoreDays,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    WDECDeliveryTimeframeTotalNumber
};

/**
 @brief Converts transaction type string representation to WDECDeliveryTimeframe enumeration
 
 @param code delivery time frame string representation
 
 @return WDECDeliveryTimeframe enumeration
 */
WDECDeliveryTimeframe WDECDeliveryTimeframeFromCode(NSString *code);
/**
 @brief Converts reorder type WDECDeliveryTimeframe enumeration to string representation
 
 @param deliveryTimeframe WDECDeliveryTimeframe enumeration
 
 @return reorder type string representation
 */
NSString *WDECDeliveryTimeframeGetCode(WDECDeliveryTimeframe deliveryTimeframe);

/** @} */

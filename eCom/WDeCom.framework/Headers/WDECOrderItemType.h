//
//  WDECOrderItemType.h
//  WDeCom
//
//  Created by Stavny, Peter on 30/03/2020.
//  Copyright © 2020 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of order item types */
typedef NS_ENUM(NSUInteger, WDECOrderItemType) {
    /** Uninitialized or invalid value */
    WDECOrderItemTypeUndefined = 0,
    
    /** A order item represents the shipment fee  */
    WDECOrderItemTypeShipmentFee,
    
    /** A order item represents the hanling fee  */
    WDECOrderItemTypeHandlingFee,
 
    /** A order item represents the discount  */
    WDECOrderItemTypeDiscount,

    /** A order item represents the physical item */
    WDECOrderItemTypePhysical,
    
    /** A order item represents the sales tax  */
    WDECOrderItemTypeSalesTax,
    
    /** A order item represents the digital item  */
    WDECOrderItemTypeDigital,
    
    /** A order item represents the gift card  */
    WDECOrderItemTypeGiftCard,

    /** A order item represents the store credit  */
    WDECOrderItemTypeStoreCredit,

    /** Total number of values. It is used for validation and handled as invalid value */
    WDECOrderItemTypeTotalNumber
};

/**
 @brief Converts transaction type string representation to WDECOrderItemType enumeration
 
 @param code order item type string representation
 
 @return WDECOrderItemType enumeration
 */
WDECOrderItemType WDECOrderItemTypeFromCode(NSString *code);
/**
 @brief Converts transaction type WDECOrderItemType enumeration to string representation
 
 @param orderItemType order item type WDECOrderItemType enumeration
 
 @return order item type  string representation
 */
NSString *WDECOrderItemTypeGetCode(WDECOrderItemType orderItemType);

/** @} */

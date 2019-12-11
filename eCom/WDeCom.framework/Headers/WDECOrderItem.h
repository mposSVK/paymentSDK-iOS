//
//  WDECOrderItem.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 10/8/15.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <WDeCom/WDECCurrency.h>

/** @addtogroup ios_sdk
 *  @{
 */

/**
 * @brief Order item data
 */
@interface WDECOrderItem : NSObject

/**
 @brief Name of the item in basket
 @details It is mandatory
 */
@property (strong, nonatomic) NSString *name;
/**
 @brief Item description
 @details It is optional
 */
@property (strong, nonatomic) NSString *itemDescription;
/**
 @brief Item EAN or other article identifier
 @details It is optional
 */
@property (strong, nonatomic) NSString *articleNumber;

/**
 @brief Item price per unit
 @details Order item amount always includes tax. It is mandatory.
 */
@property (strong, nonatomic) NSDecimalNumber *amount;

// TODO: remove
@property (assign, nonatomic) WDECCurrency amountCurrency;

/**
 @brief Item tax per unit
 @details It is optional
 */
@property (strong, nonatomic) NSDecimalNumber *taxAmount;

/**
 @brief Total count of the item in the order
 @details It is mandatory
 */
@property (strong, nonatomic) NSDecimalNumber *quantity;

@end

/** @} */

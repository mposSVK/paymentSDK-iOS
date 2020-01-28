//
//  WDECAddress.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 10/8/15.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDECCountry.h"

/** @addtogroup ios_sdk
 *  @{
 */

/**
 * @brief Address data
 */
@interface WDECAddress : NSObject

/**
 @brief Street line 1
 @details It is mandatory. Max. length is 128
 */
@property (strong, nonatomic, nonnull ) NSString *street1;
/**
 @brief Street line 2
 @details It is optional. Max. length is 128
 */
@property (strong, nonatomic, nullable) NSString *street2;
/**
 @brief City
 @details It is required. Max. length is 32
 */
@property (strong, nonatomic, nonnull ) NSString *city;
/**
 @brief State
 @details It is optional. Max. length is 32
 */
@property (strong, nonatomic, nullable) NSString *state;

/**
 @brief Country
 @details It is required.
 */
@property (assign, nonatomic)           WDECCountry country;
/**
 @brief Postal Code
 @details It is optional. Max. length is 16
 */
@property (strong, nonatomic, nullable) NSString *postalCode; // max. length 16

@end

/** @} */

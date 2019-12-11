//
//  WDCard.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 11/19/15.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <WDeComCoreCard/WDECCardBrand.h>

/** @addtogroup ios_sdk
 *  @{
 */

/**
 * @brief Non-sensitive card data
 */
@interface WDECCard : NSObject<NSCopying>

/**
 @brief Card expiration date.
 */
@property (copy, nonatomic, nullable) NSDate *expiryDate;

/**
 @brief Card brand
 */
@property (assign, nonatomic) WDECCardBrand brand;

@property (assign, nonatomic, getter=istokenIndicatorUsed) BOOL tokenUsageIndicator;
@end

/** @} */

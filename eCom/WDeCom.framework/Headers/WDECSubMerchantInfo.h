//
//  WDSubMerchantInfo.h
//  WDeCom
//
//  Created by Vrana, Jozef on 12/20/16.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDECCountry.h"

@interface WDECSubMerchantInfo : NSObject

/**
 @brief SubmerchantInfo city.
 */
@property (strong, nonatomic) NSString *city;

/**
 @brief SubmerchantInfo country.
 */
@property (assign, nonatomic) WDECCountry country;

/**
 @brief SubmerchantInfo identifier.
 */
@property (strong, nonatomic) NSString *identifier;

/**
 @brief SubmerchantInfo name.
 */
@property (strong, nonatomic) NSString *name;

/**
 @brief SubmerchantInfo postalCode.
 */
@property (strong, nonatomic) NSString *postalCode;

/**
 @brief SubmerchantInfo state.
 */
@property (strong, nonatomic) NSString *state;

/**
 @brief SubmerchantInfo street.
 */
@property (strong, nonatomic) NSString *street;

@end

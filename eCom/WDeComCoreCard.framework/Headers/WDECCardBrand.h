//
//  WDECCardBrand.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 11/19/15.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of card brands */
typedef NS_ENUM(NSUInteger, WDECCardBrand) {
    /** Uninitialized or invalid value */
    WDECCardBrandUndefined = 0,
    
    WDECCardBrandAmex,
    WDECCardBrandArCa,
    WDECCardBrandCB,
    WDECCardBrandCUP,
    WDECCardBrandDiners,
    WDECCardBrandDiscover,
    WDECCardBrandJCB,
    WDECCardBrandMaestro,
    WDECCardBrandMasterCard,
    WDECCardBrandMir,
    WDECCardBrandUATP,
    WDECCardBrandUzCard,
    WDECCardBrandVisa,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    WDECCardBrandTotalNumber
};

/**
 @brief Converts card brand string representation to WDECCardBrand enumeration
 
 @param code card brand string representation
 
 @return WDECCardBrand enumeration
 */
WDECCardBrand WDECCardBrandFromCode(NSString *code);

/**
 @brief Converts card brand WDECCardBrand enumeration to string representation
 
 @param cardBrand card brand WDECCardBrand enumeration
 
 @return card brand string representation
 */
NSString *WDECCardBrandGetCode(WDECCardBrand cardBrand);
/** @} */

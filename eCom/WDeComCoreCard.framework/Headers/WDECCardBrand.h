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
    WDECCardBrandUPI,

    /** Total number of values. It is used for validation and handled as invalid value */
    WDECCardBrandTotalNumber
};

/**
 * @brief Converts card brand string representation to WDECCardBrand enumeration
 * @param code card brand string representation
 * @return WDECCardBrand enumeration
 */
WDECCardBrand WDECCardBrandFromCode(NSString *code);

/**
 * @brief Converts card brand WDECCardBrand enumeration to string representation
 * @param cardBrand card brand WDECCardBrand enumeration
 * @return card brand string representation
 */
NSString *WDECCardBrandGetCode(WDECCardBrand cardBrand);

/** List of card brands */
typedef NS_ENUM(NSUInteger, WDECCardBrandSelection) {
    /** Uninitialized or invalid value */
    WDECCardBrandSelectionUndefined = 0,
    WDECCardBrandSelectionDefault,
    WDECCardBrandSelectionCardholder,

    /** Total number of values. It is used for validation and handled as invalid value */
    WDECCardBrandSelectionTotalNumber
};

/**
 * @brief Converts card brand selection string representation to WDECCardBrandSelection enumeration
 * @param code card brand selection string representation
 * @return WDECCardBrandSelection enumeration
 */
WDECCardBrandSelection WDECCardBrandSelectionFromCode(NSString *code);

/**
 * @brief Converts card brand WDECCardBrandSelection enumeration to string representation
 * @param cardBrandSelection card brand WDECCardBrandSelection enumeration
 * @return card brand selection string representation
 */
NSString *WDECCardBrandSelectionGetCode(WDECCardBrandSelection cardBrandSelection);

/** @} */

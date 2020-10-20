//
//  WDECKlarnaCategory.h
//  WDeComKlarna
//
//  Created by Pribulla, Rastislav on 09/03/2020.
//  Copyright © 2020 Wirecard Technologies GmbH. All rights reserved.
//
#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of supported Klarna's payment categories */
typedef NS_ENUM(NSUInteger, WDECKlarnaCategory) {
    /** Uninitialized or invalid value */
    WDECKlarnaCategoryUndefined = 0,
    
    /** klarna-debit for Klarna direct debit (Pay now) */
    WDECKlarnaCategoryDebit,
    
    /** Klarna-finance for payment in installments (Financing/Slice it) */
    WDECKlarnaCategoryFinance,
    
    /** klarna-paylater for Klarna payment on invoive (Pay later) */
    WDECKlarnaCategoryPayLater,
    
    /** klarna-transfer for Klarna bank transfer (Pay now) */
    WDECKlarnaCategoryTransfer,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    WDECKlarnaCategoryTotalNumber
};

/**
@brief Converts klarna's category string representation to WDECKlarnaCategory enumeration

@param category klarna's category string representation

@return WDECKlarnaCategory enumeration
*/
WDECKlarnaCategory WDECKlarnaCategoryFromCode(NSString *category);
/**
@brief Converts consumer receipt format WDECKlarnaCategory enumeration to string representation

@param category klarna's category WDECKlarnaCategory enumeration

@return klarna's category  string representation
*/
NSString *WDECKlarnaCategoryGetCode(WDECKlarnaCategory category);


/** @} */



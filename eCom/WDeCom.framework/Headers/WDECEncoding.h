//
//  WDECEncoding.h
//  WDeCom
//
//  Created by Stavny, Peter on 30/03/2020.
//  Copyright © 2020 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of posiible encoding types */
typedef NS_ENUM(NSUInteger, WDECEncoding) {
    /** Uninitialized or invalid value */
    WDECEncodingUndefined = 0,
    
    /** A base64 encoding  */
    WDECEncodingBase64,
    
    /** A hex encoding  */
    WDECEncodingHex,
    
    /** A non encoding  */
    WDECEncodingNone,

    /** Total number of values. It is used for validation and handled as invalid value */
    WDECEncodingTotalNumber
};

/**
 @brief Converts encoding string representation to WDECEncoding enumeration
 
 @param code encoding string representation
 
 @return WDECEncoding enumeration
 */
WDECEncoding WDECEncodingFromCode(NSString *code);
/**
 @brief Converts encoding WDECEncoding enumeration to string representation
 
 @param encoding encoding WDECEncoding enumeration
 
 @return encoding type  string representation
 */
NSString *WDECEncodingGetCode(WDECEncoding encoding);

/** @} */

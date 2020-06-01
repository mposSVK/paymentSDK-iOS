//
//  WDECConsumerReceiptFormat.h
//  WDeCom
//
//  Created by Stavny, Peter on 30/03/2020.
//  Copyright © 2020 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of consumer receipt formats */
typedef NS_ENUM(NSUInteger, WDECConsumerReceiptFormat) {
    /** Uninitialized or invalid value */
    WDECConsumerReceiptFormatUndefined = 0,
    
    /** A consumer receipt format represents the ascii text  */
    WDECConsumerReceiptFormatAscii,
    
    /** A oconsumer receipt format represents the json  */
    WDECConsumerReceiptFormatJSON,

    /** Total number of values. It is used for validation and handled as invalid value */
    WDECConsumerReceiptFormatTotalNumber
};

/**
 @brief Converts consumer receipt format string representation to WDECConsumerReceiptFormat enumeration
 
 @param code consumer receipt format string representation
 
 @return WDECConsumerReceiptFormat enumeration
 */
WDECConsumerReceiptFormat WDECConsumerReceiptFormatFromCode(NSString *code);
/**
 @brief Converts consumer receipt format WDECConsumerReceiptFormat enumeration to string representation
 
 @param format consumer receipt format WDECConsumerReceiptFormat enumeration
 
 @return consumer receipt format  string representation
 */
NSString *WDECConsumerReceiptFormatGetCode(WDECConsumerReceiptFormat format);

/** @} */

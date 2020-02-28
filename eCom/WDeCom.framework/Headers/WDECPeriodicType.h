//
//  WDECPeriodicType.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 11/5/15.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** Indicates how and why a transaction occurs more than once */
typedef NS_ENUM (NSUInteger, WDECPeriodicType) {
    /** Uninitialized or invalid value */
    WDECPeriodicTypeUndefined = 0,
    
    /** Completes a financial transaction */
    WDECPeriodicTypeInstallment,
    /** Occurs repeatedly, such as a subscription */
    WDECPeriodicTypeRecurring,
    /** The Unscheduled Credential on File (ucof) allows the merchant to reference a regularly based transaction (like an unlimited periodic payment or an installment payment) to an already successfully submitted transaction. */
    WDECPeriodicTypeUCOF,
    /** The periodic type ci (Consumer Initiated) allows the merchant to identify that the cardholder himself initiated the transaction and whether this is an initial (first) or subsequent (recurring) one. */
    WDECPeriodicTypeCI,
    /** Total number of values. It is used for validation and handled as invalid value */
    WDECPeriodicTypeTotalNumber
};

/**
 @brief Converts periodic type string representation to WDPeriodicType enumeration
 
 @param code periodic type string representation
 
 @return WDPeriodicType enumeration
 */
WDECPeriodicType WDECPeriodicTypeFromCode(NSString *code);
/**
 @brief Converts periodic type WDPeriodicType enumeration to string representation
 
 @param periodicType WDPeriodicType enumeration
 
 @return periodic type string representation
 */
NSString *WDECPeriodicTypeGetCode(WDECPeriodicType periodicType);

/** @} */


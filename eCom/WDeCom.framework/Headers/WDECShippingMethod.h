//
//  ShippingMethod.h
//  WDeCom
//
//  Created by Vrana, Jozef on 16/04/2019.
//  Copyright © 2019 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of shipping methods */
typedef NS_ENUM(NSUInteger, WDECShippingMethod) {
    /** Uninitialized or invalid value */
    WDECShippingMethodUndefined = 0,
    /**
     * Ship to cardholder’s billing address
     */
    WDECShippingMethodBillingAddress,
    /**
     * Ship to another verified address on file with merchant
     */
    WDECShippingMethodVerifiedAddress,
    /**
     * Ship to address that is different than the cardholder’s billing address
     */
    WDECShippingMethodDiffrentThanBilling,
    /**
     * “Ship to Store” / Pick-up at local store (Store address shall be populated in shipping address fields)
     */
    WDECShippingMethodShippingToStore,
    /**
     * Digital goods (includes online services, electronic gift cards and redemption codes)
     */
    WDECShippingMethodDigitalGoods,
    /**
     * Travel and Event tickets, not shipped
     */
    WDECShippingMethodTravelEvents,
    /**
     * Other (for example, Gaming, digital services not shipped, emedia subscriptions, etc.
     */
    WDECShippingMethodOther,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    WDECShippingMethodTotalNumber
};

/**
 @brief Converts transaction type string representation to WDECShippingMethod enumeration
 
 @param code transaction type string representation
 
 @return WDECShippingMethod enumeration
 */
WDECShippingMethod WDECShippingMethodFromCode(NSString *code);
/**
 @brief Converts transaction type WDECShippingMethod enumeration to string representation
 
 @param transactionType transaction type WDECShippingMethod enumeration
 
 @return transaction type string representation
 */
NSString *WDECShippingMethodGetCode(WDECShippingMethod transactionType);

/** @} */



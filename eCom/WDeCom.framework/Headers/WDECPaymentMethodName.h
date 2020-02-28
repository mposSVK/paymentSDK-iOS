//
//  WDECPaymentMethodName.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 7/11/16.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** Indicates payment method name */
typedef NS_ENUM (NSUInteger, WDECPaymentMethodName) {
    /** Uninitialized or invalid value */
    WDECPaymentMethodNameUndefined = 0,
    
    /** Alipay */
    WDECPaymentMethodAlipay,
    
    /** ApplePay is not used at the moment. Use WDECPaymentMethodNameCreditCard instead */
    WDECPaymentMethodNameApplePay,
    
    /** Credit Card */
    WDECPaymentMethodNameCreditCard,
    
    /** PayPal */
    WDECPaymentMethodNamePayPal,
    
    /** PBBA */
    WDECPaymentMethodNamePBBA,
    
    /** SEPA Direct Debit */
    WDECPaymentMethodNameSEPADirectDebit,

    /** Total number of values. It is used for validation and handled as invalid value */
    WDECPaymentMethodNameTotalNumber
};

/**
 @brief Converts payment method string representation to WDECPaymentMethodName enumeration
 
 @param code transaction type string representation
 
 @return WDECPaymentMethodName enumeration
 */
WDECPaymentMethodName WDECPaymentMethodNameFromCode(NSString *code);
/**
 @brief Converts transaction type WDECPaymentMethodName enumeration to string representation
 
 @param paymentMethodName transaction type WDECPaymentMethodName enumeration
 
 @return transaction type string representation
 */
NSString *WDECPaymentMethodNameGetCode(WDECPaymentMethodName paymentMethodName);

/** @} */

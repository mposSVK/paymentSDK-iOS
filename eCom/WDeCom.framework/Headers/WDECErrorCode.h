//
//  WDECErrorCodes.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 5/1/18.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#ifndef WDECErrorCodes_h
#define WDECErrorCodes_h

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

extern NSString *_Nonnull const WDPaymentSDKErrorDomain;

/** Error codes */
typedef NS_ENUM(NSInteger, WDECErrorCode) {
    /** Uninitialized value or no error */
    WDECErrorCodeOK                           = 0,
    /** General Error, always contains english description */
    WDECErrorCodeGeneral                      = -1,
    
    /** Network related issue, SSL pinning issue, ATS, ...) */
    WDECErrorCodeNetworkIssue                 = -2,
    /** Transaction has failed */
    WDECErrorCodeTransactionFailure           = -3,
    
    /** Payment method is not supported */
    WDECErrorCodeUnsupportedPaymentMethod     = -4,
    /** Invalid payment data */
    WDECErrorCodeInvalidPaymentData           = -5,
    /** User has canceled payment */
    WDECErrorCodeUserCanceled                 = -6,
    /** Another payment is in progress */
    WDECErrorCodePaymentInProgress            = -7,
    /** Device is jailbroken */
    WDECErrorCodeJailbrokenDevice             = -8,
    /** Unsupported payment gateway */
    WDECErrorCodeUnsupportedGateway           = -9,
    /** Transaction timeout */
    WDECErrorCodeTransactionTimeout           = -10,
    /** User has retried payment */
    WDECErrorCodeUserRetried                  = -11
};

#endif // WDECErrorCodes_h

/** @} */

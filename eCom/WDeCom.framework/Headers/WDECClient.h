//
//  WDAPIClient.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 10/12/15.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "WDECCompletionBlock.h"
#import "WDECEnvironment.h"
#import "WDECErrorCode.h"

@class WDECPayment;
@class WDECStyle;
@class WDECClientParameters;

/** @addtogroup ios_sdk
 *  @{
 */

/**
 * @brief Payment processing client
 */
@interface WDECClient : NSObject

- (nonnull instancetype)init NS_UNAVAILABLE;

/**
 *  @brief It initilizes client for processing payments.
 *
 *  @param environment Environment for processing payments
 *
 *  @return An initialized object, or nil if an object could not be created for some reason that would not result in an exception
 */
- (nullable instancetype)initWithEnvironment:(WDECEnvironment)environment;

/**
 *  @brief It initilizes client for processing payments.
 *
 *  @param environment Environment for processing payments
 *
 *  @param error Error contains code WDECErrorCode
 *
 *  @return An initialized object, or nil if an object could not be created for some reason that would not result in an exception
 */
- (nullable instancetype)initWithEnvironment:(WDECEnvironment)environment
                                       error:(NSError *_Nullable __autoreleasing *_Nullable)error;

/**
 *  @brief It initilizes client for processing payments.
 *
 *  @param hostname Hostname of the environment for processing payments
 *
 *  @param error Error contains code WDECErrorCode
 *
 *  @return An initialized object, or nil if an object could not be created for some reason that would not result in an exception
 */
- (nullable instancetype)initWithHostname:(nonnull NSString *)hostname
                                    error:(NSError *_Nullable __autoreleasing *_Nullable)error;

/**
 *  @brief It initilizes client for processing payments.
 *
 *  @param hostname Hostname of the environment for processing payments
 *
 *  @param parameters Parameters for the client properties
 *
 *  @param error Error contains code WDECErrorCode
 *
 *  @return An initialized object, or nil if an object could not be created for some reason that would not result in an exception
 */
- (nullable instancetype)initWithHostname:(nonnull NSString *)hostname
                               parameters:(nullable WDECClientParameters *)parameters
                                    error:(NSError *_Nullable __autoreleasing *_Nullable)error NS_DESIGNATED_INITIALIZER;

/**
 * @brief Handle redirect from payment provider app or web page to merchant app.
 *
 * @param URL provided by payment provider
 */
- (BOOL)openURL:(nonnull NSURL *)URL;

/**
 *  @brief Trigger payment process
 *
 *  @details Payment method is defined by payment object. Each payment method is defined in separate subclass of WDPayment. Supported payment methods: WDECAlipayPayment, WDApplePayManagedPayment, WDECApplePayPayment, WDCardPayment, WDECPayPalPayment, WDSEPAPayment
 *
 *  @param payment         defines payment process
 *  @param completionBlock will be called at the very end of payment flow. It provides payment response or a descriptive error with more details in the payment response
 */
- (void)makePayment:(nonnull WDECPayment *)payment
     withCompletion:(nonnull WDECCompletionBlock)completionBlock;

/**
 *  @brief Check payment result
 *
 *  @details Payment method is defined by payment object. Each payment method is defined in separate subclass of WDPayment. Supported payment methods: WDECAlipayPayment, WDApplePayManagedPayment, WDECApplePayPayment, WDCardPayment, WDECPayPalPayment, WDSEPAPayment
 *
 *  @param payment         defines payment process
 *  @param completionBlock It provides payment response or a descriptive error with more details in the payment response
 */
- (void)checkPayment:(nonnull WDECPayment *)payment
      withCompletion:(nonnull WDECCompletionBlock)completionBlock;

@end

/** @} */

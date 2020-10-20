//
//  WDECProviderData.h
//  WDeCom
//
//  Created by Stavny, Peter on 30/03/2020.
//  Copyright © 2020 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WDeCom/WDECConsumerReceipt.h>

/** @addtogroup ios_sdk
*  @{
*/

NS_ASSUME_NONNULL_BEGIN

/**
 * @brief Provider data
 */
@interface WDECProviderData : NSObject

/**
 * @brief Provider request
 * @details Content should be an object containing any of the keys and sub objects described in provider serialised to JSON.
 */
@property (strong, nonatomic, nullable) NSString *request;

/**
 * @brief Provider response
 */
@property (strong, nonatomic, nullable) NSString *response;

/**
 * @brief Consumer receipt
 * @details WDECConsumerReceipt object holder
 */
@property (strong, nonatomic, nullable) WDECConsumerReceipt *consumerReceipt;

/**
 * @brief Provider identifier
 */
@property (strong, nonatomic, nullable) NSString *providerId;

/**
 * @brief Provider transaction identifier.
 */
@property (strong, nonatomic, nullable) NSString *providerTransactionId;


@end

NS_ASSUME_NONNULL_END

/** @} */

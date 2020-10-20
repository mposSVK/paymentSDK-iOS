//
//  WDECPBBAPayment.h
//  WDeCom
//
//  Created by Vrana, Jozef on 05/09/2017.
//  Copyright © 2017 Wirecard Technologies GmbH. All rights reserved.
//

#import <WDeCom/WDeCom.h>

/** @addtogroup ios_sdk
 *  @{
 */
@interface WDECPBBAPayment : WDECPayment

/**
 * @brief The delivery type chosen for the delivery of purchased goods.
 */
@property (strong, nonatomic, nonnull) NSString *pbbaDeliveryType;

/**
 * @brief Return String to redirect the consumer from the mobile banking app to the merchant’s browser or app.
 * @details It is deprecated, please use appScheme instead.
 */
@property (strong, nonatomic, nonnull) NSString *pbbaReturnAppScheme DEPRECATED_ATTRIBUTE;

/**
 * @brief Type of transaction.
 */
@property (strong, nonatomic, nonnull) NSString *pbbaTransactionType;

@end

/** @} */

//
//  WDECConsumerReceipt.h
//  WDeCom
//
//  Created by Stavny, Peter on 30/03/2020.
//  Copyright © 2020 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WDeCom/WDECConsumerReceiptFormat.h>
#import <WDeCom/WDECEncoding.h>

/** @addtogroup ios_sdk
*  @{
*/

NS_ASSUME_NONNULL_BEGIN

/**
 * @brief Provider data
 */
@interface WDECConsumerReceipt : NSObject

/**
 * @brief Consumer receipt base
 */
@property (strong, nonatomic, nullable) NSString *base;
/**
 * @brief Consumer receipt encoding
 */
@property (assign, nonatomic) WDECEncoding encoding;
/**
 * @brief Consumer receipt format
 */
@property (assign, nonatomic) WDECConsumerReceiptFormat format;


@end

NS_ASSUME_NONNULL_END

/** @} */

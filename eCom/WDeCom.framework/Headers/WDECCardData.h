//
//  WDECCardData.h
//  WDeCom
//
//  Created by Stavny, Peter on 12/08/2019.
//  Copyright © 2019 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
/**
 * brief Card Data
 */
@interface WDECCardData : NSObject

/**
 * @brief Returned only if engine has enabled FEATURE_CARD_TYPE_SERVICE or X-WD-Toggle-EnableFeature=FEATURE_CARD_TYPE_SERVICE header is sent with request. max. 50
 */
@property (strong, nonatomic) NSString *issuerName;
/**
 *
 */
@property (strong, nonatomic) NSString *ccCategory;
/**
 *
 */
@property (strong, nonatomic) NSString *ccCategoryExt;
/**
 *
 */
@property (strong, nonatomic) NSString *ccProductId;

@end

NS_ASSUME_NONNULL_END

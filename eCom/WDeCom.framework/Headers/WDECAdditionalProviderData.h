//
//  WDECAdditionalProviderData.h
//  WDeCom
//
//  Created by Stavny, Peter on 30/03/2020.
//  Copyright © 2020 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WDeCom/WDECProviderData.h>

/** @addtogroup ios_sdk
*  @{
*/

NS_ASSUME_NONNULL_BEGIN

/**
 * @brief Additional provider data 
 */
@interface WDECAdditionalProviderData : NSObject

/**
 @brief Provider data Items
 @details At the moment supported by WDECKlarnalPayment method. Provider data details may be sent along with transaction requests. Contains max. 1 additional data item for Klarna.
 */
@property (strong, nonatomic, nullable) NSArray<WDECProviderData *> *items;

@end

NS_ASSUME_NONNULL_END

/** @} */

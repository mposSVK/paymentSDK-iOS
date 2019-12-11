//
//  WDCardToken.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 11/24/15.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

/** @addtogroup ios_sdk
 *  @{
 */

/**
 @brief Tokenized card data.
 @details Everytime a user types card data, it is tokenized and returned to merchant in [WDECPaymentResponse cardToken].
 */
@interface WDECCardToken : NSObject

/**
 @brief Tokenized account number. Last 4 digits are equal to card account number.
 */
@property (strong, nonatomic, nullable) NSString *tokenID;
/**
 @brief Masked account number.
 @details can be used for prompting security code from user in next payment
 */
@property (strong, nonatomic, nullable) NSString *maskedAccountNumber;

@end

/** @} */

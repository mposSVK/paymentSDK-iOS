//
//  WDNotification.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 10/8/15.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <WDeCom/WDECTransactionState.h>

/** @addtogroup ios_sdk
 *  @{
 */

/**
 @brief Transaction notification
 @details ElasticEngine has a built-in notification capability. The Merchant simply sends the notifications instructions as part of each transaction request. Notifications need to be specified as a URL. There are two types of notifications:
 
 - HTTP(S) (Web Server POST)
 - SMTP (Email with URL scheme 'mailto')
 
 It is possible to setup conditional notifications based on the [state](WDECTransactionState) of transaction. For example, a Merchant can instruct a notification to only occur on WDECTransactionStateFailed or WDECTransactionStateSuccess transactions.
 */
@interface WDECNotification : NSObject

@property (assign, nonatomic) WDECTransactionState transactionState;
@property (strong, nonatomic, nonnull) NSURL *URL; // max. length 256

@end

/** @} */

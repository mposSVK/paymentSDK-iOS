//
//  WDOrder.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 10/8/15.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <WDeCom/WDECOrderItem.h>

/** @addtogroup ios_sdk
 *  @{
 */

/**
 * @brief Order data
 */
@interface WDECOrder : NSObject

/**
 @brief The description of the transaction that shows up on the Account Holder's statement.
 @details In the case of a Credit Card Statement, it can be dynamically set per transaction, but only supported by some acquirers.
 It is optional. Max. length is 64
 */
@property (strong, nonatomic, nullable) NSString *descriptor;

/**
 @brief Merchant-provided string to store the 'Order Number' for the Transaction.
 @details It is optional. Max. length is 64
 */
@property (strong, nonatomic, nullable) NSString *number;
/**
 @brief Merchant-provided string to store the 'Order Detail' for the Transaction.
 @details It is optional. Max. length is 2048
 */
@property (strong, nonatomic, nullable) NSString *detail;
/**
 @brief Order Items
 @details At the moment supported by WDECPayPalPayment method. Order item details may be sent along with transaction requests. This information of the shopping basket will be displayed in WDECPayPalPayment during the checkout and later stored as a part of the payment details in PayPal. However, they cannot be obtained from the Payment Gateway later as part of transaction details.
 */
@property (strong, nonatomic, nullable) NSArray<WDECOrderItem *> *items;

@end

/** @} */

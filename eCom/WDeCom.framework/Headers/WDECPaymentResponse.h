//
//  WDECPaymentResponse.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 10/12/15.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <WDeCom/WDECPayment.h>
#import <WDeCom/WDECTransactionState.h>

/** @addtogroup ios_sdk
 *  @{
 */

/**
 * @brief Payment response from Wirecard gateway
 * @details Contains repsonse data from Wirecard gateway
 */
@interface WDECPaymentResponse : WDECPayment

/** Indicates transaction state as enumerated in WDECTransactionState. */
@property (assign, nonatomic) WDECTransactionState transactionState;

/** A unique identifier assigned for every Transaction. */
@property (strong, nonatomic, nullable) NSString *transactionIdentifier;

/** All status messaeges composed into one string */
@property (strong, nonatomic, nullable) NSString *statusMessage;

@end

/** @} */

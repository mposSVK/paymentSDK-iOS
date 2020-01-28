//
//  WDECCompletionBlock.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 5/1/18.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

/** @addtogroup ios_sdk
 *  @{
 */

@class WDECPaymentResponse;

/** Transaction completion block with response from ElasticEngine or error occoured during transaction
 
 @param response the response from ElasticEngine.
 @param error occoured during transaction.
 */
typedef void (^WDECCompletionBlock)(WDECPaymentResponse *_Nullable response, NSError *_Nullable error);

/** @} */

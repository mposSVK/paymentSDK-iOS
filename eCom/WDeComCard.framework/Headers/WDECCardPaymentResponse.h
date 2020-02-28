//
//  WDECCardPaymentResponse.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 5/3/18.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <WDeCom/WDECPaymentResponse.h>
#import <WDeComCoreCard/WDECCard.h>
#import <WDeComCoreCard/WDECCardToken.h>

/** @addtogroup ios_sdk
 *  @{
 */

/**
 * @brief Card payment response from Wirecard gateway
 * @details Contains repsonse data from Wirecard gateway
 */

@interface WDECCardPaymentResponse : WDECPaymentResponse

/** Nonsensitive card data */
@property (strong, nonatomic, nullable) WDECCard *card;

/** Tokenized sensitive card data */
@property (strong, nonatomic, nullable) WDECCardToken *cardToken;

@end

/** @} */

//
//  WDECKlarnaPayment.h
//  WDeComKlarna
//
//  Created by Pribulla, Rastislav on 11/03/2020.
//  Copyright © 2020 Wirecard Technologies GmbH. All rights reserved.
//

#import <WDeCom/WDeCom.h>
#import <WDeComKlarna/WDECKlarnaCategory.h>

/** @addtogroup ios_sdk
 *  @{
 */

/**
 * @brief Defines Klarna payment method.
 */
@interface WDECKlarnaPayment : WDECPayment

/**
 @brief It describes klarna's category by WDECKlarnaCategory enumerator.
*/
@property (assign, nonatomic) WDECKlarnaCategory category;

/**
 @brief It describes klarna recurring transactions.
*/
@property (strong, nonatomic, nullable) WDECPeriodic *periodic;

@end

/** @} */

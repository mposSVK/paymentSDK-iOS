//
//  WDECTicketIssuer.h
//  WDeCom
//
//  Created by Vrana, Jozef on 19/09/2018.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDECCountry.h"

@interface WDECTicketIssuer : NSObject

/** Ticket issuer street1
 @brief The issuer address street for the airline transaction.
 @details Max. length 128. It is optional.
 */
@property (strong, nonatomic) NSString *ticketIssuerStreet1;

/** Ticket issuer street2
 @brief The issuer address street 2 for the airline transaction.
 @details Max. length 128. It is optional.
 */
@property (strong, nonatomic) NSString *ticketIssuerStreet2;

/** Ticket issuer city
 @brief The city of the address of the airline transaction issuer.
 @details Max. length 32. It is optional.
 */
@property (strong, nonatomic) NSString *ticketIssuerCity;

/** Ticket issuer state
 @brief The state of the address of the airline transaction issuer.
 @details Max. length 32. It is optional.
 */
@property (strong, nonatomic) NSString *ticketIssuerState;

/** Ticket issuer country
 @brief The Issuer address country Id for the airline transaction.
 @details Max. length 3. It is optional.
 */
@property (assign, nonatomic) WDECCountry ticketIssuerCountry;

/** Ticket issuer postal code
 @brief An alphanumeric numeric code used to represent the airline transaction issuer postal code.
 @details Max. length 16. It is optional.
 */
@property (strong, nonatomic) NSString *ticketIssuerPostalCode;

@end

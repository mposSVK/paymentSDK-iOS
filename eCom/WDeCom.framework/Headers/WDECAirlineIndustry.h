//
//  WDECAirlineIndustry.h
//  WDeCom
//
//  Created by Vrana, Jozef on 19/09/2018.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDECTicketIssuer.h"
#import "WDECItinerary.h"

/** @addtogroup ios_sdk
 *  @{
 */

/**
 * @brief Airline industry data
 */
@interface WDECAirlineIndustry : NSObject

/** Airline code
 @brief The airline code assigned by IATA.
 @details Max. length 3. It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *airlineCode;

/** Airline name
 @brief Name of the airline.
 @details Max. length 64. It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *airlineName;

/** Airline code
 @brief The file key of the passenger name record (PNR). This information is mandatory for transactions with AirPlus UATP cards.
 @details Max. length 10. It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *passengerCode;

/** Passenger name
 @brief The name of the airline transaction passenger.
 @details Max. length 64. It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *passengerName;

/** Passenger phone
 @brief The phone number of the airline transaction passenger.
 @details Max. length 32. It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *passengerPhone;

/** Passenger email
 @brief The email address of the airline transaction passenger.
 @details Max. length 64. It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *passengerEmail;

/** Passenger IP address
 @brief The IP address of the airline transaction passenger.
 @details Max. length 45. It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *passengerIPAdress;

/** Ticket issue date
 @brief The date the ticket was issued.
 @details It is optional.
 */
@property (strong, nonatomic, nullable ) NSDate *ticketIssueDate;

/** Ticket number
 @brief The airline ticket number, including the check digit. If no airline ticket number (IATA) is used, the element field must be populated with 99999999999.
 @details Max. length 11. It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *ticketNumber;

/** Ticket restricted flag
 @brief Indicates that the airline transaction is restricted. 0 = No restriction, 1 = Restricted (non-refundable).
 @details Max. length 1. It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *ticketRestrictedFlag;

/** PNR file key
 @brief The passenger name File id for the airline transaction.
 @details Max. length 10. It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *pnrFileKey;

/** Ticket check digit
 @brief The airline ticket check digit.
 @details Max. length 2. It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *ticketCheckDigit;

/** Agency code
 @brief The agency code assigned by IATA.
 @details Max. length 3. It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *agentCode;

/** Agent name
 @brief The agency name.
 @details Max. length 64. It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *agentName;

/** Non taxable net amount
 @brief This field must contain the net amount of the purchase transaction in the specified currency for which the tax is levied. Two decimal places are implied. If this field contains a value greater than zero, the indicated value must differ to the content of the transaction amount.
 @details It is optional.
 */
@property (strong, nonatomic, nullable ) NSDecimalNumber *nonTaxableNetAmount;

/** First name
 @brief The currency of non taxable net amount.
 @details It is mandatory if non taxable net amount is specified.
 */
@property (strong, nonatomic) NSString *currency;

/** Number of passengers
 @brief The number of passengers on the airline transaction.
 @details Max. length 3. It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *numberOfPassengers;

/** Reservation code
 @brief The reservation code of the airline Transaction passenger.
 @details Max. length 32. It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *reservationCode;

/** Ticket issuer
 @brief The airline ticket issuer.
 */
@property (strong, nonatomic, nullable ) WDECTicketIssuer *ticketIssuer;

/** Itinerary
 @brief The airline ticket itinerary.
 */
@property (strong, nonatomic) WDECItinerary *itinerary;

@end

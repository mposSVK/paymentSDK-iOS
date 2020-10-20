//
//  WDECSegment.h
//  WDeCom
//
//  Created by Vrana, Jozef on 20/09/2018.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDECSegment : NSObject

/** Carrier code
 @brief The 2-letter airline code (e.g. LH, BA, KL) supplied by IATA for each leg of a flight.
 @details Max. length 3. It is optional.
 */
@property (strong, nonatomic) NSString *carrierCode;

/** Departure airport code
 @brief The departure airport code. IATA assigns the airport codes.
 @details Max. length 3. It is optional.
 */
@property (strong, nonatomic) NSString *departureAirportCode;

/** Departure city code
 @brief The departure city code of the itinerary segment. IATA assigns the airport codes.
 @details Max. length 32. It is optional.
 */
@property (strong, nonatomic) NSString *departureCityCode;

/** Arrival code
 @brief The arrival airport code of the itinerary segment. IATA assigns the airport codes.
 @details Max. length 3. It is optional.
 */
@property (strong, nonatomic) NSString *arrivalAirportCode;

/** Arrival city code
 @brief The arrival city code of the itinerary segment. IATA assigns the airport codes.
 @details Max. length 32. It is optional.
 */
@property (strong, nonatomic) NSString *arrivalCityCode;

/** Departure date
 @brief The departure date for a given leg.
 */
@property (strong, nonatomic) NSDate *departureDate;

/** Arrival date
 @brief The arrival date of the itinerary segment. IATA assigns the airport codes.
 */
@property (strong, nonatomic) NSDate *arrivalDate;

/** Flight number
 @brief The city of the address of the airline transaction issuer.
 @details Max. length 6. It is optional.
 */
@property (strong, nonatomic) NSString *flightNumber;

/** Fare class
 @brief Used to distinguish between First Class, Business Class and Economy Class, but also used to distinguish between different fares and booking codes within the same type of service.
 @details Max. length 3. It is optional.
 */
@property (strong, nonatomic) NSString *fareClass;

/** Fare basis
 @brief Represents a specific fare and class of service with letters, numbers, or a combination of both.
 @details Max. length 6. It is optional.
 */
@property (strong, nonatomic) NSString *fareBasis;

/** Stop over code
 @brief 0 = allowed, 1 = not allowed
 */
@property (strong, nonatomic) NSString *stopOverCode;

/** Currency
 @brief The currency of tax amount.
 @details It is mandatory if tax amount is specified.
 */
@property (strong, nonatomic) NSString *currency;

/** Tax amount
 @brief The amount of the value added tax levied on the transaction amount in the specified currency.
 */
@property (strong, nonatomic) NSDecimalNumber *taxAmount;

@end

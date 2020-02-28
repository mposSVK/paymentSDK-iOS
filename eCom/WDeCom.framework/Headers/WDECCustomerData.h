//
//  WDECCustomerData.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 10/8/15.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "WDECAddress.h"
#import "WDECGender.h"
#import "WDECMobilePhone.h"
#import "WDECHomePhone.h"
#import "WDECAccountInfo.h"
#import "WDECShippingMethod.h"
#import "WDECWorkPhone.h"

/** @addtogroup ios_sdk
 *  @{
 */

/**
 * @brief Customer data to describe account holder or shipping
 */
@interface WDECCustomerData : NSObject

/** First name
 @details Max. length 32. It is optional.
 */
@property (strong, nonatomic, nullable) NSString *firstName;
/** Last name
 @details Max. length 32. It is mandatory.
 */
@property (strong, nonatomic, nonnull ) NSString *lastName;
/** Email address
 @details Max. length 64. It is optional.
 */
@property (strong, nonatomic, nullable) NSString *email;
/** Phone number
 @details Max. length 32. It is optional.
 */
@property (strong, nonatomic, nullable) NSString *phone;
/** Phone country code
 @details Max. length 16
 */
@property (strong, nonatomic, nullable) NSString *phoneCountryCode;
/** Consumer's gender
 @details It is optional.
 */
@property (assign, nonatomic          ) WDECGender gender;
/** Consumer's date of birth
 @details It is optional.
 */
@property (strong, nonatomic, nullable) NSDate   *dateOfBirth;
/** Address
 @details It is optional.
 */
@property (strong, nonatomic, nullable) WDECAddress *address;
/** Tax number
 @details It is optional.
 */
@property (strong, nonatomic, nullable) NSString *taxNumber;

/**
 * Indicates shipping method chosen for the transaction. Merchants must choose the Shipping Indicator code that most accurately describes the cardholder's specific transaction. If   one or more items are included in the sale, use the Shipping Indicator code   for the physical goods, or if all dugutak goods, use the code that   describes the most expensive item.
 */
@property(assign, nonatomic) WDECShippingMethod shippingMethod;

/**
 * This field contains additional information about the Cardholder’s account provided by the 3DS Requestor.
 */
@property (strong, nonatomic, nullable) WDECAccountInfo *accountInfo;

/**
 * The home phone provided by the   Cardholder.
 * Refer to ITU-E.164 for additional information on format and length.
 * This field is required if available, unless market or regional mandate   restricts sending this information.
 */
@property (strong, nonatomic, nullable) WDECHomePhone *homePhone;

/**
 * The mobile phone provided by the   Cardholder.
 * Refer to ITU-E.164 for additional information on format and length.
 * This field is required if available, unless market or regional mandate   restricts sending this information.
 */
@property (strong, nonatomic, nullable) WDECMobilePhone *mobilePhone;

/**
 * The work phone provided by the   Cardholder.
 * Refer to ITU-E.164 for additional information on format and length.
 * This field is required if available, unless market or regional mandate   restricts sending this information.
 */
@property (strong, nonatomic, nullable) WDECWorkPhone *workPhone;

/**
 * City portion of the shipping   address requested by the Cardholder.
 * This field is required unless shipping information is the same as billing   information, or market or regional mandate restricts sending this   information.
 */
@property (strong, nonatomic, nullable) NSString *shippingCity;

/**
 * Country of the shipping address   requested by the Cardholder.
 * This field is limited to 3 characters. This value shall be the ISO   3166-1 numeric country code, except values from range 901 - 999 which are   reserved by ISO.
 * This field is required if Cardholder Shipping Address State is present and if   shipping information are not the same as billing information. This field   can be omitted if market or regional mandate restricts sending this   information.
 */
@property (strong, nonatomic, nullable) NSString *shippingCountry;

/**
 * First line of the street address   or equivalent local portion of the shipping address associated with the   card use for this purchase.
 * This field is limited to maximum 50 characters.
 * This field is required unless shipping information is the same as billing   information, or market or regional mandate restricts sending this   information.
 */
@property (strong, nonatomic, nullable) NSString *shippingStreet1;

/**
 * Second line of the street address   or equivalent local portion of the shipping address associated with the   card use for this purchase.
 * This field is limited to maximum 50 characters.
 * This field is required unless shipping information is the same as billing   information, or market or regional mandate restricts sending this   information.
 */
@property (strong, nonatomic, nullable) NSString *shippingStreet2;

/**
 * Third line of the street address   or equivalent local portion of the shipping address associated with the   card use for this purchase.
 * This field is limited to maximum 50 characters.
 * This field is required unless shipping information is the same as billing   information, or market or regional mandate restricts sending this   information.
 */
@property (strong, nonatomic, nullable) NSString *shippingStreet3;

/**
 * ZIP or other postal code of the   shipping address associated with the card used for this purchase.
 * This field is limited to maximum 16 characters.
 * This field is required unless shipping information is the same as billing   information, or market or regional mandate restricts sending this   information.
 */
@property (strong, nonatomic, nullable) NSString *shippingPostalCode;

/**
 * The state or province of the   shipping address associated with the card used for this purchase.
 * This field is limited to 3 characters. The value should be the country   subtivision code defined in ISO 3166-2.
 * This field is required unless shipping information is the same as billing   information, or State is not applicable for this country, or market or   regional mandate restricts sending this information.
 */
@property (strong, nonatomic, nullable) NSString *shippingState;

@end

/** @} */

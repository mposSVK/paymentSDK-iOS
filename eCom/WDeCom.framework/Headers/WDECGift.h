//
//  WDECGift.h
//  WDeCom
//
//  Created by Vrana, Jozef on 16/04/2019.
//  Copyright © 2019 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDECGift : NSObject

/**
* For prepaid or gift card purchase, the purchase amount total of prepaid or gift card(s) in major units (for example, USD 123.45 is 123).
*/
@property (strong, nonatomic, nullable) NSDecimalNumber *giftCardAmount;
/**
* For prepaid or gift card purchase, the currency code of the card as defined in ISO 4217 except 955 - 964 and 999.
*/
@property (strong, nonatomic, nullable) NSString *giftCardCurrency;
/**
* For prepaid or gift card purchase, total count of individual prepaid or gift cards/codes purchased. Field is limited to 2 characters.
*/
@property (strong, nonatomic, nullable) NSString *giftCardCount;

@end


//
//  WDECMerchantRiskIndicator.h
//  WDeCom
//
//  Created by Vrana, Jozef on 16/04/2019.
//  Copyright © 2019 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WDeCom/WDECDeliveryTimeframe.h>
#import <WDeCom/WDECReorderType.h>
#import <WDeCom/WDECAvailabilityTime.h>
#import <WDeCom/WDECGift.h>

@interface WDECMerchantRiskIndicator : NSObject

/**
 * Indicates the merchandise delivery timeframe.
 */
@property(assign, nonatomic) WDECDeliveryTimeframe deliveryTimeframe;

/**
 * For electronic delivery, the email address to which the merchandise was delivered.
 */
@property(strong, nonatomic, nullable) NSString *deliveryMail;

/**
 * Indicates whether the cardholder is reoreding previously purchased merchandise.
 */
@property(assign, nonatomic) WDECReorderType reorderItems;

/**
 * Indicates whether Cardholder is placing an order for merchandise with a future availability or release date
 */
@property(assign, nonatomic) WDECAvailabilityTime availability;

/**
 * For a pre-ordered purchase, the expected date that the merchandise will be available. Date format must be YYYYMMDD.
 */
@property(strong, nonatomic, nullable) NSDate *preorderDate;

/**
 *
 */
@property(strong, nonatomic, nullable) WDECGift *gift;

@end


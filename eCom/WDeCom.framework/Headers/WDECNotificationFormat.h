//
//  WDECNotificationFormat.h
//  WDeCom
//
//  Created by Vrana, Jozef on 10/09/2019.
//  Copyright © 2019 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of notification format */

typedef NS_ENUM(NSUInteger, WDECNotificationFormat) {
    WDECNotificationFormatUndefined = 0,
    WDECNotificationFormatNVP,
    WDECNotificationFormatXML,
    WDECNotificationFormatJSON,
    WDECNotificationFormatJSONSigned,
    WDECNotificationFormatJSONSignature,
    WDECNotificationFormatHTML,
    WDECNotificationFormatTotalNumber
};

WDECNotificationFormat WDECNotificationFormatFromCode(NSString *code);
NSString *WDECNotificationFormatGetCode(WDECNotificationFormat notificationFormat);

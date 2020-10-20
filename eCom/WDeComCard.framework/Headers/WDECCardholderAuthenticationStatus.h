//
//  WDCardholderAuthenticationStatus.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 11/20/15.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

typedef NS_ENUM(NSUInteger, WDECCardholderAuthenticationStatus) {
    WDECCardholderAuthenticationStatusUndefined = 0,
    
    WDECCardholderAuthenticationStatusY,
    WDECCardholderAuthenticationStatusA,
    WDECCardholderAuthenticationStatusU,
    WDECCardholderAuthenticationStatusN,
    WDECCardholderAuthenticationStatusE,
    
    WDECCardholderAuthenticationStatusTotalNumber
};

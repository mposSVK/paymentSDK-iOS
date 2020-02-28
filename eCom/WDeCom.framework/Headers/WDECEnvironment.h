//
//  WDECEnvironment.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 11/3/15.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/**
 *  List of supported environments
 */
typedef NS_ENUM(NSUInteger, WDECEnvironment) {
    /**
     *  Uninitialized or invalid value
     */
    WDECEnvironmentUndefined = 0,

    /**
     *  Production environment
     */
    WDECEnvironmentPROD,
    /**
     *  Singapore production environment
     */
    WDECEnvironmentSingaporePROD,
    /**
     *  Toronto production environment
     */
    WDECEnvironmentTorontoPROD,
    /**
     *  Central and East Europe production environment
     */
    WDECEnvironmentCEEPROD,

    /**
     *  Test/Sandbox environment
     */
    WDECEnvironmentTEST = 100,
    /**
     *  Singapore test/sandbox environment
     */
    WDECEnvironmentSingaporeTEST,
    /**
     *  Toronto test/sandbox environment
     */
    WDECEnvironmentTorontoTEST,
    /**
     *  Central and East Europe test/sandbox environment
     */
    WDECEnvironmentCEETEST,

    /**
     *  Total number of environments. It is used for validation and handled as invalid value
     */
    WDECEnvironmentTotalNumber
};

/** @} */

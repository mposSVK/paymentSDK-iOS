//
//  WDECChallengeIndicator.h
//  WDeCom
//
//  Created by Vrana, Jozef on 22/04/2019.
//  Copyright © 2019 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of challenge indicators supported by ElasticEngine
 */
typedef NS_ENUM(NSUInteger, WDECChallengeIndicator) {
    /** Uninitialized or invalid value */
    WDECChallengeIndicatorUndefined = 0,
    /**
     * No preference (default if   not specified)
     */
    WDECChallengeIndicatorNoPreference,
    /**
     * No challenge requested
     */
    WDECChallengeIndicatorNoChallengeRequested,
    /**
     * Challenge requested: 3DS   Requestor Preference
     */
    WDECChallengeIndicatorChallengeRequested3DSRequestorPreference,
    /**
     * Challenge requested:   Mandate
     */
    WDECChallengeIndicatorChallengeRequestedMandate,

    /** Total number of values. It is used for validation and handled as invalid value */
    WDECChallengeIndicatorTotalNumber

};

NSString *WDECChallengeIndicatorGetCode(WDECChallengeIndicator challengeIndicator);
WDECChallengeIndicator WDECChallengeIndicatorFromCode(NSString *code);

/** @} */

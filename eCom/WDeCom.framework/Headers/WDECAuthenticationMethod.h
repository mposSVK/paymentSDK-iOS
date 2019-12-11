//
//  WDECAuthenticationMethod.h
//  WDeCom
//
//  Created by Vrana, Jozef on 22/04/2019.
//  Copyright © 2019 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of authentication methods supported by ElasticEngine
 */
typedef NS_ENUM(NSUInteger, WDECAuthenticationMethod) {
    /** Uninitialized or invalid value */
    WDECAuthenticationMethodUndefined = 0,
    /**
     * No 3DS Requestor authentication occurred (i.e. cardholder “logged in” as guest)
     */
    WDECAuthenticationMethodNo3DSRequestorAutheticationOccured,
    /**
     * Login to the cardholder account at the 3DS Requestor system using 3DS Requestor’s own credentials
     */
    WDECAuthenticationMethodOwnCredentials,
    /**
     *  Login to the cardholder account at the 3DS Requestor system using federated ID,
     */
    WDECAuthenticationMethodFederatedId,
    /**
     * Login to the cardholder account at the 3DS Requestor system using issuer credentials,
     */
    WDECAuthenticationMethodIssuerCredentials,
    /**
     *Login to the cardholder account at the 3DS Requestor system using third-party authentication
     */
    WDECAuthenticationMethodThirdPartyAuthentication,
    /**
     * Login to the cardholder account at the 3DS Requestor system using FIDO Authenticator
     */
    WDECAuthenticationMethodFIDOAuthenticator,

    /** Total number of values. It is used for validation and handled as invalid value */
    WDECAuthenticationMethodTotalNumber
};

NSString *WDECAuthenticationMethodGetCode(WDECAuthenticationMethod authenticationMethod);
WDECAuthenticationMethod WDECAuthenticationMethodFromCode(NSString *code);

/** @} */

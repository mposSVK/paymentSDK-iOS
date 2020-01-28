//
//  WDECMobilePhone.h
//  WDeCom
//
//  Created by Vrana, Jozef on 13/05/2019.
//  Copyright © 2019 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDECMobilePhone : NSObject

/**
 * Country Code of the phone, limited   to 1-3 characters
 */
@property (strong, nonatomic, nullable) NSString *countryPart;

/**
 * subscriber section of the number,   limited to maximum 15 characters.
 */
@property (strong, nonatomic, nullable) NSString *otherPart;

@end



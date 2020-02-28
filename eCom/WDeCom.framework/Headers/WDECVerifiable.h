//
//  WDECVerifiable.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 1/11/16.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  @brief Validates string input from user
 *
 *  @param validatedString string to be validated
 *
 *  @return return localized error string, which can be presented to user
 */
typedef NSString *_Nullable(^WDVerificationBlock)(NSString *_Nullable validatedString);

@protocol WDECVerifiable <NSObject>

@property (copy, nonatomic, nullable) NSArray<WDVerificationBlock> *verificationBlocks;

- (BOOL)verify;

@end

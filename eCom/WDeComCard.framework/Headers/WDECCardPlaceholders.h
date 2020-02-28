//
//  WDECCardPlaceholders.h
//  WDeCom
//
//  Created by Vrana, Jozef on 12/06/2018.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <WDeCom/WDECLabel.h>

@interface WDECCardPlaceholders : WDECLabel

@property (nonatomic) NSString *cardholderPlaceholder UI_APPEARANCE_SELECTOR;
@property (nonatomic) NSString *cardNumberPlaceholder UI_APPEARANCE_SELECTOR;
@property (nonatomic) NSString *expiryDatePlaceholder UI_APPEARANCE_SELECTOR;
@property (nonatomic) NSString *securityCodePlaceholder UI_APPEARANCE_SELECTOR;
@property (nonatomic) NSString *scanTitle UI_APPEARANCE_SELECTOR;

@end

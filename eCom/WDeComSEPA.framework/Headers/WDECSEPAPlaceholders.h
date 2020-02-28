//
//  WDECSEPAPlaceholders.h
//  WDeComSEPA
//
//  Created by Vrana, Jozef on 12/06/2018.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <WDeCom/WDECLabel.h>

@interface WDECSEPAPlaceholders : WDECLabel

@property (nonatomic) NSString *firstNamePlaceholder UI_APPEARANCE_SELECTOR;
@property (nonatomic) NSString *lastNamePlaceholder UI_APPEARANCE_SELECTOR;
@property (nonatomic) NSString *IBANPlaceholder UI_APPEARANCE_SELECTOR;
@property (nonatomic) NSString *merchantName UI_APPEARANCE_SELECTOR;

@end

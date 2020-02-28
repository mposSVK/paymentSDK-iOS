//
//  WDECLocalize.h
//  WDeCom
//
//  Created by Vrana, Jozef on 04/06/2018.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDECLocale.h"

@protocol WDECLocalizable <NSObject>

- (void)localize:(WDECLocale)locale;

@end

/**
 *
 */

@interface WDECLocalize : UILabel
@property (nonatomic) WDECLocale locale UI_APPEARANCE_SELECTOR;
@end



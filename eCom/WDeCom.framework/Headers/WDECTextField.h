//
//  WDECTextField.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 10/14/15.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <UIKit/UITextField.h>
#import "WDECLocalize.h"
#import "WDECVerifiable.h"

@class WDECTextField;
typedef NS_ENUM(NSUInteger, WDECCardIconsStyle) {
    
    WDECIconsStyleAll = 0,
    WDECIconsStyleHidden,
};

@protocol WDECTextFieldDelegate <UITextFieldDelegate>
- (void)textFieldDidBackspaceOnEmpty:(nonnull WDECTextField *)textField;

@end

/**
 *
 */

@interface WDECTextField : UITextField<WDECLocalizable, WDECVerifiable>

@property (nonatomic, copy, nullable) NSArray<NSNumber *> *format;
@property (nonatomic, strong, null_resettable) NSNumber   *formatKerning;
@property (nonatomic) UIColor *placeholderColor UI_APPEARANCE_SELECTOR;
@property (nonatomic, weak, nullable) id<WDECTextFieldDelegate> delegate;

@property (nonatomic, strong, nullable) /*IBInspectable*/ UIImage *leftImage;
@property(nonatomic) WDECCardIconsStyle iconsStyle UI_APPEARANCE_SELECTOR;
@property (nonatomic) UIColor *underlineColor UI_APPEARANCE_SELECTOR;
@property (nonatomic) UIColor *underlineEditingColor UI_APPEARANCE_SELECTOR;
@property (nonatomic) UIColor *errorColor UI_APPEARANCE_SELECTOR;
@property (nonatomic) /*IBInspectable*/ BOOL animatesPlaceholder;
@property (nonatomic) /*IBInspectable*/ CGFloat underlineHeight;
@property (nonatomic) /*IBInspectable*/ CGFloat underlineEditingHeight;

- (void)hideText;
- (void)showText;

- (BOOL)verify:(nullable NSString *)verifyText;

@end


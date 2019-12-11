//
//  WDECCardTextField.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 11/25/16.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDECLocalize.h"
#import "WDECVerifiable.h"

@class WDECCardTextField;
@protocol WDECCardTextFieldDelegate <UITextFieldDelegate>

- (void)cardTextFieldDidBackspaceOnEmpty:(nonnull WDECCardTextField *)cardTextField;
- (void)cardTextFieldTextDidChange:(nonnull WDECCardTextField *)field;

@end


/*IB_DESIGNABLE*/
@interface WDECCardTextField : UITextField <WDECLocalizable, WDECVerifiable>

@property (nonatomic, weak, nullable) id<WDECCardTextFieldDelegate> delegate;

@property (nonatomic, copy, nullable) NSArray<NSNumber *> *format;
@property (nonatomic, strong, null_resettable) NSNumber   *formatKerning;

/**
 *  @brief The text placeholder color used in each child field.
 *  @details Default is [UIColor lightGreyColor]. Set this property to nil to reset to the default.
 */
@property (nonatomic, copy, null_resettable) /*IBInspectable*/ UIColor *placeholderColor;

/**
 *  @brief The text color to be used when entering valid text.
 *  @details Default is [UIColor blackColor]. Set this property to nil to reset to the default.
 */
@property (nonatomic, copy, null_resettable) /*IBInspectable*/ UIColor *textDefaultColor;

/**
 *  @brief The text color to be used when the user has entered invalid information, such as an invalid card number.
 *  @details Default is [UIColor redColor]. Set this property to nil to reset to the default.
 */
@property (nonatomic, copy, null_resettable) /*IBInspectable*/ UIColor *textErrorColor;

/**
 *  @brief Whether or not the field currently contains a valid card number, expiration date and security code.
 */
@property (nonatomic, getter=isValid) /*IBInspectable*/ BOOL valid;

@end

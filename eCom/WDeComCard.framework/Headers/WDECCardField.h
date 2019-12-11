//
//  WDECCardField.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 4/12/16.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <UIKit/UITextField.h>

#import <WDeCom/WDeCom.h>

@class WDECCard;
@class WDECCardField;
@class WDECCardPayment;

/**
 *  @addtogroup ios_sdk
 *  @{
 */

/** WDECCardField states emitted during user interacion */
typedef NS_ENUM(NSUInteger, WDECCardFieldState) {
    /** Initial state and state after [-[WDECCardField clear]](@ref WDECCardField.clear) */
    WDECCardFieldStateCardInitial = 0,
    
    /** User's device is jailbroken */
    WDECCardFieldStateJailbrokenDevice,

    /** User entered valid card data */
    WDECCardFieldStateCardValid,
    /** User is trying to type unsupported card type */
    WDECCardFieldStateCardUnsupported,
    
    /** Card number UITextField is first responder */
    WDECCardFieldStateNumberEditting,
    /** Card number is incomplete */
    WDECCardFieldStateNumberIncomplete,
    /** Card number is invalid */
    WDECCardFieldStateNumberInvalid,
    /** User entered valid card number */
    WDECCardFieldStateNumberValid,
    
    /** Expiration month UITextField is first responder  */
    WDECCardFieldStateMonthEditting,
    /** Expiration year UITextField is first responder */
    WDECCardFieldStateYearEditting,
    
    /** Expiration date is incomplete */
    WDECCardFieldStateExpirationDateIncomplete,
    /** Expiration date is invalid */
    WDECCardFieldStateExpirationDateInvalid,
    /** User entered valid expiration date */
    WDECCardFieldStateExpirationDateValid,
    
    /** Security code UITextField became first responder */
    WDECCardFieldStateSecurityCodeEditting,
    /** Security code is incomplete */
    WDECCardFieldStateSecurityCodeIncomplete,
    /** Security code is invalid */
    WDECCardFieldStateSecurityCodeInvalid,
    /** Security code is valid */
    WDECCardFieldStateSecurityCodeValid
};


/**
 *  @brief This protocol allows a delegate to be notified when a payment text field's contents change
 *  @details It can be used to take further actions depending on the validity of its contents.
 */
@protocol WDECCardFieldDelegate <NSObject>

/**
 *  @brief Called when either the card number, expiration month/year or security code changes.
 *  @details At this point, one can call WDECCardField.valid on the text field to determine, for example, whether or not to enable a button to submit WDECCardPayment.
 *
 *  @param cardField the field that has changed
 *  @param state the cardField state
 */
- (void)cardField:(nonnull WDECCardField *)cardField didChangeState:(WDECCardFieldState)state;

@end


/**
 *  @brief Field for collecting card data
 *  @details WDECCardField is a field with similar properties to UITextField, but specialized for collecting card data. It manages multiple UITextFields under the hood to collect this data. It's designed to fit on a single line, and from a design perspective can be used anywhere a UITextField would be appropriate.
 */
/*IB_DESIGNABLE*/
@interface WDECCardField : UIControl

/**
 *  @brief The receiver’s delegate
 *  @details You can use the delegate to respond to the card data entered by the user
 */
@property (nonatomic, weak, nullable) IBOutlet id<WDECCardFieldDelegate> delegate;

/**
 *  @brief Non-sensitive card data.
 *  @details It is convenient to set the data if you collect security code only. According [WDECCard brand] security code is validated.
 */
@property (nonatomic, copy, null_resettable) WDECCard *card;

/**
 *  @brief A Boolean value that determines whether the card brand icon is hidden.
 *  @details Default value is NO
 */
@property (nonatomic, getter=isCardBrandHidden) /*IBInspectable*/ BOOL cardBrandHidden;

/**
 *  @brief Payment object where card data are appended.
 *  @details If [WDECCardPayment token] is set WDECCardField collects only security code. It clears user input.
 */
@property (nonatomic, strong, nonnull) WDECCardPayment *cardPayment;

/**
 *  @brief The cursor color for the field.
 *  @details This is a proxy for the view's tintColor property, exposed for clarity only (in other words, calling setCursorColor is identical to calling setTintColor).
 */
@property(nonatomic, copy, null_resettable) UIColor *cursorColor UI_APPEARANCE_SELECTOR;

/**
 *  @brief The font used in each UITextField and number format UILabel
 *  @details Default is [UIFont fontWithName:@"Menlo-Regular" size:15.0]. Set this property to nil to reset to the default. Monospace fonts are preferred as during number typing number format does not change width.
 */
@property(nonatomic, copy, null_resettable) /*IBInspectable*/ UIFont *font;

/**
 *  @brief The keyboard appearance for the field.
 *  @details Default is UIKeyboardAppearanceDefault.
 */
@property(nonatomic, assign) UIKeyboardAppearance keyboardAppearance UI_APPEARANCE_SELECTOR;

/**
 *  @brief WDECLocale enum used to localize
 *  @details Localization of WDECCardField happens in following order:
 
 - overriden WDECCardField value (e.g. [WDECCardField numberPlaceholder], etc.)
 - localized default value by [WDECCardField locale]
 - localized default value by [NSLocale preferredLanguages]
 - if locale is not set or localization files are missing default english value is used.
 
 */
@property (nonatomic) WDECLocale locale;

/**
 *  @brief The text placeholder color used in each child field.
 *  @details Default is [UIColor lightGrayColor]. Set this property to nil to reset to the default.
 */
@property(nonatomic, copy, null_resettable) /*IBInspectable*/ UIColor *placeholderColor;

/**
 *  @brief The text color to be used when entering valid text.
 *  @details Default is [UIColor blackColor]. Set this property to nil to reset to the default.
 */
@property(nonatomic, copy, null_resettable) /*IBInspectable*/ UIColor *textColor;

/**
 *  @brief The text color to be used when the user has entered invalid information, such as an invalid card number.
 *  @details Default is [UIColor redColor]. Set this property to nil to reset to the default.
 */
@property(nonatomic, copy, null_resettable) /*IBInspectable*/ UIColor *textErrorColor;

/**
 *  @brief The placeholder for the card number field.
 *  @details Default is localized @"Credit Card Number".
 */
@property(nonatomic, copy, null_resettable) /*IBInspectable*/ NSString *numberPlaceholder;

/**
 *  @brief The placeholder for the expiration month field.
 *  @details Defaults to localized @"MM".
 */
@property(nonatomic, copy, null_resettable) /*IBInspectable*/ NSString *expirationMonthPlaceholder;

/**
 *  @brief The placeholder for the expiration year field.
 *  @details Defaults to localized @"YY".
 */
@property(nonatomic, copy, null_resettable) /*IBInspectable*/ NSString *expirationYearPlaceholder;

/**
 *  @brief The placeholder for the security code field.
 *  @details Defaults to @"CVC".
 */
@property(nonatomic, copy, null_resettable) /*IBInspectable*/ NSString *securityCodePlaceholder;

/**
*  @brief Minimal expiration year.
*  @details Defaults to 2000.
*/
@property (nonatomic, copy, null_resettable) NSString *min_last_year;

/**
*  @brief Maximal expiration year.
*  @details Defaults to 2099.
*/
@property (nonatomic, copy, null_resettable) NSString *max_last_year;

@property (assign, nonatomic, getter=isManualCardBrandSelectionRequired) BOOL manualCardBrandSelectionRequired;
/**
 *  @brief Set of supported card brands.
 *  @details If supportedCardBrands is set and does not contain recognized card brand of user card number the state changes to ::WDECCardFieldStateCardUnsupported. Set can contain NSNumbers with ::WDECCardBrand values. Example:
 
 cardField.supportedCardBrands = [NSSet setWithObjects:@(WDECCardBrandAmex), @(WDECCardBrandMasterCard), @(WDECCardBrandVisa), nil];
 
 */
@property(nonatomic, copy, nullable) NSArray<NSNumber *> *supportedCardBrands;

/**
 *  @brief Whether or not the field currently contains a valid card number, expiration date and security code.
 */
@property (nonatomic, readonly, getter=isValid) BOOL valid;

/**
 *  @brief Resets all of the contents of all of the fields.
 *  @details If the field is currently being edited, the number field will become selected.
 */
- (void)clear;

@end

/** @} */

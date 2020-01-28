//
//  WDECAnimatedCardField.h
//  WDeComCard
//
//  Created by Vrana, Jozef on 14/01/2019.
//  Copyright © 2019 Wirecard Technologies GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WDeCom/WDeCom.h>

@class WDECAnimatedCardField;
@class WDECCard;
@class WDECCardPayment;

/** WDECAnimatedCardField states emitted during user interacion */
typedef NS_ENUM(NSUInteger, WDECAnimatedCardFieldState) {
    /** Initial state and state after [-[WDECAnimatedCardField clear]](@ref WDECAnimatedCardField.clear) */
    WDECAnimatedCardFieldStateCardInitial = 0,
    
    /** User entered valid card data */
    WDECAnimatedCardFieldStateCardValid,
    /** User is trying to type unsupported card type */
    WDECAnimatedCardFieldStateCardUnsupported,
    
    /** Card number UITextField is first responder */
    WDECAnimatedCardFieldStateNumberEditting,
    /** Card number is incomplete */
    WDECAnimatedCardFieldStateNumberIncomplete,
    /** Card number is invalid */
    WDECAnimatedCardFieldStateNumberInvalid,
    /** User entered valid card number */
    WDECAnimatedCardFieldStateNumberValid,
    
    /** Expiration date UITextField is first responder  */
    WDECAnimatedCardFieldStateExpirationDateEditting,    
    /** Expiration date is incomplete */
    WDECAnimatedCardFieldStateExpirationDateIncomplete,
    /** Expiration date is invalid */
    WDECAnimatedCardFieldStateExpirationDateInvalid,
    /** User entered valid expiration date */
    WDECAnimatedCardFieldStateExpirationDateValid,
    
    /** Security code UITextField became first responder */
    WDECAnimatedCardFieldStateSecurityCodeEditting,
    /** Security code is incomplete */
    WDECAnimatedCardFieldStateSecurityCodeIncomplete,
    /** Security code is invalid */
    WDECAnimatedCardFieldStateSecurityCodeInvalid,
    /** Security code is valid */
    WDECAnimatedCardFieldStateSecurityCodeValid,
    
    /** Cardholder is first responder */
    WDECAnimatedCardFieldStateCardholderEditting,
    /** Cardholder is empty */
    WDECAnimatedCardFieldStateCardholderInvalid

};

/**
 *  @brief This protocol allows a delegate to be notified when a payment text field's contents change
 *  @details It can be used to take further actions depending on the validity of its contents.
 */
@protocol WDECAnimatedCardFieldDelegate <NSObject>

/**
 *  @brief Called when either the card number, expiration month/year or security code changes.
 *  @details At this point, one can call WDECAnimatedCardField.valid on the text field to determine, for example, whether or not to enable a button to submit WDECCardPayment.
 *
 *  @param animatedCardField the field that has changed
 *  @param state the animatedCard state
 */
- (void)animatedCardField:(nonnull WDECAnimatedCardField *)animatedCardField didChangeState:(WDECAnimatedCardFieldState)state;

@end

@interface WDECAnimatedCardField : UIView

/**
 *  @brief The receiver’s delegate
 *  @details You can use the delegate to respond to the card data entered by the user
 */
@property (nonatomic, weak, nullable) IBOutlet id<WDECAnimatedCardFieldDelegate> delegate;

/**
 *  @brief Non-sensitive card data.
 *  @details It is convenient to set the data if you collect security code only. According [WDECCard brand] security code is validated.
 */
@property (nonatomic, copy, null_resettable) WDECCard *card;

/**
 *  @brief Payment object where card data are appended.
 *  @details If [WDECCardPayment token] is set WDECAnimatedCardField collects only security code. It clears user input.
 */
@property (nonatomic, strong, nonnull) WDECCardPayment *cardPayment;

/**
 *  @brief WDECLocale enum used to localize
 *  @details Localization of WDECCardField happens in following order:
 
 - overriden WDECCardField value (e.g. [WDECCardField numberPlaceholder], etc.)
 - localized default value by [WDECCardField locale]
 - localized default value by [NSLocale preferredLanguages]
 - if locale is not set or localization files are missing default english value is used.
 
 */
@property (nonatomic) WDECLocale locale;

@property (assign, nonatomic, getter=isManualCardBrandSelectionRequired) BOOL manualCardBrandSelectionRequired;

/**
 *
 *
 */
@property(nonatomic, copy, null_resettable) UIColor *cardImageColor;

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
 *  @brief The placeholder for the expiration date field.
 *  @details Defaults to localized @"MM/YY".
 */
@property(nonatomic, copy, null_resettable) /*IBInspectable*/ NSString *expirationDatePlaceholder;

/**
 *  @brief The placeholder for the security code field.
 *  @details Defaults to @"CVC".
 */
@property(nonatomic, copy, null_resettable) /*IBInspectable*/ NSString *securityCodePlaceholder;

/**
 *  @brief The placeholder for the cardholder field.
 *  @details Defaults to @"Cardholder".
 */
@property(nonatomic, copy, null_resettable) /*IBInspectable*/ NSString *cardholderPlaceholder;

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

/**
 *  @brief The underline color used for textfield
 *  @detials Default is [UIColor colorWithRed:  48./255. green:  171./255. blue:  254./255. alpha:1.]. Set this property to nil to reset to the default.
 */
@property (nonatomic, copy, null_resettable) UIColor *underlineColor;

@property (nonatomic, copy, null_resettable) UIColor *animatedCardTextColor;
/**
 *  @brief Set of supported card brands.
 *  @details If supportedCardBrands is set and does not contain recognized card brand of user card number the state changes to ::WDECCardFieldStateCardUnsupported. Set can contain NSNumbers with ::WDECCardBrand values. Example:
 
 cardField.supportedCardBrands = [NSSet setWithObjects:@(WDECCardBrandAmex), @(WDECCardBrandMasterCard), @(WDECCardBrandVisa), nil];
 
 */
@property(nonatomic, copy, nullable) NSArray<NSNumber *> *supportedCardBrands;

/**
 *  @brief Whether or not should card number field focus after component is visible.
 */
@property(nonatomic) BOOL shouldFocus;

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


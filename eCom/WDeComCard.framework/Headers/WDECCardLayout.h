//
//  WDECCardLayout.h
//  WDeCom
//
//  Created by Vrana, Jozef on 04/06/2018.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WDECCardLayout : UIView

/** @addtogroup ios_sdk
 *  @{
 */
typedef NS_ENUM(NSUInteger, WDECCardStyleLayout) {

    WDECCardStyleLayoutDefault = 0,
    WDECCardStyleLayoutAnimated,
};

/**
 *  @brief Animated card in full screen card payment
 *  @details Setting this property to WDECCardPaymentVCStyleAnimated shows the animated card in full screen card payment, default value is WDECCardPaymentVCStyleDefault
 */
@property (nonatomic) WDECCardStyleLayout layout UI_APPEARANCE_SELECTOR;

/**
 *  @brief Array of supported card brands.
 *  @details If supportedCardBrands is set and does not contain recognized card brand of user card number the state changes to ::WDECCardFieldStateCardUnsupported. Set can contain NSNumbers with ::WDECCardBrand values. Example:
 
 [WDECCardLayout appearance] setSupportedCardBrands = @[@(WDECCardBrandAmex), @(WDECCardBrandMasterCard), @(WDECCardBrandVisa)];
 
 */
@property (strong, nonatomic) NSArray<NSNumber *> *supportedCardBrands UI_APPEARANCE_SELECTOR;

@property (assign, nonatomic) BOOL manualCardBrandSelectionRequired;

@end

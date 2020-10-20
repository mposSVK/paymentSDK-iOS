//
//  WDECHeaderView.h
//  WDeCom
//
//  Created by Vrana, Jozef on 04/06/2018.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, WDECNavigationBarStyle) {
    WDECNavigationBarStyleUndefined = 0,
    WDECNavigationBarStyleBig,
    WDECNavigationBarStyleSmall,
};

typedef NS_ENUM(NSInteger, WDECStatusBarStyle) {
    WDECStatusBarStyleDarkContent   = 0, // Dark content, for use on light backgrounds
    WDECStatusBarStyleLightContent, // Light content, for use on dark backgrounds
    WDECStatusBarStyleAuto, // Custom content, for use on dark backgrounds by the backgound color of WDECNavigationBar control
};

/**
 * WDECNavigationBar
 */

@protocol WDECNavigationBarDelegate <NSObject>

@required
-(void)backButtonTappedIn:(nonnull id)navbar;
-(void)rightButtonTappedIn:(nonnull id)navbar;
-(CGSize)contentSize:(nonnull id)navbar;

@optional
-(void)didChange:(nonnull id)navbar size:(CGSize)size;

@end

/*IB_DESIGNABLE*/
@interface WDECNavigationBar : UIView

@property (weak, nonatomic, nullable) id<WDECNavigationBarDelegate> delegate;

@property (assign, nonatomic) WDECNavigationBarStyle barStyle UI_APPEARANCE_SELECTOR;

@property (assign, nonatomic) /*IBInspectable*/ BOOL isResizableWithKeyboard;
@property (assign, nonatomic) /*IBInspectable*/ BOOL resizeAnimated;

- (void)handleDefaultNavbar;

- (void)enableBackButton:(BOOL)enable;
- (void)enableRightButton:(BOOL)enable;
- (void)hideRightButton:(BOOL)hidden;
- (void)hideTitle:(BOOL)hidden;
- (void)hideSubtitle:(BOOL)hidden;

@property (strong, nonatomic, nullable) /*IBInspectable*/ NSString *title;
@property (strong, nonatomic, nullable) /*IBInspectable*/ NSString *subtitle;
@property (strong, nonatomic, nullable) /*IBInspectable*/ NSString *backButtonTitle;
@property (strong, nonatomic, nullable) /*IBInspectable*/ NSString *rightButtonTitle;

@property (nonatomic, strong, nullable) /*IBInspectable*/ UIColor *firstBackgroundColor UI_APPEARANCE_SELECTOR;
@property (nonatomic, strong, nullable) /*IBInspectable*/ UIColor *secondBackgroundColor UI_APPEARANCE_SELECTOR;
@property (nonatomic, assign) /*IBInspectable*/ BOOL secondBackgroundColorIsPrefered UI_APPEARANCE_SELECTOR;

@property (nonatomic, assign) /*IBInspectable*/ WDECStatusBarStyle preferredStatusBarStyle UI_APPEARANCE_SELECTOR;

@end



//
//  WDECCardFieldScanner.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 5/1/18.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <WDeComCard/WDECCardField.h>

@interface WDECCardFieldScanner : WDECCardField

@property (nonatomic, copy, null_resettable) NSString *min_last_year;

@property (nonatomic, copy, null_resettable) NSString *max_last_year;

/**
 *  @brief The CardField scanner button image.
 *  @details Image/icon customization option. The default is nil, the CardField button shows the default bundle image. If set custom image the CardField replace the default image with a new one.
 */
@property (nonatomic, strong, nullable) UIImage *scanImage UI_APPEARANCE_SELECTOR;
/**
 *  @brief The scanImage icon tint color.
 *  @details This is a proxy for the imageview's tintColor property.
 */
@property (nonatomic, strong, nullable) UIColor *scanImageTintColor UI_APPEARANCE_SELECTOR;
/**
 *  @brief The scanImage icon visibility option.
 *  @details Default is NO. If set to YES  and the scanner is available, scanImage are visible
 */
@property (nonatomic, assign) BOOL enableScanImageButton UI_APPEARANCE_SELECTOR;

/**
 *  @brief The scanToolbarButton title.
 *  @details Title customization option. The default is nil, the toolbar button shows the default "Scan" title. If set custom title the toolbar button replace the title.
 */
@property (nonatomic, strong, nullable) NSString *scanToolbarButtonTitle UI_APPEARANCE_SELECTOR;
/**
 *  @brief The scanToolbarButton visibility option.
 *  @details Default is YES when the scanner is available. If set to NO the scanToolbar button is hidden.
 */
@property (nonatomic, assign) BOOL enableScanToolbarButton UI_APPEARANCE_SELECTOR;

@end

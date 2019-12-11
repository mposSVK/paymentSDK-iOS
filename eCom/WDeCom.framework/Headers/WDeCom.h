//
//  WDeCom.h
//  WDeCom
//
//  Created by Vrana, Jozef on 11/04/2018.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for WDeCom.
FOUNDATION_EXPORT double WDeComVersionNumber;

//! Project version string for WDeCom.
FOUNDATION_EXPORT const unsigned char WDeComVersionString[];

#import <WDeCom/WDECVersion.h>

#import <WDeCom/WDECBool.h>
#import <WDeCom/WDECClient.h>
#import <WDeCom/WDECClientParameters.h>
#import <WDeCom/WDECLocale.h>
#import <WDeCom/WDECNotificationFormat.h>
#import <WDeCom/WDECPayment.h>
#import <WDeCom/WDECPaymentResponse.h>
#import <WDeCom/WDECPaymentMethodName.h>
#import <WDeCom/WDECPeriodic.h>
#import <WDeCom/WDECSubMerchantInfo.h>
#import <WDeCom/WDECTransactionState.h>
#import <WDeCom/WDECTransactionType.h>
#import <WDeCom/WDECLoyaltyCard.h>
#import <WDeCom/WDECCardData.h>

// UIAppearance elements
#import <WDeCom/WDECAmountLabel.h>
#import <WDeCom/WDECAnimatedCardView.h>
#import <WDeCom/WDECButton.h>
#import <WDeCom/WDECLabel.h>
#import <WDeCom/WDECHeaderLabel.h>
#import <WDeCom/WDECSubmitButton.h>
#import <WDeCom/WDECCancelButton.h>
#import <WDeCom/WDECCancelButtonImage.h>
#import <WDeCom/WDECCardfieldAnimatedCardView.h>
#import <WDeCom/WDECImageView.h>
#import <WDeCom/WDECNavigationBar.h>
#import <WDeCom/WDECHeaderLabel.h>
#import <WDeCom/WDECLocalize.h>
#import <WDeCom/WDECOrderTotalLabel.h>
#import <WDeCom/WDECScannerBrackets.h>
#import <WDeCom/WDECScannerCancelButton.h>
#import <WDeCom/WDECScannerFlashlightButton.h>
#import <WDeCom/WDECScannerNavigationBar.h>
#import "WDeCom/WDECCardScannerHelpLabel.h"
#import <WDeCom/WDECScannerGalleryButton.h>
#import <WDeCom/WDECCardScannerTitleLabel.h>
#import <WDeCom/WDECIBANScannerTitleLabel.h>
#import <WDeCom/WDeCIBANScannerHelpLabel.h>
#import <WDeCom/WDECSwitch.h>
#import <WDeCom/WDECTextView.h>
#import <WDeCom/WDECTextfield.h>
#import <WDeCom/WDECCardTextField.h>
#import <WDeCom/WDECView.h>
#import <WDeCom/WDECCameraAccessLabel.h>
#import <WDeCom/WDECCameraAccessButton.h>

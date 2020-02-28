//
//  WDECIsoTransactionType.h
//  WDeCom
//
//  Created by Vrana, Jozef on 16/04/2019.
//  Copyright © 2019 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of iso transaction types */
typedef NS_ENUM(NSUInteger, WDECIsoTransactionType) {
    /** Uninitialized or invalid value */
    WDECIsoTransactionTypeUndefined = 0,
    /**
     * Goods/ Service Purchase
     */
    WDECIsoTransactionTypeGoodsServicePurchase,
    /**
     * Check Acceptance
     */
    WDECIsoTransactionTypeCheckAcceptance,
    /**
     * Account Funding
     */
    WDECIsoTransactionTypeAccountFunding,
    /**
     * Quasi-Cash Transaction
     */
    WDECIsoTransactionTypeQuasicashTransaction,
    /**
     * Prepaid Activation and Load
     */
    WDECIsoTransactionTypePrepaidActivationAndLoad,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    WDECIsoTransactionTypeTotalNumber
};

/**
 @brief Converts transaction type string representation to WDECIsoTransactionType enumeration
 
 @param code iso transaction type string representation
 
 @return WDECIsoTransactionType enumeration
 */
WDECIsoTransactionType WDECIsoTransactionTypeFromCode(NSString *code);
/**
 @brief Converts reorder type WDECReorderType enumeration to string representation
 
 @param reorderType WDECReorderType enumeration
 
 @return iso transaction type string representation
 */
NSString *WDECIsoTransactionTypeGetCode(WDECIsoTransactionType reorderType);

/** @} */






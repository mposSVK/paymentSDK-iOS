//
//  WDECTransactionType.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 10/29/15.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of transaction types */
typedef NS_ENUM(NSUInteger, WDECTransactionType) {
    /** Uninitialized or invalid value */
    WDECTransactionTypeUndefined = 0,
    
    /** Reserves funds from the [Card Holder]'s account. 7 days left to conduct a WDECTransactionTypeCaptureAuthorization on the transaction.
     
     String representation: authorization
     */
    WDECTransactionTypeAuthorization,
    
    /** Verifies the card's validity without leaving an authorized amount.
     
     String representation: authorization-only
     */
    WDECTransactionTypeAuthorizationOnly,
    
    /** Takes funds from the [Card Holder]'s account. Must follow an WDECTransactionTypeAuthorization
     
     String representation: capture-authorization
     */
    WDECTransactionTypeCaptureAuthorization,
    
    /** Moves funds from the Account Holder to the Merchant.
     
     String representation: debit
     */
    WDECTransactionTypeDebit,
    
    //ToDo: Description
    /** Loyality support
     
     String representation: enrollment
     */
    WDECTransactionTypeEnrollment,

    /** Represents the request for a debit. If the transaction state is success, then the outcome of the debit is not yet known.
     
     String representation: pending-debit
     */
    WDECTransactionTypePendingDebit,
    
    /** Takes funds from the [Card Holder]'s account. A one-step process to conduct two transaction types: WDECTransactionTypeAuthorization and WDECTransactionTypeCapture.
     
     String representation: purchase
     */
    WDECTransactionTypePurchase,
    
    /** Reserve funds from the [Card Holder]'s account. Identical to a WDECTransactionTypeAuthorization except for the fact that it Refers to a previous WDECTransactionTypeAuthorization transaction.
     
     String representation: referenced-authorization
     */
    WDECTransactionTypeReferencedAuthorization,
    
    /** Takes funds from the [Card Holder]'s account. Identical to a WDECTransactionTypePurchase except for the fact that it refers to a previous WDECTransactionTypePurchase transaction.
     
     String representation: referenced-purchase
     */
    WDECTransactionTypeReferencedPurchase,

    /** Gives funds to the [Card Holder]'s account, referring to an eligible [Capture].
     
     String representation: refund-capture
     */
    WDECTransactionTypeRefundCapture,
    
    WDECTransactionTypeRefundDebit,
    
    /** Gives funds to the [Card Holder]'s account, referring to an eligible [Purchase].
     
     String representation: refund-purchase
     */
    WDECTransactionTypeRefundPurchase,
    
    /** Simply converts credit card information into a token that can be used in subsequent Payment Transactions, instead of the actual credit card information.
     
     String representation: tokenize
     */
    WDECTransactionTypeTokenize,
    
    /** Frees reserved funds from the [Card Holder]'s account due to an [Authorization].
     
     String representation: void-authorization
     */
    WDECTransactionTypeVoidAuthorization,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    WDECTransactionTypeTotalNumber
};

/**
 @brief Converts transaction type string representation to WDECTransactionType enumeration
 
 @param code transaction type string representation
 
 @return WDECTransactionType enumeration
 */
WDECTransactionType WDECTransactionTypeFromCode(NSString *code);
/**
 @brief Converts transaction type WDECTransactionType enumeration to string representation
 
 @param transactionType transaction type WDECTransactionType enumeration
 
 @return transaction type string representation
 */
NSString *WDECTransactionTypeGetCode(WDECTransactionType transactionType);

/** @} */

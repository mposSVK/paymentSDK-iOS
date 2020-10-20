//
//  WDECCurrency.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 10/29/15.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of currencies supported by ElasticEngine
 */
typedef NS_ENUM(NSUInteger, WDECCurrency) {
    /** Uninitialized or invalid value */
    WDECCurrencyUndefined = 0,
    
    /** Andorran Peseta */
    WDECCurrencyADP,
    /** Dirhams */
    WDECCurrencyAED,
    /** Afghanis */
    WDECCurrencyAFN,
    /** Leke */
    WDECCurrencyALL,
    /** Drams */
    WDECCurrencyAMD,
    /** Guilders (also called Florins) */
    WDECCurrencyANG,
    /** Kwanza */
    WDECCurrencyAOA,
    /** Pesos */
    WDECCurrencyARS,
    /** Dollars */
    WDECCurrencyAUD,
    /** Guilders (also called Florins) */
    WDECCurrencyAWG,
    /** New Manats */
    WDECCurrencyAZN,
    /** Convertible Marka */
    WDECCurrencyBAM,
    /** Dollars */
    WDECCurrencyBBD,
    /** Taka */
    WDECCurrencyBDT,
    /** Leva */
    WDECCurrencyBGN,
    /** Dinars */
    WDECCurrencyBHD,
    /** Francs */
    WDECCurrencyBIF,
    /** Dollars */
    WDECCurrencyBMD,
    /** Dollars */
    WDECCurrencyBND,
    /** Bolivianos */
    WDECCurrencyBOB,
    /** Brazil Real */
    WDECCurrencyBRL,
    /** Dollars */
    WDECCurrencyBSD,
    /** Ngultrum */
    WDECCurrencyBTN,
    /** Pulas */
    WDECCurrencyBWP,
    /** Rubles */
    WDECCurrencyBYR,
    /** Dollars */
    WDECCurrencyBZD,
    /** Dollars */
    WDECCurrencyCAD,
    /** Congolese Francs */
    WDECCurrencyCDF,
    /** Francs */
    WDECCurrencyCHF,
    /** Unidades de formento */
    WDECCurrencyCLF,
    /** Pesos */
    WDECCurrencyCLP,
    /** Yuan Renminbi */
    WDECCurrencyCNY,
    /** Pesos */
    WDECCurrencyCOP,
    /** Colones */
    WDECCurrencyCRC,
    /** Pesos */
    WDECCurrencyCUP,
    /** Escudos */
    WDECCurrencyCVE,
    /** Pounds (expires 2008-Jan-31) */
    WDECCurrencyCYP,
    /** Koruny */
    WDECCurrencyCZK,
    /** Default */
    WDECCurrencyDEF,
    /** Francs */
    WDECCurrencyDJF,
    /** Kroner */
    WDECCurrencyDKK,
    /** Pesos */
    WDECCurrencyDOP,
    /** Algeria Dinars */
    WDECCurrencyDZD,
    /** Krooni */
    WDECCurrencyEEK,
    /** Pounds */
    WDECCurrencyEGP,
    /** Nakfa */
    WDECCurrencyERN,
    /** Birr */
    WDECCurrencyETB,
    /** Euro */
    WDECCurrencyEUR,
    /** Dollars */
    WDECCurrencyFJD,
    /** Pounds */
    WDECCurrencyFKP,
    /** Pounds */
    WDECCurrencyGBP,
    /** Lari */
    WDECCurrencyGEL,
    /** Pounds */
    WDECCurrencyGGP,
    /** Cedis */
    WDECCurrencyGHS,
    /** Pounds */
    WDECCurrencyGIP,
    /** Dalasi */
    WDECCurrencyGMD,
    /** Francs */
    WDECCurrencyGNF,
    /** Quetzales */
    WDECCurrencyGTQ,
    /** Dollars */
    WDECCurrencyGYD,
    /** Dollars */
    WDECCurrencyHKD,
    /** Lempiras */
    WDECCurrencyHNL,
    /** Kuna */
    WDECCurrencyHRK,
    /** Gourdes */
    WDECCurrencyHTG,
    /** Forint */
    WDECCurrencyHUF,
    /** Rupiahs */
    WDECCurrencyIDR,
    /** New Shekels */
    WDECCurrencyILS,
    /** Pounds */
    WDECCurrencyIMP,
    /** Rupees */
    WDECCurrencyINR,
    /** Dinars */
    WDECCurrencyIQD,
    /** Rials */
    WDECCurrencyIRR,
    /** Kronur */
    WDECCurrencyISK,
    /** Pounds */
    WDECCurrencyJEP,
    /** Dollars */
    WDECCurrencyJMD,
    /** Dinars */
    WDECCurrencyJOD,
    /** Yen */
    WDECCurrencyJPY,
    /** Shillings */
    WDECCurrencyKES,
    /** Soms */
    WDECCurrencyKGS,
    /** Riels */
    WDECCurrencyKHR,
    /** Francs */
    WDECCurrencyKMF,
    /** Won */
    WDECCurrencyKPW,
    /** Won */
    WDECCurrencyKRW,
    /** Dinars */
    WDECCurrencyKWD,
    /** Dollars */
    WDECCurrencyKYD,
    /** Tenge */
    WDECCurrencyKZT,
    /** Kips */
    WDECCurrencyLAK,
    /** Pounds */
    WDECCurrencyLBP,
    /** Rupees */
    WDECCurrencyLKR,
    /** Dollars */
    WDECCurrencyLRD,
    /** Maloti */
    WDECCurrencyLSL,
    /** Litai */
    WDECCurrencyLTL,
    /** Lati */
    WDECCurrencyLVL,
    /** Dinars */
    WDECCurrencyLYD,
    /** Airline Miles */
    WDECCurrencyM_M,
    /** Dirhams */
    WDECCurrencyMAD,
    /** Lei */
    WDECCurrencyMDL,
    /** Ariary */
    WDECCurrencyMGA,
    /** Denars */
    WDECCurrencyMKD,
    /** Kyats */
    WDECCurrencyMMK,
    /** Tugriks */
    WDECCurrencyMNT,
    /** Patacas */
    WDECCurrencyMOP,
    /** Ouguiyas */
    WDECCurrencyMRO,
    /** Liri (expires 2008-Jan-31) */
    WDECCurrencyMTL,
    /** Rupees */
    WDECCurrencyMUR,
    /** Rufiyaa */
    WDECCurrencyMVR,
    /** Kwachas */
    WDECCurrencyMWK,
    /** Pesos */
    WDECCurrencyMXN,
    /** Ringgits */
    WDECCurrencyMYR,
    /** Meticais */
    WDECCurrencyMZN,
    /** Dollars */
    WDECCurrencyNAD,
    /** Nairas */
    WDECCurrencyNGN,
    /** Cordobas */
    WDECCurrencyNIO,
    /** Krone */
    WDECCurrencyNOK,
    /** Nepal Rupees */
    WDECCurrencyNPR,
    /** Dollars */
    WDECCurrencyNZD,
    /** Rials */
    WDECCurrencyOMR,
    /** Balboa */
    WDECCurrencyPAB,
    /** Nuevos Soles */
    WDECCurrencyPEN,
    /** Kina */
    WDECCurrencyPGK,
    /** Pesos */
    WDECCurrencyPHP,
    /** Rupees */
    WDECCurrencyPKR,
    /** Zlotych */
    WDECCurrencyPLN,
    /** Guarani */
    WDECCurrencyPYG,
    /** Rials */
    WDECCurrencyQAR,
    /** New Lei */
    WDECCurrencyRON,
    /** Dinars */
    WDECCurrencyRSD,
    /** Rubles */
    WDECCurrencyRUB,
    /** Rwanda Francs */
    WDECCurrencyRWF,
    /** Riyals */
    WDECCurrencySAR,
    /** Dollars */
    WDECCurrencySBD,
    /** Rupees */
    WDECCurrencySCR,
    /** Pounds */
    WDECCurrencySDG,
    /** Kronor */
    WDECCurrencySEK,
    /** Dollars */
    WDECCurrencySGD,
    /** Pounds */
    WDECCurrencySHP,
    /** Leones */
    WDECCurrencySLL,
    /** Shillings */
    WDECCurrencySOS,
    /** Luigini */
    WDECCurrencySPL,
    /** Dollars */
    WDECCurrencySRD,
    /** Dobras */
    WDECCurrencySTD,
    /** Colones */
    WDECCurrencySVC,
    /** Pounds */
    WDECCurrencySYP,
    /** Emalangeni */
    WDECCurrencySZL,
    /** Baht */
    WDECCurrencyTHB,
    /** Somoni */
    WDECCurrencyTJS,
    /** Manats */
    WDECCurrencyTMM,
    /** Dinars */
    WDECCurrencyTND,
    /** Pa’anga */
    WDECCurrencyTOP,
    /** New Lira */
    WDECCurrencyTRY,
    /** Dollars */
    WDECCurrencyTTD,
    /** Tuvalu Dollars */
    WDECCurrencyTVD,
    /** New Dollars */
    WDECCurrencyTWD,
    /** Shillings */
    WDECCurrencyTZS,
    /** Hryvnia */
    WDECCurrencyUAH,
    /** Shillings */
    WDECCurrencyUGX,
    /** Unknown */
    WDECCurrencyUNK,
    /** Dollars */
    WDECCurrencyUSD,
    /** Pesos */
    WDECCurrencyUYU,
    /** Sums */
    WDECCurrencyUZS,
    /** Bolivares (expires 2008-Jun-30) */
    WDECCurrencyVEB,
    /** Bolivares Fuertes */
    WDECCurrencyVEF,
    /** Dong */
    WDECCurrencyVND,
    /** Vatu */
    WDECCurrencyVUV,
    /** Tala */
    WDECCurrencyWST,
    /** Francs */
    WDECCurrencyXAF,
    /** Ounces */
    WDECCurrencyXAG,
    /** Ounces */
    WDECCurrencyXAU,
    /** Dollars */
    WDECCurrencyXCD,
    /** IMF */
    WDECCurrencyXDR,
    /** Francs */
    WDECCurrencyXOF,
    /** Ounces */
    WDECCurrencyXPD,
    /** Francs */
    WDECCurrencyXPF,
    /** Ounces */
    WDECCurrencyXPT,
    /** Rials */
    WDECCurrencyYER,
    /** Rand */
    WDECCurrencyZAR,
    /** Kwacha */
    WDECCurrencyZMK,
    /** Zimbabwe Dollars */
    WDECCurrencyZWD,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    WDECCurrencyTotalNumber
};
NSString * WDECCurrencyGetISOCode(WDECCurrency currency);
WDECCurrency WDECCurrencyFromISOCode(NSString *code);

/** @} */

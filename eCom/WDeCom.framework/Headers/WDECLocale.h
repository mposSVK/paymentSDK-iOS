//
//  WDECLocale.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 11/12/15.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of Locales supported by ElasticEngine */
typedef NS_ENUM(NSUInteger, WDECLocale) {
    /** Uninitialized or invalid value */
    WDECLocaleUndefined = 0,

    /** Afrikaans                   Afrikaans */
    WDECLocale_af,
    /** Arabic                      عربي */
    WDECLocale_ar,
    /** Azerbaijani                 Azərbaycan */
    WDECLocale_az,
    /** Belarusian                  Беларускія */
    WDECLocale_be,
    /** Bulgarian                   Български */
    WDECLocale_bg,
    /** Bengali                     বাঙ্গালী */
    WDECLocale_bn,
    /** Catalan                     català */
    WDECLocale_ca,
    /** Czech                       Česky */
    WDECLocale_cs,
    /** Welsh                       Cymraeg */
    WDECLocale_cy,
    /** Danish                      Dansk */
    WDECLocale_da,
    /** German                      Deutsch */
    WDECLocale_de,
    /** Greek                       Ελληνικά */
    WDECLocale_el,
    /** English                     English */
    WDECLocale_en,
    /** Esperanto                   Esperanto */
    WDECLocale_eo,
    /** Spanish                     Español */
    WDECLocale_es,
    /** Estonian                    Eesti */
    WDECLocale_et,
    /** Basque                      Euskal */
    WDECLocale_eu,
    /** Persian                     پارسی */
    WDECLocale_fa,
    /** Finnish                     Suomi */
    WDECLocale_fi,
    /** French                      Français */
    WDECLocale_fr,
    /** Irish                       Gaeilge */
    WDECLocale_ga,
    /** Galician                    Galicia */
    WDECLocale_gl,
    /** Gujarati                    ગુજરાતી */
    WDECLocale_gu,
    /** Hindi                       हिन्दी भाषा */
    WDECLocale_hi,
    /** Croatian                    Hrvat */
    WDECLocale_hr,
    /** Haitian Creole              kreyòl ayisyen */
    WDECLocale_ht,
    /** Hungarian                   Magyar */
    WDECLocale_hu,
    /** Armenian                    հայերեն */
    WDECLocale_hy,
    /** Indonesian                  Bahasa Indonesia */
    WDECLocale_id,
    /** Icelandic                   Icelandic */
    WDECLocale_is,
    /** Italian                     Italiano */
    WDECLocale_it,
    /** Hebrew                      עברית */
    WDECLocale_iw,
    /** Japanese                    日本語 */
    WDECLocale_ja,
    /** Georgian                    საქართველოს */
    WDECLocale_ka,
    /** Kannadac                    Kannadac */
    WDECLocale_kn,
    /** Korean                      한국어 */
    WDECLocale_ko,
    /** Latin                       lingua latina */
    WDECLocale_la,
    /** Lithuanian                  lietuvis */
    WDECLocale_lt,
    /** Latvian                     latvietis */
    WDECLocale_lv,
    /** Macedonian                  македонски */
    WDECLocale_mk,
    /** Malay                       Melayu */
    WDECLocale_ms,
    /** Maltese                     Malti */
    WDECLocale_mt,
    /** Dutch                       Nederlands */
    WDECLocale_nl,
    /** Norwegian                   Norsk */
    WDECLocale_no,
    /** Polish                      Polski */
    WDECLocale_pl,
    /** Portuguese                  Português */
    WDECLocale_pt,
    /** Romanian                    Română */
    WDECLocale_ro,
    /** Russian                     Русский */
    WDECLocale_ru,
    /** Slovak                      slovenčina */
    WDECLocale_sk,
    /** Slovenian                   Slovenski jezik */
    WDECLocale_sl,
    /** Albanian                    shqiptar */
    WDECLocale_sq,
    /** Serbian                     Србин */
    WDECLocale_sr,
    /** Swedish                     Svenska */
    WDECLocale_sv,
    /** Swahili                     Svahili */
    WDECLocale_sw,
    /** Tamil                       தமிழ் */
    WDECLocale_ta,
    /** Telugu                      తెలుగు */
    WDECLocale_te,
    /** Thai                        ภาษาไทย */
    WDECLocale_th,
    /** Filipino                    Pilipino */
    WDECLocale_tl,
    /** Turkish                     Türkçe */
    WDECLocale_tr,
    /** Ukrainian                   Українська */
    WDECLocale_uk,
    /** Urdu                        اردو */
    WDECLocale_ur,
    /** Vietnamese                  ngôn ngư Việt nam */
    WDECLocale_vi,
    /** Yiddish                     ייִדיש */
    WDECLocale_yi,
    /** Chinese (Simplified)        中文（简体) */
    WDECLocale_zh_CN,
    /** Chinese (Traditional)       中文（繁体） */
    WDECLocale_zh_TW,

    /** Total number of values. It is used for validation and handled as invalid value */
    WDECLocaleTotalNumber
};

/** @} */

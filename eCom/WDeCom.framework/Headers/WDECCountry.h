//
//  WDECCountry.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 10/12/15.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of countries supported by ElasticEngine */
typedef NS_ENUM(NSUInteger, WDECCountry) {
    /** Uninitialized or invalid value */
    WDECCountryUndefined = 0,
    
    /** ANDORRA */
    WDECCountryAD,
    /** UNITED ARAB EMIRATES */
    WDECCountryAE,
    /** AFGHANISTAN */
    WDECCountryAF,
    /** ANTIGUA AND BARBUDA */
    WDECCountryAG,
    /** ANGUILLA */
    WDECCountryAI,
    /** ALBANIA */
    WDECCountryAL,
    /** ARMENIA */
    WDECCountryAM,
    /** NETHERLANDS ANTILLES */
    WDECCountryAN,
    /** ANGOLA */
    WDECCountryAO,
    /** ANTARCTICA */
    WDECCountryAQ,
    /** ARGENTINA */
    WDECCountryAR,
    /** AMERICAN SAMOA */
    WDECCountryAS,
    /** AUSTRIA */
    WDECCountryAT,
    /** AUSTRALIA */
    WDECCountryAU,
    /** ARUBA */
    WDECCountryAW,
    /** Åland Islands */
    WDECCountryAX,
    /** AZERBAIJAN */
    WDECCountryAZ,
    /** BOSNIA AND HERZEGOVINA */
    WDECCountryBA,
    /** BARBADOS */
    WDECCountryBB,
    /** BANGLADESH */
    WDECCountryBD,
    /** BELGIUM */
    WDECCountryBE,
    /** BURKINA FASO */
    WDECCountryBF,
    /** BULGARIA */
    WDECCountryBG,
    /** BAHRAIN */
    WDECCountryBH,
    /** BURUNDI */
    WDECCountryBI,
    /** BENIN */
    WDECCountryBJ,
    /** Saint-Barthélemy */
    WDECCountryBL,
    /** BERMUDA */
    WDECCountryBM,
    /** BRUNEI DARUSSALAM */
    WDECCountryBN,
    /** BOLIVIA, PLURINATIONAL STATE OF */
    WDECCountryBO,
    /** BONAIRE SINT EUSTATIUS AND SABA */
    WDECCountryBQ,
    /** BRAZIL */
    WDECCountryBR,
    /** BAHAMAS */
    WDECCountryBS,
    /** BHUTAN */
    WDECCountryBT,
    /** BOUVET ISLAND */
    WDECCountryBV,
    /** BOTSWANA */
    WDECCountryBW,
    /** BELARUS */
    WDECCountryBY,
    /** BELIZE */
    WDECCountryBZ,
    /** CANADA */
    WDECCountryCA,
    /** COCOS (KEELING) ISLANDS */
    WDECCountryCC,
    /** CONGO, THE DEMOCRATIC REPUBLIC OF THE */
    WDECCountryCD,
    /** CENTRAL AFRICAN REPUBLIC */
    WDECCountryCF,
    /** CONGO */
    WDECCountryCG,
    /** SWITZERLAND */
    WDECCountryCH,
    /** Côte d’Ivoire */
    WDECCountryCI,
    /** COOK ISLANDS */
    WDECCountryCK,
    /** CHILE */
    WDECCountryCL,
    /** CAMEROON */
    WDECCountryCM,
    /** CHINA */
    WDECCountryCN,
    /** COLOMBIA */
    WDECCountryCO,
    /** COSTA RICA */
    WDECCountryCR,
    /** CUBA */
    WDECCountryCU,
    /** CAPE VERDE */
    WDECCountryCV,
    /** CURACAO */
    WDECCountryCW,
    /** CHRISTMAS ISLAND */
    WDECCountryCX,
    /** CYPRUS */
    WDECCountryCY,
    /** CZECH REPUBLIC */
    WDECCountryCZ,
    /** GERMANY */
    WDECCountryDE,
    /** DJIBOUTI */
    WDECCountryDJ,
    /** DENMARK */
    WDECCountryDK,
    /** DOMINICA */
    WDECCountryDM,
    /** DOMINICAN REPUBLIC */
    WDECCountryDO,
    /** ALGERIA */
    WDECCountryDZ,
    /** ECUADOR */
    WDECCountryEC,
    /** ESTONIA */
    WDECCountryEE,
    /** EGYPT */
    WDECCountryEG,
    /** WESTERN SAHARA */
    WDECCountryEH,
    /** ERITREA */
    WDECCountryER,
    /** SPAIN */
    WDECCountryES,
    /** ETHIOPIA */
    WDECCountryET,
    /** FINLAND */
    WDECCountryFI,
    /** FIJI */
    WDECCountryFJ,
    /** FALKLAND ISLANDS (MALVINAS) */
    WDECCountryFK,
    /** MICRONESIA, FEDERATED STATES OF */
    WDECCountryFM,
    /** FAROE ISLANDS */
    WDECCountryFO,
    /** FRANCE */
    WDECCountryFR,
    /** GABON */
    WDECCountryGA,
    /** UNITED KINGDOM */
    WDECCountryGB,
    /** GRENADA */
    WDECCountryGD,
    /** GEORGIA */
    WDECCountryGE,
    /** FRENCH GUIANA */
    WDECCountryGF,
    /** GUERNSEY */
    WDECCountryGG,
    /** GHANA */
    WDECCountryGH,
    /** GIBRALTAR */
    WDECCountryGI,
    /** GREENLAND */
    WDECCountryGL,
    /** GAMBIA */
    WDECCountryGM,
    /** GUINEA */
    WDECCountryGN,
    /** GUADELOUPE */
    WDECCountryGP,
    /** EQUATORIAL GUINEA */
    WDECCountryGQ,
    /** GREECE */
    WDECCountryGR,
    /** SOUTH GEORGIA AND THE SOUTH SANDWICH ISLANDS */
    WDECCountryGS,
    /** GUATEMALA */
    WDECCountryGT,
    /** GUAM */
    WDECCountryGU,
    /** GUINEA-BISSAU */
    WDECCountryGW,
    /** GUYANA */
    WDECCountryGY,
    /** HONG KONG */
    WDECCountryHK,
    /** HEARD ISLAND AND MCDONALD ISLANDS */
    WDECCountryHM,
    /** HONDURAS */
    WDECCountryHN,
    /** CROATIA */
    WDECCountryHR,
    /** VATICAN CITY STATE */
    WDECCountryHS,
    /** HAITI */
    WDECCountryHT,
    /** HUNGARY */
    WDECCountryHU,
    /** INDONESIA */
    WDECCountryID,
    /** IRELAND */
    WDECCountryIE,
    /** ISRAEL */
    WDECCountryIL,
    /** ISLE OF MAN */
    WDECCountryIM,
    /** INDIA */
    WDECCountryIN,
    /** BRITISH INDIAN OCEAN TERRITORY */
    WDECCountryIO,
    /** IRAQ */
    WDECCountryIQ,
    /** IRAN, ISLAMIC REPUBLIC OF */
    WDECCountryIR,
    /** ICELAND */
    WDECCountryIS,
    /** ITALY */
    WDECCountryIT,
    /** JERSEY */
    WDECCountryJE,
    /** JAMAICA */
    WDECCountryJM,
    /** JORDAN */
    WDECCountryJO,
    /** JAPAN */
    WDECCountryJP,
    /** KENYA */
    WDECCountryKE,
    /** KYRGYZSTAN */
    WDECCountryKG,
    /** CAMBODIA */
    WDECCountryKH,
    /** KIRIBATI */
    WDECCountryKI,
    /** COMOROS */
    WDECCountryKM,
    /** SAINT KITTS AND NEVIS */
    WDECCountryKN,
    /** KOREA, DEMOCRATIC PEOPLE'S REPUBLIC OF */
    WDECCountryKP,
    /** KOREA, REPUBLIC OF */
    WDECCountryKR,
    /** KUWAIT */
    WDECCountryKW,
    /** CAYMAN ISLANDS */
    WDECCountryKY,
    /** KAZAKHSTAN */
    WDECCountryKZ,
    /** LAO PEOPLE'S DEMOCRATIC REPUBLIC */
    WDECCountryLA,
    /** LEBANON */
    WDECCountryLB,
    /** SAINT LUCIA */
    WDECCountryLC,
    /** LIECHTENSTEIN */
    WDECCountryLI,
    /** SRI LANKA */
    WDECCountryLK,
    /** LIBERIA */
    WDECCountryLR,
    /** LESOTHO */
    WDECCountryLS,
    /** LITHUANIA */
    WDECCountryLT,
    /** LUXEMBOURG */
    WDECCountryLU,
    /** LATVIA */
    WDECCountryLV,
    /** LIBYAN ARAB JAMAHIRIYA */
    WDECCountryLY,
    /** MOROCCO */
    WDECCountryMA,
    /** MONACO */
    WDECCountryMC,
    /** MOLDOVA, REPUBLIC OF */
    WDECCountryMD,
    /** MONTENEGRO */
    WDECCountryME,
    /** SAINT MARTIN */
    WDECCountryMF,
    /** MADAGASCAR */
    WDECCountryMG,
    /** MARSHALL ISLANDS */
    WDECCountryMH,
    /** MACEDONIA, THE FORMER YUGOSLAV REPUBLIC OF */
    WDECCountryMK,
    /** MALI */
    WDECCountryML,
    /** MYANMAR */
    WDECCountryMM,
    /** MONGOLIA */
    WDECCountryMN,
    /** MACAO */
    WDECCountryMO,
    /** NORTHERN MARIANA ISLANDS */
    WDECCountryMP,
    /** MARTINIQUE */
    WDECCountryMQ,
    /** MAURITANIA */
    WDECCountryMR,
    /** MONTSERRAT */
    WDECCountryMS,
    /** MALTA */
    WDECCountryMT,
    /** MAURITIUS */
    WDECCountryMU,
    /** MALDIVES */
    WDECCountryMV,
    /** MALAWI */
    WDECCountryMW,
    /** MEXICO */
    WDECCountryMX,
    /** MALAYSIA */
    WDECCountryMY,
    /** MOZAMBIQUE */
    WDECCountryMZ,
    /** NAMIBIA */
    WDECCountryNA,
    /** NEW CALEDONIA */
    WDECCountryNC,
    /** NIGER */
    WDECCountryNE,
    /** NORFOLK ISLAND */
    WDECCountryNF,
    /** NIGERIA */
    WDECCountryNG,
    /** NICARAGUA */
    WDECCountryNI,
    /** NETHERLANDS */
    WDECCountryNL,
    /** NORWAY */
    WDECCountryNO,
    /** NEPAL */
    WDECCountryNP,
    /** NAURU */
    WDECCountryNR,
    /** NIUE */
    WDECCountryNU,
    /** NEW ZEALAND */
    WDECCountryNZ,
    /** OMAN */
    WDECCountryOM,
    /** PANAMA */
    WDECCountryPA,
    /** PERU */
    WDECCountryPE,
    /** FRENCH POLYNESIA */
    WDECCountryPF,
    /** PAPUA NEW GUINEA */
    WDECCountryPG,
    /** PHILIPPINES */
    WDECCountryPH,
    /** PAKISTAN */
    WDECCountryPK,
    /** POLAND */
    WDECCountryPL,
    /** SAINT PIERRE AND MIQUELON */
    WDECCountryPM,
    /** PITCAIRN */
    WDECCountryPN,
    /** PUERTO RICO */
    WDECCountryPR,
    /** PALESTINIAN TERRITORY, OCCUPIED */
    WDECCountryPS,
    /** PORTUGAL */
    WDECCountryPT,
    /** PALAU */
    WDECCountryPW,
    /** PARAGUAY */
    WDECCountryPY,
    /** QATAR */
    WDECCountryQA,
    /** Réunion */
    WDECCountryRE,
    /** ROMANIA */
    WDECCountryRO,
    /** SERBIA */
    WDECCountryRS,
    /** RUSSIAN FEDERATION */
    WDECCountryRU,
    /** RWANDA */
    WDECCountryRW,
    /** SAUDI ARABIA */
    WDECCountrySA,
    /** SOLOMON ISLANDS */
    WDECCountrySB,
    /** SEYCHELLES */
    WDECCountrySC,
    /** SUDAN */
    WDECCountrySD,
    /** SWEDEN */
    WDECCountrySE,
    /** SINGAPORE */
    WDECCountrySG,
    /** SAINT HELENA, ASCENSION AND TRISTAN DA CUNHA */
    WDECCountrySH,
    /** SLOVENIA */
    WDECCountrySI,
    /** SVALBARD AND JAN MAYEN */
    WDECCountrySJ,
    /** SLOVAKIA */
    WDECCountrySK,
    /** SIERRA LEONE */
    WDECCountrySL,
    /** SAN MARINO */
    WDECCountrySM,
    /** SENEGAL */
    WDECCountrySN,
    /** SOMALIA */
    WDECCountrySO,
    /** SURINAME */
    WDECCountrySR,
    /** SOUTH SUDAN */
    WDECCountrySS,
    /** SAO TOME AND PRINCIPE */
    WDECCountryST,
    /** EL SALVADOR */
    WDECCountrySV,
    /** SINT MAARTEN (DUTCH PART) */
    WDECCountrySX,
    /** SYRIAN ARAB REPUBLIC */
    WDECCountrySY,
    /** SWAZILAND */
    WDECCountrySZ,
    /** TURKS AND CAICOS ISLANDS */
    WDECCountryTC,
    /** CHAD */
    WDECCountryTD,
    /** FRENCH SOUTHERN TERRITORIES */
    WDECCountryTF,
    /** TOGO */
    WDECCountryTG,
    /** THAILAND */
    WDECCountryTH,
    /** TAJIKISTAN */
    WDECCountryTJ,
    /** TOKELAU */
    WDECCountryTK,
    /** TIMOR-LESTE */
    WDECCountryTL,
    /** TURKMENISTAN */
    WDECCountryTM,
    /** TUNISIA */
    WDECCountryTN,
    /** TONGA */
    WDECCountryTO,
    /** TURKEY */
    WDECCountryTR,
    /** TRINIDAD AND TOBAGO */
    WDECCountryTT,
    /** TUVALU */
    WDECCountryTV,
    /** TAIWAN, PROVINCE OF CHINA */
    WDECCountryTW,
    /** TANZANIA, UNITED REPUBLIC OF */
    WDECCountryTZ,
    /** UKRAINE */
    WDECCountryUA,
    /** UGANDA */
    WDECCountryUG,
    /** UNITED STATES MINOR OUTLYING ISLANDS */
    WDECCountryUM,
    /** UNITED STATES */
    WDECCountryUS,
    /** URUGUAY */
    WDECCountryUY,
    /** UZBEKISTAN */
    WDECCountryUZ,
    /** HOLY SEE (VATICAN CITY STATE) */
    WDECCountryVA,
    /** SAINT VINCENT AND THE GRENADINES */
    WDECCountryVC,
    /** VENEZUELA, BOLIVARIAN REPUBLIC OF */
    WDECCountryVE,
    /** VIRGIN ISLANDS, BRITISH */
    WDECCountryVG,
    /** VIRGIN ISLANDS, U.S. */
    WDECCountryVI,
    /** VIET NAM */
    WDECCountryVN,
    /** VANUATU */
    WDECCountryVU,
    /** WALLIS AND FUTUNA */
    WDECCountryWF,
    /** SAMOA */
    WDECCountryWS,
    /** NULL */
    WDECCountryXX,
    /** YEMEN */
    WDECCountryYE,
    /** MAYOTTE */
    WDECCountryYT,
    /** SOUTH AFRICA */
    WDECCountryZA,
    /** ZAMBIA */
    WDECCountryZM,
    /** ZIMBABWE */
    WDECCountryZW,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    WDECCountryTotalNumber
};
NSString *WDECCountryGetISOCode(WDECCountry country);
WDECCountry WDECCountryFromISOCode(NSString *code);

/** @} */

//
//  BDHeaders.h
//  BDEnhanced
//
//  Created by Andrew Butt on 2019-03-05.
//  Copyright © 2019 Root Four Imagination. All rights reserved.
//
#ifndef BDEHeaders_h
#define BDEHeaders_h

#define BMW_XML_FILE @"bmw-modules"

#define DTC_KEY @"dtcsDict"
#define DTC_J2012_KEY @"dtcJ2012EncodedDict"
#define DTC_BIT_KEY @"dtcBitEncodedDitct"
#define NO_DATA @"NO DATA"
#define CALL_UP @"CallUp"
#define TP_ADDRESS @"TP2"
#define VAG_CODE_STORE @"VAG_CODE_STORE"
#define SUBARU_CODE_STORE @"SUBARU_CODE_STORE"

#define IS_FW_OLD_STYLE ![BDEData sharedData].useNewCommandSet

#define LM_MULTI_RESPONSE_OFF IS_FW_OLD_STYLE ? @"ATX0" : @"LMX0"
#define LM_MULTI_RESPONSE_ON IS_FW_OLD_STYLE ? @"ATX1" : @"LMX1"

#define LM_ECHO_OFF IS_FW_OLD_STYLE ? @"ATE0" : @"LME0"
#define LM_ECHO_ON IS_FW_OLD_STYLE ? @"ATE1" : @"LME1"

#define LM_RESPONSE_BYES_OFF IS_FW_OLD_STYLE ? @"ATRP0" : @"LMRP0"
#define LM_RESPONSE_BYTES_ON IS_FW_OLD_STYLE ? @"ATRP1" : @"LMRP1"

#define LM_HEADERS_OFF IS_FW_OLD_STYLE ? @"ATH0" : @"LMH0"
#define LM_HEADERS_ON IS_FW_OLD_STYLE ? @"ATH1" : @"LMH1"

#define LM_LINE_FEED_OFF IS_FW_OLD_STYLE ? @"ATL0" : @"LML0"
#define LM_LINE_FEED_ON IS_FW_OLD_STYLE ? @"ATL1" : @"LML1"

#define LM_KLINE_BAUD_RATE_OFF IS_FW_OLD_STYLE ? @"ATIF0" : @"LMIF0"
#define LM_KLINE_BAUD_RATE_ON IS_FW_OLD_STYLE ? @"ATIF1" : @"LMIF1"

#define LM_BMW_KWP18_BAUD_10400 @"LMIF0"
#define LM_BMW_BAUD_9600 @"LMIF3"
#define LM_IF @"LMIF"

#define LM_SET_RAW_CAN_ON @"LMCR1"
#define LM_SET_RAW_CAN_OFF @"LMCR0"

#define LM_CAN_MASK_PREFIX IS_FW_OLD_STYLE ? @"ATCM" : @"LMCM"

#define LM_DIAGNOSTIC_PROTOCOL IS_FW_OLD_STYLE ? @"ATDP" : @"LMDP"

#define LM_CLEAR_DTC IS_FW_OLD_STYLE ? @"ATCC" : @"LMCC"
#define LM_GET_DTC_CONFIRMED IS_FW_OLD_STYLE ? @"ATTC" : @"LMTC"
#define LM_GET_DTC_PENDING IS_FW_OLD_STYLE ? @"ATTCP" : @"LMTCP"
#define LM_GET_DTC_PERM IS_FW_OLD_STYLE ? @"ATTCA" : @"LMTCA"

#define LM_RESTORE_DEFAULTS IS_FW_OLD_STYLE ? @"ATD" : @"LMD"

#define LM_GET_OSAPI_ID IS_FW_OLD_STYLE ? @"ATI" : @"LMI"

#define LM_GET_VIN IS_FW_OLD_STYLE ? @"ATV" : @"LMV"

#define LM_SET_PROTOCOL IS_FW_OLD_STYLE ? @"ATSP" : @"LMSP"
#define LM_SET_PROTOCOL_PWM  IS_FW_OLD_STYLE ? @"ATSP1" : @"LMSP1"
#define LM_SET_PROTOCOL_VPW  IS_FW_OLD_STYLE ? @"ATSP2" : @"LMSP2"
#define LM_SET_PROTOCOL_9141 IS_FW_OLD_STYLE ? @"ATSP3" : @"LMSP3"
#define LM_SET_PROTOCOL_14230_SLOW  IS_FW_OLD_STYLE ? @"ATSP4" : @"LMSP4"
#define LM_SET_PROTOCOL_14230_FAST  IS_FW_OLD_STYLE ? @"ATSP5" : @"LMSP5"
#define LM_SET_PROTOCOL_CAN_11_500  IS_FW_OLD_STYLE ? @"ATSP6" : @"LMSP6"
#define LM_SET_PROTOCOL_CAN_29_500  IS_FW_OLD_STYLE ? @"ATSP7" : @"LMSP7"
#define LM_SET_PROTOCOL_CAN_11_250  IS_FW_OLD_STYLE ? @"ATSP8" : @"LMSP8"
#define LM_SET_PROTOCOL_CAN_29_250  IS_FW_OLD_STYLE ? @"ATSP9" : @"LMSP9"
#define LM_SET_PROTOCOL_CAN_B @"LMSP<"
#define LM_SET_PROTOCOL_GM_LAN @"LMSP:"
#define LM_SET_PROTOCOL_HONDA_DIAGH @"LMSP;"
#define LM_SET_PROTOCOL_FORD_HS_CAN @"LMSM3B"
#define LM_SET_PROTOCOL_FORD_MS_CAN @"LMSP="
#define LM_SET_HEADER IS_FW_OLD_STYLE ? @"ATSH" : @"LMSH"
#define LM_SET_CAN_FILTER IS_FW_OLD_STYLE ? @"ATCF" : @"LMCF"
#define LM_RESET_PINS_TO_CAN @"LMSM6E"
#define LM_SET_CAN_DLC_BYPASS @"LMCD1"
#define LM_SET_KLINE_TIMING @"LMP1"
#define LM_SET_KLINE_WITH_LENGTH_BYTE IS_FW_OLD_STYLE ? @"ATIFP" : @"LMIFP"
#define LM_SKIP_CHECKSUM_ON @"LMSC1"
#define LM_SKIP_CHECKSUM_OFF @"LMSC0"
#define LM_SET_PINS @"LMSM"
#define LM_DIAGH_CONFIG @"LMIF5"

#define LM_SET_HEADER IS_FW_OLD_STYLE ? @"ATSH" : @"LMSH"
#define LM_SET_CAN_FILTER IS_FW_OLD_STYLE ? @"ATCF" : @"LMCF"
#define LM_SET_KLINE_BAUD_4800 @"LMKB12C0"
#define LM_SET_KLINE_BAUD_10400 @"LMKB28A0"

#define EXTENDED_CAN_READ_CODES @"0113"
#define EXTENDED_CAN_CLEAR_CODES @"0114"
#define EXTENDED_CAN_HEADER @"750"
#define EXTENDED_CAN_FILTER @"758"


#define LM_KR1 @"LMKR1"
#define LM_SO10 @"LMSO10"
#define LM_SO11 @"LMSO11"
// (Reset K-Line Baud: 0x28A0 = 10400)
#define LM_RESET_KLINE_BAUD @"LMKB28A0"

#define BASE_SENSOR_VERSION @"4.01"

#define UNKNOWN_BUS 0
#define CAN_BUS     1
#define PWM_BUS     2
#define VPW_BUS     3
#define ISO_BUS     4
#define CAN_11_500  6
#define CAN_29_500  7
#define CAN_11_250  8
#define CAN_29_250  9
#define CAN_B       10
#define CAN_CH_IHS_29       11
#define HYUNDAI_MUT 12
#define GM_LAN 58
#define HONDA_DIAGH_NUM 59
#define GM_CAN_ON_VPW  95
#define ISO_MBISO      96
#define NISSAN_CAN_ON_KLINE 97
#define CAN_KWP_VAG 98
#define ISO_BUS_BMW_ALTERNATE    99


//ISO and KWP
#define MODULE_UNKNOWN      0
#define MODULE_ABS          1
#define MODULE_AIRBAG       2
#define MODULE_TRANSMISSION 3

#define RESPONSE_PIN_COMMAND @"RESPONSE_PIN_COMMAND"
#define GM_LAN_FLAG @"*GM_LAN"
#define HS_CAN_FLAG @"*HSCAN"
#define MS_CAN_FLAG @"*MSCAN"
#define EXTENDED_CAN_FLAG @"*HSCAN"
#define HONDA_DIAGH_FLAG @"*HONDA_DIAGH"
#define EXTENDED_CAN_EXTRA @"isExtCAN"
#define DIAGH_CAN_EXTRA @"isDIAGH"
#define DIAGH_ONLY @"isDIAGHOnly"
#define READ_ON_DIAGH @"wasReadOnDiagH"
#define PROTOCOL_TYPE @"PROTOCOL"
#define MB_VARIANTS @"MBVARIANTS"
#define MB_DIAG_KEYS @"MBDIAGKEYS"

#define DUMMY_YEAR 1337
#define XML_ENGINE_KEY @"Engine Type"
#define XML_MAKE_KEY @"Make"
#define XML_MODEL_KEY @"Model"
#define XML_YEAR_KEY @"Model Year"
#define XML_SERIES_KEY @"Series"
#define LOADING_VEHICLE_MESSAGE @"Loading Vehicle Info..."
#define NO_DESCRIPTION_AVAILABLE @"No description available"



#define NOTIFICATION_CONFIG_STARTED @"eviceConfigStarted"
#define NOTIFICATION_CONFIG_COMPLETE @"ConfigComplete"
#define NOTIFICATION_DEVICE_CONNECTED @"DeviceConnected"
#define NOTIFICATION_DEVICE_DISCONNECTED @"DeviceDisconnected"
#define NOTIFICATION_DEVICE_TIMEDOUT @"DeviceTimedOut"
#define NOTIFICATION_CONFIG_FAILED @"ConfigFailed"

#define NOTIFICATION_UI_UPDATE_DEVICE_DISCONNECT @"DeviceDisconnectedUIUpdate"
#define NOTIFICATION_UI_UPDATE_CONFIG_COMPLETE @"ConfigCompleteUIUpdate"

#define NOTIFICATION_ALL_LOGGERS_REMOVED @"VHCLoggersRemoved"
#define strFormat(__FORMAT__,...) [NSString stringWithFormat:__FORMAT__,__VA_ARGS__]

typedef NS_ENUM(NSInteger,EnhancedProtocolManufacturer){
    EnhancedProtocolManufacturerUnknown  =0,
    EnhancedProtocolManufacturerGm       =1,
    EnhancedProtocolManufacturerChrysler =2,
    EnhancedProtocolManufacturerFord     =3,
    EnhancedProtocolManufacturerToyota   =4,
    EnhancedProtocolManufacturerBmw      =5,
    EnhancedProtocolManufacturerNissan   =6,
    EnhancedProtocolManufacturerHonda    =7,
    EnhancedProtocolManufacturerVag      =8,
    EnhancedProtocolManufacturerMercedes =9,
    EnhancedProtocolManufacturerHyundai  =10,
    EnhancedProtocolManufacturerMazda    =11,
    EnhancedProtocolManufacturerMitsubishi=12,
    EnhancedProtocolManufacturerSubaru=13
};


typedef NS_ENUM(NSInteger, ResponseState) {
    ResponseStateUnknown = 0,
    ResponseStateNoData = 1,
    ResponseStateHasNakData = 2,
    ResponseStateHasData = 3
};

typedef NS_ENUM(NSInteger, EnhancedScanType){
    EnhancedScanTypeOBD,
    EnhancedScanTypeFull,
    EnhancedScanTypeQuick
};
typedef int RequestType;
#define REQUEST_NORMAL 1
#define REQUEST_TOWN_COUNTRY_ABS 2
#define REQUEST_HONDA_92 3


@protocol BDEModuleDataInterface
@property (nonatomic, retain) NSString *accronym;
@property (nonatomic, retain) NSString *moduleDescription;

@property (nonatomic, retain) NSString *requestId;
@property (nonatomic, retain) NSString *responseId;
@property (nonatomic, retain) NSString *busType;
@property (nonatomic) ResponseState responseState;

@end
#endif /* BDEHeaders_h */

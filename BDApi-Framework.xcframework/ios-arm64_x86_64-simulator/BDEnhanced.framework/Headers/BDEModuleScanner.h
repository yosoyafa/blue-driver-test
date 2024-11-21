//
//  BDABS.h
//  BlueDriver
//
//  Created by Maurice Tuff on 7/26/12.
//  Copyright (c) 2012 Root Four Imagination Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BDEModuleData.h"

#import "BDEVagTroubleCodeStore.h"
#import "OrderedDictionary.h"
#import "BDEEnhancedScanner.h"
#define CHRYSLER_DECODE_METHOD_NONE 0
#define CHRYSLER_DECODE_METHOD_OLD 1
#define CHRYSLER_DECODE_METHOD_NEW 2

typedef enum {
    ScanTypeClear,
    ScanTypeRead
} ScanType;

@interface BDEModuleScanner : NSObject <NSXMLParserDelegate>
{
    NSInteger m_vehicleManufacturer;
    NSInteger m_modelYear;
    NSInteger m_chryslerDecodeMethod;
    NSInteger m_activeBus;
    BOOL m_multiRespIsOn;
    BOOL m_headerDispIsOn;
    BOOL m_customCanMaskSet;
    BOOL m_delayTransmission;
    NSInteger m_currentHighPIN;
    NSInteger m_currentLowPIN;
    BOOL m_performAllMercedesModules;
    BOOL m_responseBytesOn;
    NSMutableArray* m_codeArray;
    NSMutableArray* m_definitionArray;
    NSMutableArray* m_statusArray;

    RequestType m_requestType;

    BDEModuleData* m_currentModule;
    NSInteger m_originalBus;

    OrderedDictionary* m_infoKeyedByBus;

    BDEVagGlobalTroubleCodeStore *m_vagGlobalCodeStore;

    BOOL m_rawCanOn;
}


-(BOOL) setupScan:(EnhancedScanType)scanType;
-(BOOL) scanModule:(BDEModuleData*) module onBus:(NSInteger) bus;
-(BOOL) prepareForClear;
-(BOOL) clearModule:(BDEModuleData*)module onBus:(NSInteger) bus;
-(void) resetTransmissionDelay;

-(void) setActiveBus:(NSInteger) activeBus;
-(NSInteger) getActiveBus;

-(void) setHighPin: (NSInteger) pin;
-(NSInteger) getHighPin;
-(void) setLowPin: (NSInteger) pin;
-(NSInteger) getLowPin;
-(void) setPerformMercedesFullKlineMethod: (BOOL) shouldPerform;

@property  (readonly) RequestType requestType;
@property  (readonly) NSArray* codeArray;
@property  (readonly) NSArray* statusArray;
@property  (readonly) NSArray* definitionArray;
@property  (readonly) OrderedDictionary* moduleDictionary;
-(void) exitScanMode;

@end

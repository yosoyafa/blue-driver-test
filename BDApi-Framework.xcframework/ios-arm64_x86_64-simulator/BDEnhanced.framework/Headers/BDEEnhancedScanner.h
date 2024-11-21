//
//  NSObject+BDEnhancedScanner.h
//  BlueDriver
//
//  Created by Alex Walsh on 2018-09-21.
//  Copyright © 2018 Root Four Imagination Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BDEModuleData.h"
#import "OrderedDictionary.h"

@protocol BDEEnhancedScannerDelegate <NSObject>
//-(void) scanCompletedWithResults:(NSArray<BDEModuleData*>*) results;
-(void) scannedModule:(BDEModuleData*) scannedModule;
-(void) interactionRequired:(NSString*)msg;
@end


@interface BDEnhancedScanner : NSObject


-(void)startBasicObdScan:(BOOL)scanPermCodes;

-(NSInteger) loadScan:(EnhancedScanType)scanType;

-(void) startScan:(EnhancedScanType)scanType;

-(void) interactionComplete;

#pragma mark Scan
//-(void) performEnhancedScanForManufacturer:(EnhancedProtocolManufacturer) manufacturer
//                               withScanner:(BDEModuleScanner*) moduleScanner
//                                 andCaller:(id <BDEEnhancedScannerDelegate>) caller;

#pragma mark Utils
+(int) countModulesForScan:(OrderedDictionary *) modulesByBusType;
+(BOOL) isManufacturer:(EnhancedProtocolManufacturer) manufacturer;
+(BOOL) doesEnhancedScannerSupportCurrentManufacturer;

#pragma mark Delegate
@property (nonatomic, weak) id <BDEEnhancedScannerDelegate> delegate;
@property BOOL scanErrorDuringScan;
@property BOOL useSeperateEmissionsModules; //Set to true to use classic BD Style of 3 modules
@end

//
//  BDEPitCrew.h
//  BDEnhanced
//
//  Created by Andrew Butt on 2019-04-23.
//  Copyright © 2019 Root Four Imagination. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BDEProtocols.h"
NS_ASSUME_NONNULL_BEGIN
@interface BDEPitCrew : NSObject

//Register ModuleStatusManager
-(void) registerModuleStatusManager:(id<ModuleStatusManagerProtocol>)statusManager;

//Register indicatorAdatper (BDEModal)
-(void)registerModalAdapter:(id<BDEIndicatorAdapter>) adapter;

//BD Vehicle type interfaces
-(void) registerVehicleCommuications:(id<BDVehicleCommunicationProtocol>) comms;
-(void) registerVehicleSensorStateTracker:(id<BDSensorStateTracker>) stateTracker;
-(void)registerVehicleStateInfoAdapter:(id<BDVehicleStateInfo>) adapter;
-(void) registerVehicleSensorTimeoutAdapter:(id<BDSensorTimeoutAdapter>) timeoutAdapter;


//BD Data typoe interfaces
-(void)registerBDDataAdapter:(id<BDDataAdapter>) adapter;
-(void)registerSessionAdapter:(id<BDESessionProtocol>) adapter;
-(void)registerVinAdapter:(id<BDVINDataAdapter>) adapter;

-(void)registerLoggingAdapter:(id<LoggerInterface>) adapter;



@end

NS_ASSUME_NONNULL_END

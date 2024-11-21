//
//  BDEProtocols.h
//  Pods
//
//  Created by Andrew Butt on 2021-08-03.
//

#ifndef BDEProtocols_h
#define BDEProtocols_h

#import "BDEHeaders.h"



@protocol ModuleStatusManagerProtocol
-(void)setResponseState:(ResponseState)responseState forKey:(NSString*)moduleAddress forVin:(NSString*)vin;
-(ResponseState) responseStateForModuleKey:(NSString*)moduleAddress forVin:(NSString*)vin;
@end

typedef void(^ModalCompletionBlock)(void);
@protocol BDEIndicatorAdapter
-(void) showWithTitle:(NSString*)title andMessage:(NSString*)message completionBlock:(ModalCompletionBlock)completionBlock;
@end

@protocol BDVehicleCommunicationProtocol
-(BOOL)sendSetupCommandToBlueDriver:cmd;
-(NSString*)sendCommandToBlueDriver:(NSString*)cmd;
-(BOOL)sendSetupCommandToBlueDriver:(NSString*)cmd ignoreTimeout:(BOOL)ignore;
@end

@protocol BDSensorStateTracker
-(NSInteger) activeHighPin;
-(NSInteger) activeLowPin;
-(NSString*) activeProtocolString;
@end


@protocol BDVehicleStateInfo

-(NSInteger) modelYear;
-(EnhancedProtocolManufacturer) vehicleDataManufacturer;
-(NSString*) obd2ProtocolString;
-(NSString*) vin;
@end

@protocol BDSensorTimeoutAdapter
-(void) setMaxWaitTimeForSensorResponse:(double) timeInMilliseconds;
-(void) resetSesorResponseTime;
@end

@protocol BDDataAdapter

- (void) setEnhancedProtocol:(NSString *)protocol;
- (NSString*) EnhancedProtocol;
- (NSString*) VIN;

- (void)setVehicleParentMan:(NSString *)man;
- (NSString*) vehicleParentMan;
- (NSInteger) sensorVersionNumber;
- (NSInteger) obd2Protocol;
- (BOOL) useNewCommandSet;
- (NSString*) customVehicleMan;
@end

//Adapts things from VHCs session concept
@protocol BDESessionProtocol
-(NSString*) activeVin;

-(EnhancedProtocolManufacturer) activeProtocol;
@end


//Adapts methods form BDVIN
@protocol BDVINDataAdapter
-(NSString*) manufacturerNameFromVin:(NSString*)vin;
@end

@protocol LoggerInterface
-(void)logVerbose:(NSString *)s;
-(void)logDebug:(NSString *)s;
-(void)logInfo:(NSString *)s;
-(void)logWarning:(NSString *)s;
-(void)logError:(NSString *)s;
@end
#endif /* BDEProtocols_h */

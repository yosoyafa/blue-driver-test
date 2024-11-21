//
//  Header.h
//  BlueDriver
//
//  Created by Andrew Butt on 2018-02-01.
//  Copyright © 2018 Root Four Imagination Inc. All rights reserved.
//
#define VIPartConfig 0
#define VIPartMaintenance 1
#define VIPartRecalls 2
#define VIPartBulletins 3

/**
 An enum representing the different types of XMLs  that can be requested 
 */
typedef NS_ENUM(NSInteger, BDVehicleXmlType) {
    ///Vehicle Info XML
//    BDVehicleXmlTypeInfo = 0,
//    ///Vehicle Maintenance XML
//    BDVehicleXmlTypeMaintenance,
    ///Vehicle Recall XML
    BDVehicleXmlTypeRecall,
    ///Vehicle Service XML
    BDVehicleXmlTypeService,
    ///Unknown Vehicle XML Type
    BDVehicleXmlTypeUnknown,
};

@protocol BDDownloadReceiver
-(void) downloadComplete:(NSString*) stringResult;
-(void) downloadFailed:(NSError*)error;
@end

//
//  BDVehicleInfoXmlDownloader.h
//  BlueDriver
//
//  Created by Andrew Butt on 2018-02-01.
//  Copyright © 2018 Root Four Imagination Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BDXmlInfo.h"

@interface BDVehicleInfoXmlDownloader : NSObject
+(NSURL*)urlForVehicleInfoXmlWithVin:(NSString*)vin andCountryCode:(NSString*)countryCode;
+(NSURL*)urlForXmlType:(BDVehicleXmlType)type withVin:(NSString*) vin withYear:(NSString*)year withMake:(NSString*)make withModel:(NSString*)model withEngine:(NSString*) engine withSeries:(NSString*) series andCountryCode:(NSString*)countryCode;
@end

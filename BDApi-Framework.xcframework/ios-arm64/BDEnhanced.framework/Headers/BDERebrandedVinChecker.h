//
//  BDERebrandedVinChecker.h
//  BDEnhanced
//
//  Created by Andrew Butt on 2019-07-22.
//

#import "BDEHeaders.h"

@interface BDERebrandedVinChecker : NSObject
-(instancetype)initWithFilename:(NSString*)filename;
-(EnhancedProtocolManufacturer) checkVinForMake:(NSString*)vin;

@property BOOL matched;
@end

@interface BDERebrandedVinXmlParser : NSObject <NSXMLParserDelegate>
- (instancetype)initWithVin:(NSString*) vin;
@property EnhancedProtocolManufacturer manufacturer;
@property BOOL matched;
@end


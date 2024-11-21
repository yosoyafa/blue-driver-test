//
//  BDTroubleCode.h
//  BlueDriver
//
//  Created by Maurice Tuff on 3/25/11.
//  Copyright 2011 Root Four Imagination Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BDEHeaders.h"
@interface BDETroubleCodes : NSObject <NSXMLParserDelegate>{
	NSString* m_currentElement;
    NSString* m_currentCode;
    NSMutableDictionary *m_manfacturerDictionary;
}
+ (BDETroubleCodes *)TheCodes;
-(NSString*)bmwTroubleCodeDef:(NSString*)dtc withKey:(NSString*) key withVin:(NSString*)vin;
-(NSString*)troubleCodeDef:(NSString*)dtc withEnhancedManufacturer:(EnhancedProtocolManufacturer)man;
-(BOOL)loadCustomDefinitions:(NSString*)parentMan;
-(BOOL)loadCustomBMWDefinitions:(NSString *)vin;
@end

@interface CustomTroubleCodeParser : NSObject <NSXMLParserDelegate> {
    NSString* parentMan; //The requested parent
    
    NSString* currentParent; //The current tag
    NSMutableDictionary *m_codeDictionary;
    
    NSString* troubleCode;
    NSString* tcDescription;
    
    BOOL foundParentTag;
    BOOL foundTCTag;
    BOOL foundCodeTag;
    BOOL foundDescriptionTag;
    
    double startTime;
}
- (id)initWithParentMan:(NSString*)man andDictionary:(NSMutableDictionary*)dict;
-(BOOL)parseDocumentWithFile:(NSData *)file;
@end

//
//  BDEVagTroubleCodeStore.h
//  BlueDriver
//
//  Created by Andrew Butt on 2017-12-19.
//  Copyright © 2017 Root Four Imagination Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BDEVagTroubleCodeStore : NSObject
-(void)addDfcc:(NSString*) dfcc withJ2012:(NSString*)j2012 andDefinition:(NSString*)definition;
-(NSString*)getJ2012ForDfcc:(NSString*)dfcc;
-(NSString*)getDfccForJ2012:(NSString*)j2012;
-(NSString*)getDefinitionForDfcc:(NSString*)dfcc;
-(NSString*)getDefinitionForJ20120:(NSString*)j2012;
@end

@interface BDEVagGlobalTroubleCodeStore : BDEVagTroubleCodeStore

@end

@interface VagTroubleCodeParser : NSObject <NSXMLParserDelegate>

- (instancetype)initWithVagStore:(BDEVagTroubleCodeStore*) store;
-(BOOL)parseDocumentWithFile:(NSData *)file;
@end

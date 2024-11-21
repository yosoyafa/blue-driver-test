//
//  EnhancedData.h
//  BlueDriver
//
//  Created by Andrew Butt on 2014-11-24.
//  Copyright (c) 2014 Root Four Imagination Inc. All rights reserved.
//
//@interface BDPID : NSObject <NSCoding, BDDataProvider>



#import "BDEHeaders.h"


@interface BDEModuleData : NSObject <NSCoding, BDEModuleDataInterface> {

}
-(NSString*) requestResponseKey;
@property (readwrite, strong, nonatomic) NSString *accronym;
@property (readwrite, strong, nonatomic) NSString *description;

@property (readwrite, strong, nonatomic) NSString *requestId;
@property (readwrite, strong, nonatomic) NSString *responseId;
@property (readwrite, strong, nonatomic) NSString *busType;

@property (readwrite, strong, nonatomic) NSArray *codeList;
@property (readwrite, strong, nonatomic) NSArray *definitionList;
@property (readwrite, strong, nonatomic) NSArray *statusList;

@property (readwrite, nonatomic) RequestType requestType;
@property (readwrite, nonatomic) NSString *light;
@property (readwrite, nonatomic) NSString *category;
@property (readwrite, nonatomic) BOOL common;

@property (readwrite, strong, nonatomic) NSDictionary *extras;
@property (nonatomic) ResponseState responseState;

@end

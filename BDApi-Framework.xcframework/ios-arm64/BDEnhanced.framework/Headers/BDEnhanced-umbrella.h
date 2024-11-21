#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "BDEProtocols.h"
#import "BDEHeaders.h"
#import "BDEEnhancedScanner.h"
#import "BDERebrandedVinChecker.h"
#import "BDEModuleData.h"
#import "BDETroubleCode.h"
#import "BDEVagTroubleCodeStore.h"
#import "OrderedDictionary.h"
#import "NSData+AES256.h"
#import "BDEPitCrew.h"
#import "NSData+AESEncryption.h"
#import "NSData+Compression.h"
#import "BDVehicleInfoXmlDownloader.h"
#import "BDXmlInfo.h"
#import "BGXpressScanner.h"
#import "BGXDevice.h"
#import "BDEModuleScanner.h"

FOUNDATION_EXPORT double BDEnhancedVersionNumber;
FOUNDATION_EXPORT const unsigned char BDEnhancedVersionString[];


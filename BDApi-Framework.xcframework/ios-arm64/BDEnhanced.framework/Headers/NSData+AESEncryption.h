//
//  NSData+AESEncryption.h
//  BlueDriver
//
//  Created by Andrew Butt on 2020-01-15.
//  Copyright © 2020 Root Four Imagination Inc. All rights reserved.
//

//NS_ASSUME_NONNULL_BEGIN

@interface NSData (AES256Encryption)
- (NSData *)encryptedDataWithHexKey:(NSString*)hexKey hexIV:(NSString *)hexIV;
- (NSData *)originalDataWithHexKey:(NSString*)hexKey hexIV:(NSString *)hexIV;
@end

//NS_ASSUME_NONNULL_END

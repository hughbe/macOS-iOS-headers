//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (AppleMediaServices)
+ (id)_labelForDataProtectionClass:(unsigned long long)arg1;
+ (id)_generateInitializationVectorDataWithError:(id *)arg1;
+ (id)_AESKeyForDataProtectionClass:(unsigned long long)arg1 error:(id *)arg2;
+ (const struct __CFString *)_accessibleAttributeForDataProtectionClass:(unsigned long long)arg1;
+ (id)ams_generateEncryptionKey;
- (CDStruct_0f015c83)ams_encryptDataUsingKey:(id)arg1 error:(id *)arg2;
- (CDStruct_0f015c83)ams_encryptDataUsingDataProtectionClass:(unsigned long long)arg1 error:(id *)arg2;
- (id)ams_decryptUsingKey:(id)arg1 initializationVectorData:(id)arg2 tagData:(id)arg3 error:(id *)arg4;
- (id)ams_decryptUsingDataProtectionClass:(unsigned long long)arg1 initializationVectorData:(id)arg2 tagData:(id)arg3 error:(id *)arg4;
@property(readonly) NSData *ams_SHA1;
@property(readonly) NSString *ams_nvramDescription;
@property(readonly) NSString *ams_hexAddressDescription;
@property(readonly) NSData *ams_decompressedData;
@property(readonly) NSData *ams_compressedData;
@end


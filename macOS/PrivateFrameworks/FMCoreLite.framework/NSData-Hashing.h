//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (Hashing)
- (id)fm_hmac_sha512WithKey:(id)arg1;
- (id)fm_hmac_sha256WithKey:(id)arg1;
- (id)fm_hmac_sha1WithKey:(id)arg1;
- (id)fm_hmac_md5WithKey:(id)arg1;
@property(readonly, copy) NSData *fm_sha512Hash;
@property(readonly, copy) NSData *fm_sha256Hash;
@property(readonly, copy) NSData *fm_sha1Hash;
- (id)hexString;
- (id)fm_MACAddressString;
- (id)fm_hexString;
@end


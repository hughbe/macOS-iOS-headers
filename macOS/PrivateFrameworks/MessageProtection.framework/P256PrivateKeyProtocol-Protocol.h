//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageProtection/NSObject-Protocol.h>

@class NSData;
@protocol P256PublicKeyProtocol;

@protocol P256PrivateKeyProtocol <NSObject>
+ (id)generate;
- (id <P256PublicKeyProtocol>)publicKey;
- (NSData *)keyAgreement:(id <P256PublicKeyProtocol>)arg1 error:(id *)arg2;
- (NSData *)signData:(NSData *)arg1 error:(id *)arg2;
- (NSData *)keychainData;
- (id)initWithData:(NSData *)arg1 error:(id *)arg2;
@end


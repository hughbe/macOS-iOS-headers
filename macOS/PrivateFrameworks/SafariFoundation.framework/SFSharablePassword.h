//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSURL;

@interface SFSharablePassword : NSObject <NSSecureCoding>
{
    NSString *_username;
    NSString *_password;
    NSString *_displayName;
    NSString *_highLevelDomain;
    NSArray *_protectionSpaces;
}

+ (id)_decryptedDataForEncryptedData:(id)arg1 encryptionKeyReference:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)sharablePasswordFromURL:(id)arg1;
+ (id)sharablePasswordFromData:(id)arg1;
+ (id)sharablePasswordFromEncryptedData:(id)arg1 encryptionKeyReference:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *protectionSpaces; // @synthesize protectionSpaces=_protectionSpaces;
@property(readonly, copy, nonatomic) NSString *highLevelDomain; // @synthesize highLevelDomain=_highLevelDomain;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)_encryptionInformationWithNewKey;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)urlRepresentationForAirDrop;
@property(readonly, nonatomic) NSURL *passwordManagerURL;
- (id)initWithUsername:(id)arg1 password:(id)arg2 displayName:(id)arg3 highLevelDomain:(id)arg4 protectionSpaces:(id)arg5;

@end


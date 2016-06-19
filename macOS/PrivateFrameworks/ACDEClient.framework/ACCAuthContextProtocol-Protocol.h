//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACFMessage, ACFPrincipal, NSData, NSDate, NSMutableDictionary, NSNumber, NSString;

@protocol ACCAuthContextProtocol <NSObject>
+ (id <ACCAuthContextProtocol>)authContextWithRequest:(ACFMessage *)arg1;
@property(retain, nonatomic) NSString *twoStepVerificationCode;
@property(retain, nonatomic) NSString *selectedDeviceType;
@property(retain, nonatomic) NSString *selectedDeviceId;
@property(retain, nonatomic) NSNumber *personID;
@property(retain, nonatomic) NSData *initializationVector;
@property(retain, nonatomic) NSData *encryptionKey;
@property(readonly, nonatomic) NSString *tokenSourceString;
@property(readonly, nonatomic) NSMutableDictionary *parametersDictionary;
@property(retain) NSDate *creationDate;
@property(retain) NSString *tokenVersion;
@property(retain) NSString *sessionToken;
@property(retain) NSString *dsKeyVersion;
@property(retain) NSString *appIDKey;
@property(retain) NSString *currentUserKey;
@property(retain) NSString *oldUserKey;
@property(retain) NSString *nonce;
@property(retain) NSString *encryptionHash;
@property(retain) NSNumber *appID;
@property NSNumber *authenticationType;
@property(retain) ACFMessage *request;
@property(retain) ACFPrincipal *principal;

@optional
@property(readonly, nonatomic) NSString *xmlTokenSourceString;
@property(retain, nonatomic) NSNumber *touchIDSupport;
@property(retain, nonatomic) NSNumber *clientSecretCreateDate;
@property(retain, nonatomic) NSString *clientSecretTokenHmac;
@property(retain, nonatomic) NSString *recoveryKey;
@property(retain, nonatomic) NSString *serviceName;
@end


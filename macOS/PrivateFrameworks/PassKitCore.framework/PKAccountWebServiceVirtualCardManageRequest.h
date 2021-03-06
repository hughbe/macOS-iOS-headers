//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceRequest.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString, NSURL, PKAccountVirtualCardEncryptionFields;

@interface PKAccountWebServiceVirtualCardManageRequest : PKAccountWebServiceRequest <NSSecureCoding>
{
    PKAccountVirtualCardEncryptionFields *_encryptionFields;
    long long _action;
    NSString *_accountIdentifier;
    NSURL *_baseURL;
    NSString *_virtualCardIdentifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *virtualCardIdentifier; // @synthesize virtualCardIdentifier=_virtualCardIdentifier;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (void)setAction:(long long)arg1 withQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end


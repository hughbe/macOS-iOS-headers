//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class NSData;

@interface PKPaymentAuthorizationAuthorizeStateParam : PKPaymentAuthorizationStateParam
{
    NSData *_credential;
    NSData *_nonceData;
}

+ (id)paramWithCredential:(id)arg1 nonce:(id)arg2;
@property(retain, nonatomic) NSData *nonceData; // @synthesize nonceData=_nonceData;
@property(retain, nonatomic) NSData *credential; // @synthesize credential=_credential;
- (void).cxx_destruct;
- (id)description;

@end


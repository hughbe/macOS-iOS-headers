//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentSession.h>

@interface PKInAppPaymentSession : PKPaymentSession
{
}

- (id)_appletWithIdentifier:(id)arg1;
- (id)_appletForPaymentApplication:(id)arg1;
- (id)authorizePaymentRequest:(id)arg1 forPaymentApplication:(id)arg2 usingNonce:(id)arg3 withAuthenticationCredential:(id)arg4;
- (id)initWithInternalSession:(id)arg1 targetQueue:(id)arg2;

@end


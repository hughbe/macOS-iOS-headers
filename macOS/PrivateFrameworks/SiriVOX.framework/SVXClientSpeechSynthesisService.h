//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXClientServiceConsuming-Protocol.h>
#import <SiriVOX/SVXClientSpeechSynthesisServicing-Protocol.h>

@class NSString;
@protocol SVXClientServiceProviding, SVXPerforming;

@interface SVXClientSpeechSynthesisService : NSObject <SVXClientServiceConsuming, SVXClientSpeechSynthesisServicing>
{
    id <SVXPerforming> _performer;
    id <SVXClientServiceProviding> _clientServiceProvider;
}

- (void).cxx_destruct;
- (void)stopRequest:(id)arg1;
- (void)cancelPendingRequest:(id)arg1;
- (void)enqueueRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clientServiceDidChange;
- (id)initWithClientServiceProvider:(id)arg1 performer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HMFoundation/HMFLogging-Protocol.h>
#import <HMFoundation/NSSecureCoding-Protocol.h>

@class HMFLogEventSessionVoucher, HMFUnfairLock, NSString, RTCReporting;

@interface HMFLogEventSession : NSObject <HMFLogging, NSSecureCoding>
{
    HMFLogEventSessionVoucher *_voucher;
    unsigned long long _signpostId;
    RTCReporting *_rtcSession;
    HMFUnfairLock *_sessionLock;
    CDUnknownBlockType _finalizeBlock;
}

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType finalizeBlock; // @synthesize finalizeBlock=_finalizeBlock;
@property(readonly, nonatomic) HMFUnfairLock *sessionLock; // @synthesize sessionLock=_sessionLock;
@property(retain, nonatomic) RTCReporting *rtcSession; // @synthesize rtcSession=_rtcSession;
@property(nonatomic) unsigned long long signpostId; // @synthesize signpostId=_signpostId;
@property(readonly, nonatomic) HMFLogEventSessionVoucher *voucher; // @synthesize voucher=_voucher;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)finalizeSession;
- (void)submitEventWithName:(id)arg1 payload:(id)arg2;
- (void)dealloc;
- (id)initWithVoucher:(id)arg1 finalizeBlock:(CDUnknownBlockType)arg2;
- (id)initWithVoucher:(id)arg1 rtcFactory:(id)arg2 finalizeBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


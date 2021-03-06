//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IdleTimerServices/ITIdleTimerStateRequestHandling-Protocol.h>

@class NSMutableSet, NSString;

@interface ITIdleTimerIOKitHandler : NSObject <ITIdleTimerStateRequestHandling>
{
    NSMutableSet *_assertionReasons;
    unsigned int _assertionID;
    struct os_unfair_lock_s _accessLock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int assertionID; // @synthesize assertionID=_assertionID;
- (void)removeIdleTimerConfiguration:(id)arg1 forReason:(id)arg2;
- (void)addIdleTimerConfiguration:(id)arg1 forReason:(id)arg2;
- (BOOL)isIdleTimerServiceAvailable;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


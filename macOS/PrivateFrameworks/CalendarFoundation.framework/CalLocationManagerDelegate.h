//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocation, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface CalLocationManagerDelegate : NSObject <CLLocationManagerDelegate>
{
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_queue;
    CLLocation *_currentLocation;
    CDUnknownBlockType _completionBlock;
    BOOL _didFinish;
}

@property BOOL didFinish; // @synthesize didFinish=_didFinish;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didFinishLocationLookupWithLocation:(id)arg1 error:(id)arg2;
- (void)cancel;
- (void)timeout;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)stopTimer;
- (void)startTimer;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


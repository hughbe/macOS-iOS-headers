//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNObserver.h"

@class CNSuspendableSchedulerDecorator, NSString;

__attribute__((visibility("hidden")))
@interface _CNBufferedObserver : NSObject <CNObserver>
{
    CNSuspendableSchedulerDecorator *_observerScheduler;
    id <CNObserver> _observer;
}

+ (id)bufferObserver:(id)arg1 schedulerProvider:(id)arg2;
@property(readonly, nonatomic) CNSuspendableSchedulerDecorator *observerScheduler; // @synthesize observerScheduler=_observerScheduler;
@property(readonly, nonatomic) id <CNObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;
- (void)observerDidReceiveResult:(id)arg1;
- (void)resume;
- (id)initWithObserver:(id)arg1 scheduler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


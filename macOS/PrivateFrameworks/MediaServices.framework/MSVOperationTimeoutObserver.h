//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSVOperationObserver.h"

@class NSString;

@interface MSVOperationTimeoutObserver : NSObject <MSVOperationObserver>
{
    double _duration;
}

+ (id)timeoutObserverWithDuration:(double)arg1;
- (void)operation:(id)arg1 didFinishWithErrors:(id)arg2;
- (void)operation:(id)arg1 didProduceOperation:(id)arg2;
- (void)operationDidStart:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_CNBufferingStrategy.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _CNCombinedBufferingStrategy : NSObject <_CNBufferingStrategy>
{
    NSArray *_strategies;
}

- (void).cxx_destruct;
- (void)bufferDidSendResults:(id)arg1;
- (void)buffer:(id)arg1 didReceiveResults:(id)arg2 forObserver:(id)arg3;
- (void)eachStrategy:(CDUnknownBlockType)arg1;
- (id)initWithStrategies:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


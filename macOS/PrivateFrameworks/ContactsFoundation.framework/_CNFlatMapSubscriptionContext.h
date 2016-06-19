//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNQueue, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _CNFlatMapSubscriptionContext : NSObject
{
    CNQueue *_decorators;
    NSMutableArray *_tokens;
    id <CNScheduler> _downstream;
    id <CNScheduler> _resourceLock;
    BOOL _isOuterSequenceComplete;
    BOOL _outerSequenceComplete;
}

@property(getter=isOuterSequenceComplete) BOOL outerSequenceComplete; // @synthesize outerSequenceComplete=_outerSequenceComplete;
@property(readonly) id <CNScheduler> resourceLock; // @synthesize resourceLock=_resourceLock;
@property(readonly) id <CNScheduler> downstream; // @synthesize downstream=_downstream;
@property(readonly) NSMutableArray *tokens; // @synthesize tokens=_tokens;
@property(readonly) CNQueue *decorators; // @synthesize decorators=_decorators;
- (void).cxx_destruct;
- (id)initWithSchedulerProvider:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNSuspendableSchedulerDecorator;

__attribute__((visibility("hidden")))
@interface _CNFlatMapInnerSubscriptionContext : NSObject
{
    CNSuspendableSchedulerDecorator *_decorator;
    id <CNCancelable> _token;
}

@property(readonly) id <CNCancelable> token; // @synthesize token=_token;
@property(readonly) CNSuspendableSchedulerDecorator *decorator; // @synthesize decorator=_decorator;
- (void).cxx_destruct;
- (id)initWithDecorator:(id)arg1 token:(id)arg2;

@end


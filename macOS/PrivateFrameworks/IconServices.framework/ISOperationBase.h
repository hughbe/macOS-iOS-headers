//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

__attribute__((visibility("hidden")))
@interface ISOperationBase : NSOperation
{
    long long _state;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
- (BOOL)isFinished;
- (BOOL)isExecuting;
@property long long state; // @dynamic state;
- (BOOL)isConcurrent;
- (id)init;

@end


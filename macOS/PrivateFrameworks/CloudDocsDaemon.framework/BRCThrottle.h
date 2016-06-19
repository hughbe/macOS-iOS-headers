//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCThrottleBase.h>

@class BRCMinHeap, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRCThrottle : BRCThrottleBase
{
    NSMutableDictionary *_retryCounters;
    BRCMinHeap *_retryHeap;
}

+ (long long)throttleHashBytes:(void *)arg1 length:(unsigned long long)arg2;
+ (long long)throttleHashFormat:(id)arg1;
- (void).cxx_destruct;
- (void)logFirstBackoffTimes:(unsigned int)arg1;
- (void)reset;
- (long long)nsecsToNextRetry:(long long)arg1 now:(long long)arg2;
- (void)incrementRetryCount:(long long)arg1;
- (void)_cleanupStaleCounters:(long long)arg1;
- (id)initWithName:(id)arg1 andParameters:(id)arg2;

@end


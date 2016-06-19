//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface CKDRecordCachePool : NSObject
{
    NSMutableDictionary *_pools;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_expiryTimer;
}

+ (void)performWithClientContext:(id)arg1 scope:(long long)arg2 block:(CDUnknownBlockType)arg3;
+ (id)sharedPool;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *expiryTimer; // @synthesize expiryTimer=_expiryTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *pools; // @synthesize pools=_pools;
- (void).cxx_destruct;
- (void)releaseCache:(id)arg1;
- (id)acquireCacheWithContext:(id)arg1 scope:(long long)arg2;
- (id)_poolForContext:(id)arg1;
- (void)_purgeRecordCachesForApplicationContainerPaths:(id)arg1 expiryDate:(id)arg2;
- (id)init;

@end


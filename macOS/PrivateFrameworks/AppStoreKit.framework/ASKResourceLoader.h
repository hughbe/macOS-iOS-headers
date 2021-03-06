//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ASKResourceCache, NSMapTable, NSMutableDictionary, NSOperationQueue;

@interface ASKResourceLoader : NSObject
{
    long long _requestCountMap[3];
    BOOL _isInBackground;
    NSOperationQueue *_accessQueue;
    NSOperationQueue *_notificationQueue;
    NSOperationQueue *_requestQueue;
    NSMutableDictionary *_pendingOperations;
    NSMapTable *_requestsByCacheKey;
    ASKResourceCache *_cachedResources;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ASKResourceCache *cachedResources; // @synthesize cachedResources=_cachedResources;
@property(readonly, nonatomic) NSMapTable *requestsByCacheKey; // @synthesize requestsByCacheKey=_requestsByCacheKey;
@property(readonly, nonatomic) NSMutableDictionary *pendingOperations; // @synthesize pendingOperations=_pendingOperations;
@property(readonly, nonatomic) BOOL isInBackground; // @synthesize isInBackground=_isInBackground;
@property(readonly, nonatomic) NSOperationQueue *requestQueue; // @synthesize requestQueue=_requestQueue;
@property(readonly, nonatomic) NSOperationQueue *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(readonly, nonatomic) NSOperationQueue *accessQueue; // @synthesize accessQueue=_accessQueue;
- (void)postDidLoadAllForReason:(long long)arg1;
- (void)postDidIdleIfIdle;
- (void)postDidBeginLoadingIfIdle;
- (void)reprioritizeOperations;
- (void)updateLoadReason:(long long)arg1 forOperation:(id)arg2;
- (long long)currentQualityOfService;
- (void)finishLoadForRequest:(id)arg1 withResource:(id)arg2 error:(id)arg3;
- (BOOL)setReason:(long long)arg1 forRequestWithKey:(id)arg2;
- (BOOL)loadResourceWithRequest:(id)arg1 reason:(long long)arg2;
- (BOOL)isIdleForReason:(long long)arg1;
@property(readonly, nonatomic) BOOL isIdle;
- (void)enterForeground;
- (void)enterBackground;
- (void)cancelRequestForCacheKey:(id)arg1;
- (void)cancelAllRequests;
- (id)requestKeyForCacheKey:(id)arg1;
- (void)removeAllCachedResources;
- (id)cachedResourcesForCacheKey:(id)arg1;
- (void)addResource:(id)arg1 forCacheKey:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithParentResourceLoader:(id)arg1;
- (id)initWithRequestQueue:(id)arg1 accessQueue:(id)arg2 notificationQueue:(id)arg3 cacheLimit:(long long)arg4;
- (void)_commonInit;

@end


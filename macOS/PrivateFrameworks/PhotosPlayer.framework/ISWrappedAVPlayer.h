//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlayer, AVPlayerItem, NSError, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface ISWrappedAVPlayer : NSObject
{
    NSObject<OS_dispatch_queue> *_avPlayerQueue;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    AVPlayer *_playerQueue_avPlayer;
    AVPlayerItem *_ivarQueue_currentItem;
    long long _ivarQueue_status;
    NSError *_ivarQueue_error;
    float _ivarQueue_rate;
    float _ivarQueue_volume;
    long long _ivarQueue_itemStatus;
    CDStruct_1b6d18a9 _ivarQueue_itemForwardPlaybackEndTime;
    NSMutableDictionary *_observersByID;
    id <ISWrappedAVPlayerDelegate> _delegate;
}

+ (id)observedAVPIKeysAndContexts;
+ (id)observedAVPKeys;
@property __weak id <ISWrappedAVPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancelPendingPrerolls;
- (void)prerollAtRate:(float)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1 thenCall:(CDUnknownBlockType)arg2;
- (void)pause;
- (void)setRate:(float)arg1;
- (void)setVolume:(float)arg1;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (void)setRate:(float)arg1 time:(CDStruct_1b6d18a9)arg2 atHostTime:(CDStruct_1b6d18a9)arg3;
- (CDStruct_1b6d18a9)itemForwardPlaybackEndTime;
- (CDStruct_1b6d18a9)currentTime;
- (float)volume;
- (float)rate;
- (id)currentItem;
- (id)error;
- (long long)currentItemStatus;
- (long long)status;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_nilOrValue:(id)arg1;
- (void)_playerQueue_stopObservingPlayerItem:(id)arg1;
- (void)_playerQueue_startObservingPlayerItem:(id)arg1;
- (void)removeTimeObserver:(id)arg1;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)_nextObserverUID;
- (void)prepareForReuseWithCompletion:(CDUnknownBlockType)arg1;
- (void)setItemForwardEndPlaybackTime:(CDStruct_1b6d18a9)arg1;
- (void)attachToPlayerLayerIfNeeded:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)_initWithAVPlayer:(id)arg1;
- (void)_assertOnIvarQueue;
- (void)_assertOnPlayerQueue;
- (BOOL)_isOnIvarQueue;
- (BOOL)_isOnPlayerQueue;
- (void)_performIvarWrite:(CDUnknownBlockType)arg1;
- (void)_performIvarRead:(CDUnknownBlockType)arg1;
- (void)_performPlayerTransaction:(CDUnknownBlockType)arg1;
- (void)_performPlayerTransaction:(CDUnknownBlockType)arg1 sync:(BOOL)arg2;

@end


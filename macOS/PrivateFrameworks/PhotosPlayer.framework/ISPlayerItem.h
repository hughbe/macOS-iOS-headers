//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlayerItem, AVVideoComposition, ISAsset, ISCrossfadeItem, ISPlayerContent, NSError, NSHashTable, NSObject<OS_dispatch_queue>;

@interface ISPlayerItem : NSObject
{
    long long _loadingTarget;
    AVVideoComposition *_videoComposition;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSHashTable *_observers;
    float _videoCropFactor;
    BOOL __needsToLoadVideoPlayerItem;
    BOOL __needsToLoadCrossfadeItem;
    BOOL __loadingCancelled;
    BOOL _reversesMoreVideoFramesInMemory;
    BOOL _aggressivelyCacheVideoFrames;
    BOOL _shouldLoadCrossfadeContent;
    BOOL _preparesForVitalityOnLoad;
    ISAsset *_asset;
    long long _status;
    NSError *_error;
    AVPlayerItem *__videoPlayerItem;
    ISCrossfadeItem *__crossfadeItem;
    ISPlayerContent *_playerContent;
    double __photoTime;
    long long __crossfadeItemRequestID;
    long long __videoPlayerItemRequestID;
    struct CGSize _targetSize;
    CDStruct_e83c9415 _trimmedTimeRange;
}

+ (id)playerItemWithAsset:(id)arg1 targetSize:(struct CGSize)arg2 trimmedTimeRange:(CDStruct_e83c9415)arg3;
+ (id)playerItemWithAsset:(id)arg1 targetSize:(struct CGSize)arg2;
@property(nonatomic, setter=_setVideoPlayerItemRequestID:) long long _videoPlayerItemRequestID; // @synthesize _videoPlayerItemRequestID=__videoPlayerItemRequestID;
@property(nonatomic, setter=_setCrossfadeItemRequestID:) long long _crossfadeItemRequestID; // @synthesize _crossfadeItemRequestID=__crossfadeItemRequestID;
@property(nonatomic) BOOL preparesForVitalityOnLoad; // @synthesize preparesForVitalityOnLoad=_preparesForVitalityOnLoad;
@property(nonatomic) BOOL shouldLoadCrossfadeContent; // @synthesize shouldLoadCrossfadeContent=_shouldLoadCrossfadeContent;
@property(nonatomic) BOOL aggressivelyCacheVideoFrames; // @synthesize aggressivelyCacheVideoFrames=_aggressivelyCacheVideoFrames;
@property(nonatomic) BOOL reversesMoreVideoFramesInMemory; // @synthesize reversesMoreVideoFramesInMemory=_reversesMoreVideoFramesInMemory;
@property(nonatomic, getter=_isLoadingCancelled, setter=_setLoadingCancelled:) BOOL _loadingCancelled; // @synthesize _loadingCancelled=__loadingCancelled;
@property(nonatomic, setter=_setNeedsToLoadCrossfadeItem:) BOOL _needsToLoadCrossfadeItem; // @synthesize _needsToLoadCrossfadeItem=__needsToLoadCrossfadeItem;
@property(nonatomic, setter=_setNeedsToLoadVideoPlayerItem:) BOOL _needsToLoadVideoPlayerItem; // @synthesize _needsToLoadVideoPlayerItem=__needsToLoadVideoPlayerItem;
@property(readonly, nonatomic) double _photoTime; // @synthesize _photoTime=__photoTime;
@property(retain, nonatomic, setter=_setPlayerContent:) ISPlayerContent *playerContent; // @synthesize playerContent=_playerContent;
@property(retain, nonatomic, setter=_setCrossfadeItem:) ISCrossfadeItem *_crossfadeItem; // @synthesize _crossfadeItem=__crossfadeItem;
@property(retain, nonatomic, setter=_setVideoPlayerItem:) AVPlayerItem *_videoPlayerItem; // @synthesize _videoPlayerItem=__videoPlayerItem;
@property(readonly, nonatomic) float videoCropFactor; // @synthesize videoCropFactor=_videoCropFactor;
@property(readonly, nonatomic) CDStruct_e83c9415 trimmedTimeRange; // @synthesize trimmedTimeRange=_trimmedTimeRange;
@property(retain, nonatomic, setter=_setError:) NSError *error; // @synthesize error=_error;
@property(nonatomic, setter=_setStatus:) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(readonly) ISAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)dealloc;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)_enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)_updatePlayerContent;
- (void)_updateStatus;
- (void)_setVideoPlayerItem:(id)arg1 cropFactor:(float)arg2;
- (void)_handleCrossfadeLoadingResultWithSuccess:(BOOL)arg1 crossfadeItem:(id)arg2 error:(id)arg3;
- (void)_loadCrossfadeItemIfNeeded;
- (void)_handleVideoPlayerItemLoadResultWithSuccess:(BOOL)arg1 playerItem:(id)arg2 videoCropFactor:(float)arg3 error:(id)arg4;
- (void)_loadVideoPlayerItemIfNeeded;
- (void)_loadNextResourceIfNeeded;
- (void)_reloadAllContent;
- (BOOL)_needsToLoadContent;
- (void)_resetAVObjects;
- (void)resetAVObjects;
- (void)_cancelLoading;
- (void)cancelLoading;
- (void)_setVideoComposition:(id)arg1;
@property(copy) AVVideoComposition *videoComposition;
- (void)_setLoadingTarget:(long long)arg1;
@property long long loadingTarget;
- (id)initWithAsset:(id)arg1 targetSize:(struct CGSize)arg2 trimmedTimeRange:(CDStruct_e83c9415)arg3;
- (id)initWithAsset:(id)arg1 targetSize:(struct CGSize)arg2;
- (id)init;

@end


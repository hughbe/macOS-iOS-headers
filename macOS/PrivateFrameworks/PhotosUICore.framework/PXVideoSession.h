//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/AVPlayerItemOutputPullDelegate-Protocol.h>
#import <PhotosUICore/ISChangeObserver-Protocol.h>
#import <PhotosUICore/ISWrappedAVPlayerDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class AVPlayerItem, AVPlayerItemVideoOutput, ISWrappedAVAudioSession, ISWrappedAVPlayer, NSCountedSet, NSDate, NSError, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString, NSTimer, PXDisplayLink, PXNumberAnimator, PXVideoContentProvider;
@protocol OS_dispatch_queue, PXVideoSessionDelegate;

@interface PXVideoSession : PXObservable <ISChangeObserver, AVPlayerItemOutputPullDelegate, PXChangeObserver, ISWrappedAVPlayerDelegate>
{
    id _playerTimeObservationToken;
    NSTimer *_playerTimeAdvancementTimer;
    long long _tokenCounter;
    ISWrappedAVPlayer *_videoPlayer;
    void *_updateQueueIdentifier;
    NSObject<OS_dispatch_queue> *_audioSessionQueue;
    NSObject<OS_dispatch_queue> *_videoWorkQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSMutableArray *_mainQueue_videoViewQueue;
    ISWrappedAVAudioSession *_audioSessionQueue_audioSession;
    NSCountedSet *_stateQueue_enteredControlContexts;
    NSMutableDictionary *_stateQueue_statesByControlContext;
    NSMutableSet *_stateQueue_pixelBufferOutputTokens;
    NSMutableSet *_stateQueue_pixelBufferPausedOutputTokens;
    PXDisplayLink *_stateQueue_displayLink;
    id _stateQueue_playbackTimeRangeEndBoundaryObserver;
    long long _stateQueue_playState;
    NSString *_stateQueue_AudioSessionCategory;
    unsigned long long _stateQueue_AudioSessionCategoryOptions;
    BOOL _stateQueue_isUpdatingAudioSession;
    BOOL _stateQueue_buffering;
    long long _stateQueue_desiredPlayState;
    AVPlayerItemVideoOutput *_stateQueue_videoOutput;
    CDStruct_1b6d18a9 _stateQueue_videoDuration;
    AVPlayerItem *_stateQueue_currentPlayerItem;
    BOOL _stateQueue_isPlayerTimeAdvancing;
    long long _stateQueue_audioStatus;
    AVPlayerItem *_stateQueue_playerItem;
    BOOL _stateQueue_isPlayable;
    BOOL _stateQueue_isStalled;
    BOOL _stateQueue_isLoopingEnabled;
    CDStruct_e83c9415 _stateQueue_playbackTimeRange;
    float _stateQueue_volume;
    BOOL _stateQueue_shouldFadeVolumeChange;
    BOOL _stateQueue_seekToBeginningAtEnd;
    BOOL _stateQueue_isAtEnd;
    BOOL _stateQueue_isAtBeginning;
    struct CGAffineTransform _stateQueue_videoRotationTransform;
    struct __CVBuffer *_stateQueue_currentPixelBuffer;
    BOOL _stateQueue_readyForSeeking;
    CDStruct_5f1286c4 _updateQueue_updateFlags;
    BOOL _updateQueue_didFinishInitializingAudioSession;
    NSDate *_updateQueue_playRequestDate;
    CDStruct_1b6d18a9 _updateQueue_lastPlayerTime;
    PXNumberAnimator *_mainQueue_volumeAnimator;
    BOOL _allowsExternalPlayback;
    BOOL _isUpdatingAudioSession;
    id <PXVideoSessionDelegate> _delegate;
    PXVideoContentProvider *_contentProvider;
    NSError *_error;
    CDStruct_1b6d18a9 _currentTime;
}

- (void).cxx_destruct;
@property(nonatomic, setter=setUpdatingAudioSession:) BOOL isUpdatingAudioSession; // @synthesize isUpdatingAudioSession=_isUpdatingAudioSession;
@property(nonatomic) CDStruct_1b6d18a9 currentTime; // @synthesize currentTime=_currentTime;
@property(readonly, nonatomic) BOOL allowsExternalPlayback; // @synthesize allowsExternalPlayback=_allowsExternalPlayback;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) PXVideoContentProvider *contentProvider; // @synthesize contentProvider=_contentProvider;
@property(nonatomic) __weak id <PXVideoSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_performBlockOnUpdateQueue:(CDUnknownBlockType)arg1;
- (void)_assertOnUpdateQueue;
- (BOOL)_isOnUpdateQueue;
@property(readonly, nonatomic) NSString *debugDetailedDescription;
- (void)_handleAudioSessionOutputVolumeDidChangeFromVolume:(float)arg1 toVolume:(float)arg2;
- (void)_handleAssetTracksDidLoadForAsset:(id)arg1;
- (void)_loadAssetTracksIfNeeded;
- (id)_playbackStateDescription;
- (void)_logPlaybackState;
- (void)_handleDidReachPlaybackTimeRangeEnd;
- (void)_seekToPlaybackTimeRangeStartIfNeeded;
- (void)_removeAllVideoOutputs;
- (void)_updateAVPlayerPlayState;
- (void)_updatePlayState;
- (void)_updateReadyForSeeking;
- (void)_updatePlayerVolume;
- (void)_updateVolumeAnimator;
- (void)_updatePlayerItemInPlayer;
- (void)_updatePlayerItem;
- (void)_updateStalled;
- (void)_updateBuffering;
- (void)_updateAtBeginningOrEndWithPlayerItemDuration:(CDStruct_1b6d18a9)arg1 success:(BOOL)arg2 error:(id)arg3;
- (void)_updateAtBeginningOrEnd;
@property(nonatomic) struct CGAffineTransform videoRotationTransform;
- (void)_updateRotationTransform;
- (void)_updateAudioStatus;
- (void)_setPlayabilityFromAsset:(id)arg1;
- (void)_handlePlayabilityDidLoadForAsset:(id)arg1;
- (void)_updatePlayability;
- (void)_handlePlayerTimeAdvancementTimer:(id)arg1;
- (void)_avPlayerTimeDidChange:(CDStruct_1b6d18a9)arg1;
- (void)_handlePreferredTransformDidLoad;
- (unsigned long long)pixelBufferOutputTokenCount;
@property(nonatomic, setter=setAtEnd:) BOOL isAtEnd;
@property(nonatomic, setter=setAtBeginning:) BOOL isAtBeginning;
- (void)setDesiredPlayState:(long long)arg1;
@property(readonly, nonatomic) long long desiredPlayState;
- (void)setPlayState:(long long)arg1;
@property(readonly, nonatomic) long long playState;
- (void)setIsReadyForSeeking:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isReadyForSeeking;
@property(nonatomic, getter=isBuffering) BOOL buffering;
@property(nonatomic, setter=setStalled:) BOOL isStalled;
- (void)setPlayable:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isPlayable;
@property(retain, nonatomic) AVPlayerItem *playerItem;
@property(nonatomic) long long audioStatus;
- (void)setPlayerTimeAdvancing:(BOOL)arg1;
- (BOOL)isPlayerTimeAdvancing;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (void)setSeekToBeginningAtEnd:(BOOL)arg1;
@property(readonly, nonatomic) BOOL seekToBeginningAtEnd;
- (void)setPlaybackTimeRange:(CDStruct_e83c9415)arg1;
@property(readonly, nonatomic) CDStruct_e83c9415 playbackTimeRange;
- (void)setLoopingEnabled:(BOOL)arg1;
@property(readonly, nonatomic, getter=isLoopingEnabled) BOOL loopingEnabled;
@property(readonly, nonatomic) BOOL preventsSleepDuringVideoPlayback;
- (void)setPreventsSleepDuringVideoPlayback:(BOOL)arg1;
@property(readonly, nonatomic) float volume;
- (void)setVolume:(float)arg1 withFade:(BOOL)arg2;
- (id)videoPlayer;
- (void)setCurrentPlayerItem:(id)arg1;
- (id)currentPlayerItem;
@property(nonatomic) CDStruct_1b6d18a9 videoDuration;
- (void)setVideoOutput:(id)arg1;
- (id)videoOutput;
- (BOOL)_isAVPlayerPlayStateOutOfSync;
- (void)_updateDuration;
@property(nonatomic) struct __CVBuffer *currentPixelBuffer;
@property(retain, nonatomic) PXDisplayLink *displayLink;
- (void)_updateDisplayLinkState;
- (void)_videoWorkQueue_updateCurrentPixelBufferWithVideoOutput:(id)arg1 outputTime:(double)arg2;
- (void)_updateCurrentPixelBuffer;
- (void)_addOutput:(id)arg1 toPlayerItem:(id)arg2;
- (void)_updateVideoOutput;
- (void)_handleDisplayLink:(id)arg1;
- (void)setPlaybackTimeRangeEndBoundaryObserver:(id)arg1;
- (id)playbackTimeRangeEndBoundaryObserver;
- (void)_updateFromCurrentControlState;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)avPlayerDidDeallocate;
- (void)avPlayer:(id)arg1 itemDidPlayToEnd:(id)arg2;
- (void)outputMediaDataWillChange:(id)arg1;
- (id)mutableChangeObject;
- (void)didPerformChanges;
- (void)_performChanges:(CDUnknownBlockType)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (struct CGImage *)generateSnapshotImage;
- (void)cancelLoading;
- (void)loadIfNeededWithPriority:(long long)arg1;
@property(readonly, copy, nonatomic) NSString *audioSessionCategory;
- (unsigned long long)audioSessionCategoryOptions;
- (void)cancelPixelBufferOutputWithRequestIdentifier:(id)arg1;
- (void)requestPixelBufferOutputWithRequestIdentifier:(id)arg1;
- (void)dealloc;
- (void)performFinalCleanup;
- (void)performChanges:(CDUnknownBlockType)arg1 withPlaybackContext:(long long)arg2;
- (void)leaveContext:(long long)arg1;
- (void)enterContext:(long long)arg1;
- (id)_stateQueue_newStateFromCurrent;
- (id)init;
- (id)initWithContentProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


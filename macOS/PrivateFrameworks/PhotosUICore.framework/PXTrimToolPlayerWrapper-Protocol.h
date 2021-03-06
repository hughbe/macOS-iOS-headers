//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class UXView;
@protocol PXTrimToolPlayerObserver;

@protocol PXTrimToolPlayerWrapper <NSObject>
@property(readonly, nonatomic, getter=isPlaying) BOOL playing;
@property(readonly, nonatomic, getter=isReadyToPlay) BOOL readyToPlay;
@property(readonly, nonatomic) UXView *loupePlayerView;
@property(nonatomic) __weak id <PXTrimToolPlayerObserver> playerObserver;
- (void)stopPeriodicTimeObserver;
- (void)startPeriodicTimeObserver;
- (void)pause;
- (void)play;
- (void)invalidateComposition;
- (void)requestPlayerItemWithCompletion:(void (^)(AVPlayerItem *))arg1;
- (void)applyTrimTimeRange:(CDStruct_e83c9415)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 untrimmed:(BOOL)arg2 exact:(BOOL)arg3;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString, NSURL;

@interface AVMediaFileSegmenter : NSObject
{
    struct AVMediaFileSegmenterInternal *_mediaFileSegmenter;
}

+ (id)mediaFileSegmenterWithAsset:(id)arg1 options:(id)arg2;
+ (id)_figMediaFileSegmenterNotificationNames;
- (void)_createFigMediaFileSegmenterAndBeginSegmenting;
- (id)_createFigMediaFileSegmenter:(struct OpaqueFigMediaFileSegmenter **)arg1;
- (id)asset;
- (id)description;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 options:(id)arg2;
- (id)init;
@property(copy, nonatomic) NSString *IFramePlaylistName;
@property(copy, nonatomic) NSString *mediaPlaylistName;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long status;
@property(nonatomic) BOOL segmentsAudioOnly;
@property(nonatomic) CDStruct_1b6d18a9 targetSegmentDuration;
@property(copy, nonatomic) NSURL *outputURL;
- (void)_addListeners;
- (void)_removeListeners;
- (void)_handleFigMediaFileSegmenterNotification:(id)arg1 payload:(id)arg2;
- (void)_transitionToStatus:(long long)arg1 error:(id)arg2;
@property(readonly, nonatomic) float progress;
- (void)_updateProgress;
- (void)segmentMediaFileAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelMediaFileSegmentation;

@end


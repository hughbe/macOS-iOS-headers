//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class AVAsset, AVVideoComposition;

@interface ISCrossfadeChefOperation : NSOperation
{
    int _photoEXIFOrientation;
    AVAsset *_videoAsset;
    double _crossfadeDuration;
    double _sourceStartTime;
    id _stillPhoto;
    unsigned long long _numberOfFrames;
    AVVideoComposition *_videoComposition;
    CDUnknownBlockType _resultHandler;
    struct CGSize _targetSize;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property(readonly, copy, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(readonly, nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(readonly, nonatomic) unsigned long long numberOfFrames; // @synthesize numberOfFrames=_numberOfFrames;
@property(readonly, nonatomic) int photoEXIFOrientation; // @synthesize photoEXIFOrientation=_photoEXIFOrientation;
@property(retain, nonatomic) id stillPhoto; // @synthesize stillPhoto=_stillPhoto;
@property(readonly, nonatomic) double sourceStartTime; // @synthesize sourceStartTime=_sourceStartTime;
@property(readonly, nonatomic) double crossfadeDuration; // @synthesize crossfadeDuration=_crossfadeDuration;
@property(readonly, nonatomic) AVAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
- (void).cxx_destruct;
- (id)initWithVideoAsset:(id)arg1 sourceStartTime:(double)arg2 stillPhoto:(struct CGImage *)arg3 photoEXIFOrientation:(int)arg4 crossfadeDuration:(double)arg5 numberOfFrames:(unsigned long long)arg6 targetSize:(struct CGSize)arg7 videoComposition:(id)arg8 resultHandler:(CDUnknownBlockType)arg9;

@end


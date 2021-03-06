//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderRequest.h>

@class NUColorSpace, NURenderContext;
@protocol NUScalePolicy;

@interface NULivePhotoRenderRequest : NURenderRequest
{
    NURenderContext *_stillBufferRenderContext;
    id <NUScalePolicy> _scalePolicy;
    NUColorSpace *_colorSpace;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NUColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(retain) id <NUScalePolicy> scalePolicy; // @synthesize scalePolicy=_scalePolicy;
- (id)livePhotoRenderResultFromPhotoResponse:(id)arg1 videoResponse:(id)arg2 propertiesResponse:(id)arg3 error:(out id *)arg4;
- (void)submit:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithComposition:(id)arg1;

@end


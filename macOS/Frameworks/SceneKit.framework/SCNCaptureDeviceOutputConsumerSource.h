//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNTextureSource.h>

#import <SceneKit/SCNCaptureDeviceOutputConsumer-Protocol.h>

@class NSString;
@protocol MTLTexture;

__attribute__((visibility("hidden")))
@interface SCNCaptureDeviceOutputConsumerSource : SCNTextureSource <SCNCaptureDeviceOutputConsumer>
{
    struct __CVMetalTextureCache *_textureCache;
    struct __CVBuffer *_pixelBuffer;
    id <MTLTexture> _mtlTexture;
    BOOL _containsAlpha;
    _Bool _isFront;
    unsigned long long _width;
    unsigned long long _height;
}

- (void)setPixelBuffer:(struct __CVBuffer *)arg1;
- (void)setSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)metalTextureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (void)cleanup:(struct __C3DRendererContext *)arg1;
- (void)connectToProxy:(struct __C3DImageProxy *)arg1;
- (void)dealloc;
- (void)discardVideoData;
- (BOOL)containsAlpha;
- (id)initWithOptions:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


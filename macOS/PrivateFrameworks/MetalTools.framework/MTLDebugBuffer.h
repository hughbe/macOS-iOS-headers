//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MetalTools/MTLToolsBuffer.h>

@class MTLDebugDevice, MTLDebugResourceAccessTracker, NSMutableArray;

@interface MTLDebugBuffer : MTLToolsBuffer
{
    MTLDebugResourceAccessTracker *_resourceAccessTracker;
    MTLDebugDevice *_debugDevice;
    NSMutableArray *_debugMarkers;
    BOOL _purgeableStateHasBeenSet;
    BOOL _isContentsPointerExposed;
    unsigned int _checksum;
    const void *_pointer;
    unsigned long long _purgeableState;
}

@property(nonatomic) unsigned int checksum; // @synthesize checksum=_checksum;
@property(readonly, nonatomic) BOOL isContentsPointerExposed; // @synthesize isContentsPointerExposed=_isContentsPointerExposed;
@property(readonly, nonatomic) BOOL purgeableStateHasBeenSet; // @synthesize purgeableStateHasBeenSet=_purgeableStateHasBeenSet;
@property(readonly, nonatomic) unsigned long long purgeableState; // @synthesize purgeableState=_purgeableState;
@property(readonly, nonatomic) const void *pointer; // @synthesize pointer=_pointer;
- (void).cxx_destruct;
- (void)blitManagedToShared;
- (void)blitManagedToPrivate;
- (void)accessedByCPU;
- (void)accessedByGPU;
@property(readonly, nonatomic) BOOL resourceTrackingEnabled; // @dynamic resourceTrackingEnabled;
- (void)removeAllDebugMarkers;
- (void)addDebugMarker:(id)arg1 range:(struct _NSRange)arg2;
- (id)copyDebugMarkers;
- (void *)contents;
- (void)didModifyRange:(struct _NSRange)arg1;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (id)newLinearTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4;
- (id)newTiledTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;
- (id)description;
@property(readonly, nonatomic) unsigned int resourceUsage; // @dynamic resourceUsage;
- (void)dealloc;
- (void)_initResourceTrackingWithDevice:(id)arg1;
- (id)initWithBuffer:(id)arg1 device:(id)arg2 bytes:(const void *)arg3 options:(unsigned long long)arg4;
- (id)initWithBuffer:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3;

@end


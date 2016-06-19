//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

__attribute__((visibility("hidden")))
@interface VKPolylineOverlayRenderRegion : NSObject
{
    NSSet *_tiles;
    Box_3d7e3c2c _visibleRect;
    vector_b9326b03 _rectsForSnapping;
    struct vector<VKTileKey, std::__1::allocator<VKTileKey>> _snappedTileKeys;
}

@property(readonly, nonatomic) Box_3d7e3c2c visibleRect; // @synthesize visibleRect=_visibleRect;
@property(readonly, nonatomic) NSSet *tiles; // @synthesize tiles=_tiles;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const vector_b9326b03 *)rectsForSnapping;
- (BOOL)isEquivalentToNewRegion:(id)arg1;
- (void)dealloc;
- (id)initForKeysInView:(id)arg1 tiles:(id)arg2 allowsSnapping:(BOOL)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKVectorTileSource.h>

__attribute__((visibility("hidden")))
@interface VKRoadTileSource : VKVectorTileSource
{
}

- (void)releaseTraffic;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
- (BOOL)shouldObeyHybridUnavailableRegions;
- (unsigned long long)mapLayerForZoomLevelRange;
- (BOOL)minimumZoomLevelBoundsCamera;
- (id)initWithTileSet:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3 sharedResources:(id)arg4;

@end


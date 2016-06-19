//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOTileLoader, NSString;

__attribute__((visibility("hidden")))
@interface AltTileFetcher : NSObject
{
    GEOTileLoader *_geoTileLoader;
    struct map<_GEOTileKey, std::__1::shared_ptr<altitude::GeoServicesLoadJob>, GEOTileKeyComp, std::__1::allocator<std::__1::pair<const _GEOTileKey, std::__1::shared_ptr<altitude::GeoServicesLoadJob>>>> _keyToJobMap;
    struct Mutex _mutex;
    unsigned int _numDownloads;
    NSString *_tileLoaderClientIdentifier;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isDownloading;
- (void)purgeExpired:(double)arg1;
- (void)reportCorruptTile:(const struct _GEOTileKey *)arg1;
- (void)cancelRequests;
- (void)updateJobPriority:(shared_ptr_97fa0047 *)arg1;
- (void)cancelJob:(shared_ptr_97fa0047 *)arg1;
- (void)fetchDataForJob:(shared_ptr_97fa0047 *)arg1;
- (shared_ptr_97fa0047)getJobForKey:(const struct _GEOTileKey *)arg1;
- (void)dealloc;
- (id)init;

@end


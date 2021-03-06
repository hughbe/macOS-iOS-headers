//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PLPhotoLibrary;
@protocol OS_dispatch_group;

@interface PLPhotosStateLog : NSObject
{
    NSObject<OS_dispatch_group> *_group;
    PLPhotoLibrary *_photoLibrary;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
- (void)createSnapshot;
- (BOOL)copyFilesMatching:(id)arg1 andExcluding:(id)arg2 fromPath:(id)arg3 toPath:(id)arg4 usingCompression:(BOOL)arg5;
- (BOOL)compressFileFromPath:(id)arg1 toPath:(id)arg2;
- (void)logDescription:(id)arg1;
- (void)_logAssets:(id)arg1 forAlbum:(id)arg2 indent:(unsigned long long)arg3;
- (void)logAssetCounts;
- (void)logAllAlbums;
- (void)logAlbumLists;
- (void)logAlbum:(id)arg1 index:(unsigned long long)arg2 indent:(unsigned long long)arg3 completeMetadata:(BOOL)arg4 printAssets:(BOOL)arg5;
- (void)logMoments;
@property(readonly, nonatomic) PLPhotoLibrary *photoLibrary;
- (id)initWithPhotoLibrary:(id)arg1;

@end


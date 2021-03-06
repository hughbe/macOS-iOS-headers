//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVAssetCache.h>

@class AVManagedAssetCacheInternal;

__attribute__((visibility("hidden")))
@interface AVManagedAssetCache : AVAssetCache
{
    AVManagedAssetCacheInternal *_priv;
}

+ (id)assetCacheWithURL:(id)arg1;
- (BOOL)isPlayableOffline;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg1;
- (id)allKeys;
- (id)lastModifiedDateOfEntryForKey:(id)arg1;
- (long long)sizeOfEntryForKey:(id)arg1;
- (void)removeEntryForKey:(id)arg1;
- (id)URL;
- (long long)currentSize;
- (void)setMaxEntrySize:(long long)arg1;
- (long long)maxEntrySize;
- (void)setMaxSize:(long long)arg1;
- (long long)maxSize;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end


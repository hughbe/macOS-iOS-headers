//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Slideshows/MCAsset.h>

@class NSMutableSet, NSSet;

@interface MCAssetAudio : MCAsset
{
    NSMutableSet *mSongs;
}

- (void)removeSong:(id)arg1;
- (void)addSong:(id)arg1;
@property(readonly) NSSet *songs;
- (BOOL)isInUse;
- (void)demolish;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImage.h"

@interface NSImage (GKAdditions)
+ (void)_gkloadRemoteImageForURL:(id)arg1 queue:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)_gkImageByTintingWithColor:(id)arg1;
- (id)_gkImageByAddingAlpha;
- (id)_gkImageByScalingToSize:(struct CGSize)arg1;
- (id)_gkImageByScalingToSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)_gkImageByScalingToSize:(struct CGSize)arg1 scale:(double)arg2 padColor:(id)arg3;
- (id)_gkImageByScalingAndCroppingToSize:(struct CGSize)arg1 scale:(double)arg2;
@end


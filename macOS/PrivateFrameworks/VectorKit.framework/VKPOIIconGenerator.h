//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface VKPOIIconGenerator : NSObject
{
}

+ (id)newPOIBalloonImage:(struct CGImage *)arg1 tailImageMaskRef:(struct CGImage *)arg2 shadowImageRef:(struct CGImage *)arg3 style:(struct VKIconStyleInfo *)arg4 scale:(double)arg5 textOffsetY:(double *)arg6 fullBleedColor:(struct CGColor *)arg7;
+ (id)newIconWithGlyph:(struct CGImage *)arg1 style:(struct VKIconStyleInfo *)arg2 scale:(double)arg3 hasText:(_Bool)arg4 leftCapWidth:(double *)arg5 rightCapWidth:(double *)arg6;
+ (id)newIconWithGlyph:(struct CGImage *)arg1 style:(struct VKIconStyleInfo *)arg2 scale:(double)arg3;
+ (struct CGSize)imageSizeForStyle:(struct VKIconStyleInfo *)arg1 scale:(double)arg2 hasText:(_Bool)arg3;
+ (id)keyForStyle:(struct VKIconStyleInfo *)arg1;
+ (BOOL)canHandleStyle:(struct VKIconStyleInfo *)arg1;

@end


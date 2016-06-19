//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImage.h"

@interface NSImage (Utilities)
+ (struct NSImage *)fileIconForURL:(id)arg1 withPreferredSize:(struct CGSize)arg2;
+ (struct NSImage *)imageNamed:(id)arg1 withTint:(struct NSColor *)arg2;
+ (struct NSImage *)ic_imageWithContentsOfURL:(id)arg1;
- (id)ic_imageDataWithUTType:(id)arg1;
- (id)ic_PNGData;
- (id)ic_JPEGData;
- (struct CGImage *)CGImage;
- (id)bitmapRepresentation;
- (struct NSImage *)imageFromRect:(struct CGRect)arg1;
- (struct NSImage *)scaledImageWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (struct NSImage *)scaledImageMaxDimension:(double)arg1 scale:(double)arg2;
- (struct NSImage *)scaledImageMinDimension:(double)arg1 scale:(double)arg2;
@end


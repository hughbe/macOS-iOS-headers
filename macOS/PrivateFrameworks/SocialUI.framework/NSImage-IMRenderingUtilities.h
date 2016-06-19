//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImage.h"

@interface NSImage (IMRenderingUtilities)
+ (id)imageNamed:(id)arg1 messagesImageState:(int)arg2 size:(struct CGSize)arg3 invertColor:(BOOL)arg4;
+ (id)imageNamed:(id)arg1 messagesImageState:(int)arg2 size:(struct CGSize)arg3;
+ (id)imageNamed:(id)arg1 messagesImageState:(int)arg2;
- (id)bitmapImageRepWithPadding:(double)arg1;
- (id)bitmapImageRep;
- (id)messagesTintedImageWithColor:(id)arg1 withSize:(struct CGSize)arg2;
- (id)messagesTintedImageWithColor:(id)arg1;
- (void)sizeImageToFitInSize:(struct CGSize)arg1;
- (id)JPEGDataWithMaxSize:(double)arg1 minSize:(double)arg2 compression:(double)arg3;
- (id)imageWithSize:(struct CGSize)arg1;
- (id)imageWithMaxSize:(double)arg1;
- (id)_resizedImageWithFrame:(struct CGRect)arg1 inSize:(struct CGSize)arg2;
- (void)drawNicelyScaledInRect:(struct CGRect)arg1 inView:(id)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4;
- (void)drawNicelyScaledInRect:(struct CGRect)arg1 operation:(unsigned long long)arg2 fraction:(double)arg3;
- (struct CGSize)largestRepPixelSize;
- (struct CGSize)largestRepSize;
- (id)smallestRep;
- (id)largestRep;
- (id)rawGIFData;
- (id)GIFDataFromRepWithMaxSize:(struct CGSize)arg1 maxLength:(unsigned long long)arg2 minSize:(struct CGSize)arg3;
- (BOOL)imageIsWithinMaxSize:(struct CGSize)arg1 andMinSize:(struct CGSize)arg2;
@end


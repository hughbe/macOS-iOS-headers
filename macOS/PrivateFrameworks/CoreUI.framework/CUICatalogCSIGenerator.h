//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreUI/CSIGenerator.h>

@class CSIBitmapWrapper, CUIRenditionKey;

__attribute__((visibility("hidden")))
@interface CUICatalogCSIGenerator : CSIGenerator
{
    CUIRenditionKey *_baseKey;
    CSIBitmapWrapper *_flattenedBitmap;
}

@property(retain, nonatomic) CSIBitmapWrapper *flattenedBitmap; // @synthesize flattenedBitmap=_flattenedBitmap;
@property(retain, nonatomic) CUIRenditionKey *baseKey; // @synthesize baseKey=_baseKey;
- (void)dealloc;
- (void)addLayerReference:(id)arg1 withImage:(struct CGImage *)arg2;
- (id)initWithLayerStackData:(id)arg1 withCanvasSize:(struct CGSize)arg2 isOpaque:(BOOL)arg3;

@end


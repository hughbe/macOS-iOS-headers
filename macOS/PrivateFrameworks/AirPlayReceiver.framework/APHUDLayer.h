//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface APHUDLayer : CALayer
{
    struct __CTFont *_Font;
    struct __CFDictionary *_TextAttributes;
    struct __CFArray *_Labels;
    struct __CFArray *_Values;
    struct __CFArray *_Colors;
}

- (void)drawInContext:(struct CGContext *)arg1;
- (void)setValueAtIndex:(int)arg1 format:(id)arg2;
- (void)setValue:(struct __CFString *)arg1 atIndex:(int)arg2;
- (void)addLine:(struct __CFString *)arg1 withColorIndex:(int)arg2;
- (void)dealloc;
- (id)init;

@end


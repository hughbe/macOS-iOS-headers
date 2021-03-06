//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LPPointUnit, LPTextViewStyle, NSColor;

__attribute__((visibility("hidden")))
@interface LPTapToLoadViewStyle : NSObject
{
    NSColor *_backgroundColor;
    NSColor *_tapHighlightColor;
    LPTextViewStyle *_caption;
    LPPointUnit *_width;
    LPPointUnit *_height;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LPPointUnit *height; // @synthesize height=_height;
@property(retain, nonatomic) LPPointUnit *width; // @synthesize width=_width;
@property(readonly, nonatomic) LPTextViewStyle *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) NSColor *tapHighlightColor; // @synthesize tapHighlightColor=_tapHighlightColor;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)initWithPlatform:(long long)arg1;

@end


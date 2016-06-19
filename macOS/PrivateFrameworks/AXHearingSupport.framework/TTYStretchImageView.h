//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImageView.h"

@class NSImage;

@interface TTYStretchImageView : NSImageView
{
    NSImage *_topLeft;
    NSImage *_top;
    NSImage *_topRight;
    NSImage *_left;
    NSImage *_center;
    NSImage *_right;
    NSImage *_bottomLeft;
    NSImage *_bottom;
    NSImage *_bottomRight;
}

+ (id)imageForRect:(struct CGRect)arg1 fromImage:(id)arg2;
@property(retain, nonatomic) NSImage *bottomRight; // @synthesize bottomRight=_bottomRight;
@property(retain, nonatomic) NSImage *bottom; // @synthesize bottom=_bottom;
@property(retain, nonatomic) NSImage *bottomLeft; // @synthesize bottomLeft=_bottomLeft;
@property(retain, nonatomic) NSImage *right; // @synthesize right=_right;
@property(retain, nonatomic) NSImage *center; // @synthesize center=_center;
@property(retain, nonatomic) NSImage *left; // @synthesize left=_left;
@property(retain, nonatomic) NSImage *topRight; // @synthesize topRight=_topRight;
@property(retain, nonatomic) NSImage *top; // @synthesize top=_top;
@property(retain, nonatomic) NSImage *topLeft; // @synthesize topLeft=_topLeft;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)setImage:(id)arg1 withInsets:(struct NSEdgeInsets)arg2;

@end


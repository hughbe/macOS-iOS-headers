//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface WDBorder : NSObject <NSCopying>
{
    int mStyle;
    OITSUColor *mColor;
    unsigned char mWidth;
    unsigned char mSpace;
    BOOL mShadow;
    BOOL mFrame;
}

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setFrame:(BOOL)arg1;
- (BOOL)frame;
- (void)setShadow:(BOOL)arg1;
- (BOOL)shadow;
- (void)setSpace:(unsigned char)arg1;
- (unsigned char)space;
- (void)setWidth:(unsigned char)arg1;
- (unsigned char)width;
- (void)setColor:(id)arg1;
- (id)color;
- (void)setStyle:(int)arg1;
- (int)style;
- (void)setSingleBlackBorder;
- (void)setNullBorder;
- (void)setBorder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToBorder:(id)arg1;
- (void)dealloc;
- (id)init;

@end


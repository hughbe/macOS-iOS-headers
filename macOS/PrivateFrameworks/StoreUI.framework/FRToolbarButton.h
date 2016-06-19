//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class NSArray, NSImage, NSString;

@interface FRToolbarButton : NSButton
{
    unsigned long long _badgeCount;
    NSImage *_glyph;
    NSArray *_badgeGlyphs;
    NSString *_nonAttributedTitle;
}

@property(readonly, nonatomic) NSString *nonAttributedTitle; // @synthesize nonAttributedTitle=_nonAttributedTitle;
@property(readonly, nonatomic) NSArray *badgeGlyphs; // @synthesize badgeGlyphs=_badgeGlyphs;
@property(readonly, nonatomic) NSImage *glyph; // @synthesize glyph=_glyph;
@property(nonatomic) unsigned long long badgeCount; // @synthesize badgeCount=_badgeCount;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setEnabled:(BOOL)arg1;

@end


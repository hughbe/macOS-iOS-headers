//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSAttributedString.h"

@interface NSAttributedString (ParsecExtras)
+ (id)_safari_attributedStringWithGlyphCount:(unsigned long long)arg1 glyphStringGenerator:(CDUnknownBlockType)arg2;
+ (id)_safari_attributedStringWithGlyph:(id)arg1 baselineOffset:(double)arg2 shouldSkipHighlighting:(BOOL)arg3;
+ (id)safari_attributedStringWithGlyphRepresentations:(id)arg1 session:(id)arg2;
+ (id)safari_attributedStringWithGlyphRepresentation:(id)arg1 session:(id)arg2 shouldSkipHighlighting:(BOOL)arg3;
+ (id)safari_attributedStringWithGlyphs:(id)arg1;
+ (id)safari_attributedStringWithGlyph:(id)arg1 shouldSkipHighlighting:(BOOL)arg2;
- (BOOL)safari_endsWithWhitespace;
@end


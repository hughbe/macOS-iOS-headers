//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

#import <AppKit/NSPasteboardReading-Protocol.h>
#import <AppKit/NSPasteboardWriting-Protocol.h>

@interface NSString (NSTextFinderAdditions) <NSPasteboardWriting, NSPasteboardReading>
+ (id)readableTypesForPasteboard:(id)arg1;
- (struct _NSRange)_textfinder_firstMatchForRegularExpression:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)stringWithoutAmpersand;
- (struct _NSRange)rangeOfGraphicalSegmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)_endOfParagraphAtIndex:(unsigned long long)arg1;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)initWithPasteboardPropertyList:(id)arg1 ofType:(id)arg2;
- (BOOL)_hasLocalizedCaseInsensitivePrefix:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end


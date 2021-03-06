//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (PCAdditions)
- (id)stringByTrimmingLeadingWhitespace;
- (id)stringByTrimmingLeadingCharactersInSet:(id)arg1;
- (id)stringByRemovingCharactersInSet:(id)arg1;
- (BOOL)isNewline;
- (BOOL)isAllWhitespaceAndNewline;
- (BOOL)isAllWhitespace;
- (unsigned long long)UTF32CharacterCount;
- (unsigned long long)glyphCount;
- (unsigned long long)composedCharacterCount;
@end


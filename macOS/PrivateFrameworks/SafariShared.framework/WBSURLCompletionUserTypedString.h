//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WBSURLCompletionUserTypedString : NSObject
{
    NSString *_string;
    const unsigned short *_unichars;
    const char *_chars;
    int _length;
    BOOL _containsAnySpaces;
    BOOL _ownsUnichars;
    BOOL _ownsChars;
}

+ (void)initialize;
@property(readonly, nonatomic) NSString *normalizedString; // @synthesize normalizedString=_string;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithString:(id)arg1;

@end


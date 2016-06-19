//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRTextAreaChange.h>

@class _SCRTextAreaChangeSimple;

__attribute__((visibility("hidden")))
@interface _SCRTextAreaReplacement : SCRTextAreaChange
{
    _SCRTextAreaChangeSimple *_left;
    _SCRTextAreaChangeSimple *_right;
}

@property(retain, nonatomic) _SCRTextAreaChangeSimple *right; // @synthesize right=_right;
@property(retain, nonatomic) _SCRTextAreaChangeSimple *left; // @synthesize left=_left;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isTruncated;
- (unsigned long long)length;
- (id)marker;
- (id)value;
- (long long)editType;
- (BOOL)containedByRange:(id)arg1 forUIElement:(id)arg2;
- (void)addValueToOutputRequest:(id)arg1 typingEchoPreference:(unsigned long long)arg2;
- (id)description;
- (void)dealloc;

@end


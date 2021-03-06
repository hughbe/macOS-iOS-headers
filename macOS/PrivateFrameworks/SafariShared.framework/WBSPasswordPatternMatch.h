//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WBSPasswordPatternMatch : NSObject
{
    unsigned long long _type;
    NSString *_matchedSubstring;
    double _guessesRequired;
    NSDictionary *_userInfo;
    struct _NSRange _range;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) double guessesRequired; // @synthesize guessesRequired=_guessesRequired;
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(readonly, copy, nonatomic) NSString *matchedSubstring; // @synthesize matchedSubstring=_matchedSubstring;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)compactDescriptionWithMatchedStringColumnWidth:(unsigned long long)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long endIndex;
- (id)initExhaustiveSearchPatternWithMatchedSubstring:(id)arg1 range:(struct _NSRange)arg2;
- (id)initWithType:(unsigned long long)arg1 matchedSubstring:(id)arg2 range:(struct _NSRange)arg3 guessesRequired:(double)arg4 userInfo:(id)arg5;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReaderCore/SCRCMathSimpleExpression.h>

__attribute__((visibility("hidden")))
@interface SCRCMathIdentifierExpression : SCRCMathSimpleExpression
{
    long long _fontStyle;
}

@property(readonly, nonatomic) long long fontStyle; // @synthesize fontStyle=_fontStyle;
- (BOOL)canFormWordStartingWithExpression:(id)arg1;
- (BOOL)isNaturalSuperscript;
- (BOOL)_isPrime;
- (BOOL)isNumber;
- (id)mathMLString;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2 isPartOfWord:(BOOL)arg3;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end


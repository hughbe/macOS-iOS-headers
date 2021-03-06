//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKRule : NSObject
{
    long long _salience;
}

+ (id)ruleWithBlockPredicate:(CDUnknownBlockType)arg1 action:(CDUnknownBlockType)arg2;
+ (id)ruleWithPredicate:(id)arg1 retractingFact:(id)arg2 grade:(float)arg3;
+ (id)ruleWithPredicate:(id)arg1 assertingFact:(id)arg2 grade:(float)arg3;
@property(nonatomic) long long salience; // @synthesize salience=_salience;
- (void)performActionWithSystem:(id)arg1;
- (BOOL)evaluatePredicateWithSystem:(id)arg1;

@end


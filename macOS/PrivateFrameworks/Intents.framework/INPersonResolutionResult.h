//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INIntentResolutionResult.h>

@interface INPersonResolutionResult : INIntentResolutionResult
{
}

+ (id)unsupportedWithReason:(long long)arg1 alternativePeople:(id)arg2;
+ (id)needsMoreDetailsForPerson:(id)arg1;
+ (id)confirmationRequiredWithPersonToConfirm:(id)arg1;
+ (id)disambiguationWithPeopleToDisambiguate:(id)arg1;
+ (id)successWithResolvedPerson:(id)arg1;

@end


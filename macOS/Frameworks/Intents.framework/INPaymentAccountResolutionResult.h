//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntentResolutionResult.h>

@interface INPaymentAccountResolutionResult : INIntentResolutionResult
{
}

+ (id)confirmationRequiredWithPaymentAccountToConfirm:(id)arg1;
+ (id)disambiguationWithPaymentAccountsToDisambiguate:(id)arg1;
+ (id)successWithResolvedPaymentAccount:(id)arg1;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;

@end


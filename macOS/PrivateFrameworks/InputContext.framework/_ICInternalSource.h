//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <InputContext/_ICPredictionSourcing-Protocol.h>

@interface _ICInternalSource : NSObject <_ICPredictionSourcing>
{
}

- (void)hibernate;
- (void)warmUp;
- (void)searchForMeCardEmailAddressesWithTimeout:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)searchForMeCardRegionsWithTimeout:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (id)localizedStringForKey:(id)arg1 withLocale:(id)arg2;
- (void)predictedItemsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(unsigned long long)arg4 handler:(CDUnknownBlockType)arg5;

@end


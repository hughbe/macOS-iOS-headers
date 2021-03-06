//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGHarvestEligibility : NSObject
{
}

+ (CDUnknownBlockType)genericItemEligibleBlock;
+ (CDUnknownBlockType)genericItemIneligibleBlock;
+ (CDUnknownBlockType)messagesAppItemEligibilityCheckBlock;
+ (CDUnknownBlockType)mailAppItemEligibilityCheckBlock;
+ (BOOL)searchableItemIsEligibleForHarvesting:(id)arg1 eligibleExceptForAge:(char *)arg2;
+ (BOOL)searchableItemIsStoredEncrypted:(id)arg1 bundleIdentifier:(id)arg2;
+ (BOOL)searchableItemIsEligibleForDissectorPipeline:(id)arg1;
+ (BOOL)searchableItemIsEligibleForDeferredHarvesting:(id)arg1;

@end


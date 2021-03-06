//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICSearchRankingQueryUtils : NSObject
{
}

+ (id)rankingQueryForDescriptor:(id)arg1 searchString:(id)arg2;
+ (id)rankingQueriesForSearchString:(id)arg1 withRankingQueryDefinition:(id)arg2;
+ (long long)bitOfRankingQueryDescriptor:(id)arg1 inRankingQueryBitDictionary:(id)arg2;
+ (id)spotlightMixedRankingQueryBitDictionary;
+ (id)spotlightMixedRankingQueryDefinition;
+ (id)spotlightSubstringRankingQueryBitDictionary;
+ (id)spotlightSubstringRankingQueryDefinition;
+ (id)spotlightPrefixRankingQueryBitDictionary;
+ (id)spotlightPrefixRankingQueryDefinition;

@end


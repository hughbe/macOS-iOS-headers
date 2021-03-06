//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;
@protocol PGPersonResult;

@interface PGSharingSuggestionResult : NSObject
{
    BOOL _useContactSuggestion;
    id <PGPersonResult> _person;
    double _weight;
    double _sourceWeight;
    NSArray *_sourceNames;
}

+ (id)suggestionResultWithPerson:(id)arg1 weight:(double)arg2 sourceWeight:(double)arg3 sourceName:(id)arg4;
- (void).cxx_destruct;
@property(nonatomic) BOOL useContactSuggestion; // @synthesize useContactSuggestion=_useContactSuggestion;
@property(readonly, nonatomic) NSArray *sourceNames; // @synthesize sourceNames=_sourceNames;
@property(readonly, nonatomic) double sourceWeight; // @synthesize sourceWeight=_sourceWeight;
@property(readonly, nonatomic) double weight; // @synthesize weight=_weight;
@property(readonly, nonatomic) id <PGPersonResult> person; // @synthesize person=_person;
- (id)description;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) double score;
- (void)mergeWithSuggestionResult:(id)arg1;
- (id)initWithPerson:(id)arg1 weight:(double)arg2 sourceWeight:(double)arg3 sourceName:(id)arg4;

@end


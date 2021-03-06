//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _DKEventStream;
@protocol _DKKnowledgeQuerying;

@interface _CDSpotlightEventIndexerDataSource : NSObject
{
    id <_DKKnowledgeQuerying> _knowledgeStore;
    _DKEventStream *_stream;
}

+ (unsigned long long)currentVersion;
- (void).cxx_destruct;
@property(readonly, nonatomic) _DKEventStream *stream; // @synthesize stream=_stream;
@property(readonly, nonatomic) id <_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
- (id)bundleIDToSearchableItemsDictionaryFromEvents:(id)arg1;
- (id)bundleIDToSearchableItemsDictionaryWithCreationDateInInterval:(id)arg1 limit:(long long)arg2 nextBatch:(char *)arg3 latestCreationDate:(id *)arg4 error:(id *)arg5;
- (id)searchableItemIdentifiersForTombstonedEventsInInterval:(id)arg1 latestTombstoneDate:(id *)arg2 error:(id *)arg3;
- (id)searchableItemUniqueIdentifierWithDomain:(id)arg1 indexingIdentifier:(id)arg2;
- (id)earliestEventCreationDateWithError:(id *)arg1;
- (id)initWithKnowledgeStore:(id)arg1 eventStream:(id)arg2;

@end


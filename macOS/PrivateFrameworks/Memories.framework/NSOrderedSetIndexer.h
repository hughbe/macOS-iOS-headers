//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet, NSOrderedSet;

__attribute__((visibility("hidden")))
@interface NSOrderedSetIndexer : NSObject
{
    NSOrderedSet *_initialOrderedSet;
    NSOrderedSet *_finalOrderedSet;
    NSIndexSet *_insertedIndexesAfterDeletions;
    NSIndexSet *_deletedIndexesBeforeInsertions;
}

+ (id)indexerWithInitialSet:(id)arg1 finalSet:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexSet *deletedIndexesBeforeInsertions; // @synthesize deletedIndexesBeforeInsertions=_deletedIndexesBeforeInsertions;
@property(retain, nonatomic) NSIndexSet *insertedIndexesAfterDeletions; // @synthesize insertedIndexesAfterDeletions=_insertedIndexesAfterDeletions;
@property(retain, nonatomic) NSOrderedSet *finalOrderedSet; // @synthesize finalOrderedSet=_finalOrderedSet;
@property(retain, nonatomic) NSOrderedSet *initialOrderedSet; // @synthesize initialOrderedSet=_initialOrderedSet;
- (void)analyze;
- (id)initWithInitialSet:(id)arg1 finalSet:(id)arg2;

@end


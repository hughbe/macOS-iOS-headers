//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSArray (_PASAdditions)
- (void)_pas_enumerateChunksOfSize:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_pas_shuffledArrayUsingRng:(id)arg1;
- (id)_pas_rightFoldWithInitialObject:(id)arg1 accumulate:(CDUnknownBlockType)arg2;
- (id)_pas_rightFoldWithInitialObject:(id)arg1 indexedAccumulate:(CDUnknownBlockType)arg2;
- (id)_pas_leftFoldWithInitialObject:(id)arg1 accumulate:(CDUnknownBlockType)arg2;
- (id)_pas_leftFoldWithInitialObject:(id)arg1 indexedAccumulate:(CDUnknownBlockType)arg2;
- (id)_pas_filteredArrayWithTest:(CDUnknownBlockType)arg1;
- (id)_pas_filteredArrayWithIndexedTest:(CDUnknownBlockType)arg1;
- (id)_pas_mappedArrayWithTransform:(CDUnknownBlockType)arg1;
- (id)_pas_mappedArrayWithIndexedTransform:(CDUnknownBlockType)arg1;
@end


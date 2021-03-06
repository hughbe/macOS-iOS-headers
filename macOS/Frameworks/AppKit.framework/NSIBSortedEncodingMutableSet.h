//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableSet.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSIBSortedEncodingMutableSet : NSMutableSet
{
    NSMutableArray *storageArray;
    CDUnknownBlockType comparator;
    BOOL needsSorting;
}

- (void)getObjects:(id *)arg1;
- (id)allObjects;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (Class)classForCoder;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)objectEnumerator;
- (id)member:(id)arg1;
- (unsigned long long)count;
- (void)sortStorageArray;
- (void)dealloc;
- (id)initWithSet:(id)arg1 comparator:(CDUnknownBlockType)arg2;

@end


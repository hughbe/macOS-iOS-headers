//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSFastEnumeration-Protocol.h>

@class NSArray, NSHashTable;

@interface CRKPointerSet : NSObject <NSFastEnumeration>
{
    NSHashTable *mBackingStore;
}

+ (id)setWithSet:(id)arg1;
+ (id)setWithArray:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)setByIntersectingSet:(id)arg1;
- (id)setBySubtractingSet:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *allObjects;
@property(readonly, nonatomic) long long count;
- (BOOL)isSubsetOfSet:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)addObject:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;

@end


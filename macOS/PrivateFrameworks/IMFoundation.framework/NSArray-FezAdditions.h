//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSArray.h"

@interface NSArray (FezAdditions)
- (id)__imArrayByApplyingBlock:(CDUnknownBlockType)arg1 filter:(CDUnknownBlockType)arg2;
- (id)__imArrayByApplyingBlock:(CDUnknownBlockType)arg1;
- (id)__imArrayByFilteringWithBlock:(CDUnknownBlockType)arg1;
- (void)__imForEach:(CDUnknownBlockType)arg1;
- (BOOL)containsObject:(id)arg1 matchingComparison:(SEL)arg2;
- (long long)indexOfObject:(id)arg1 matchingComparison:(SEL)arg2;
- (BOOL)containsObjectIdenticalTo:(id)arg1;
- (id)__imFirstObject;
- (id)_copyForEnumerating;
- (BOOL)_hasSameMembers:(id)arg1;
- (id)__imDeepCopy;
- (BOOL)__imIsMutable;
- (id)__imSetFromArray;
- (id)__IMStripPotentialTokenURIs;
@end


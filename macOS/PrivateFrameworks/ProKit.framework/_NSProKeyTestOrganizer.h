//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _NSProKeyTestOrganizer : NSObject
{
    struct _renditionkeytoken originalKey[14];
    NSArray *orderedNonZeroFlexibleAttributes;
    long long flexAttributesCount;
    struct _renditionkeytoken testKey[14];
    long long chooseCount;
    long long subchooseCount;
}

- (struct _renditionkeytoken *)nextKey;
- (void)dealloc;
- (id)initWithRenditionKey:(const struct _renditionkeytoken *)arg1;
- (void)_bumpTestKey;
- (BOOL)_bumpTestKeyAttributeIndex:(long long)arg1;
- (unsigned long long)_attributeToBumpIndex;
- (id)_nonZeroFlexibleAttributesInKey:(const struct _renditionkeytoken *)arg1;

@end


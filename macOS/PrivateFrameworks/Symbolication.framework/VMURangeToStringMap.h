//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSMutableArray;

@interface VMURangeToStringMap : NSObject <NSSecureCoding>
{
    NSMutableArray *_strings;
    void *_stringToIndexMapVoidPtr;
    void *_rangeAndStringVectorVoidPtr;
    BOOL _sorted;
}

+ (void)initialize;
+ (void)_claimUnarchivingOfClass:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (struct _VMURange)rangeContainingAddress:(unsigned long long)arg1;
- (id)stringForAddress:(unsigned long long)arg1;
- (void)setString:(id)arg1 forRange:(struct _VMURange)arg2;
- (unsigned int)_indexForString:(id)arg1;
- (void)sort;
- (unsigned int)uniquedStringCount;
- (unsigned int)count;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end


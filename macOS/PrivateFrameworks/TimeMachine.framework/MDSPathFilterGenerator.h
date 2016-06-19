//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary;

@interface MDSPathFilterGenerator : NSObject
{
    NSMutableDictionary *_namedRoots;
    NSMutableArray *_namedRootArray;
    NSMutableDictionary *_namedRootIndexes;
    NSMutableArray *_auxValueArray;
    int _nextAuxValueIndex;
    BOOL _processExtensions;
    int _auxValueCount;
    NSMutableDictionary *_namedLinkExtensionsDictionary;
    NSDictionary *_namedLinkPrefixesDictionary;
    unsigned long long _atBundleMask;
    unsigned long long _inBundleMask;
    unsigned long long _inheritMask;
    unsigned long long _defaultRule;
    unsigned long long _defaultMask;
    unsigned long long _ignoreMask;
}

- (void)dump;
- (id)filterDataForMountDepth:(int)arg1;
- (struct _MDPlistContainer *)copyFilterMDPlistForMountDepth:(int)arg1;
- (void)addRules:(CDStruct_bcaf8faf *)arg1 withPrefix:(id)arg2;
- (void)addNamed:(id)arg1 auxValue:(unsigned long long)arg2 forPath:(id)arg3;
- (void)addNamed:(id)arg1 field:(int)arg2 value:(int)arg3 forPath:(id)arg4 permitLink:(BOOL)arg5;
- (void)addNamed:(id)arg1 field:(int)arg2 value:(int)arg3 hasAuxValue:(BOOL)arg4 auxValue:(unsigned long long)arg5 forPath:(id)arg6 permitLink:(BOOL)arg7 copyParentWildcardLink:(BOOL)arg8;
- (void)setAtBundleField:(unsigned int)arg1 inBundleField:(unsigned int)arg2;
- (void)addMappedExtensions:(id)arg1;
- (void)dealloc;
- (id)initWithDefaultFieldsAndValues:(int *)arg1 ignoreFields:(int *)arg2 mappedPrefixes:(id)arg3 hiddenExtensions:(id)arg4 mappedExtensions:(id)arg5;

@end


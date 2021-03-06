//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface OITSUPathSet : NSObject <NSCopying>
{
    NSMutableSet *mPaths;
    NSMutableDictionary *mBasePathToNumberMap;
    OITSUPathSet *mUnderlyingSet;
}

+ (void)processPath:(id)arg1 base:(id *)arg2 hasBaseNumber:(char *)arg3 baseNumber:(unsigned int *)arg4 extension:(id *)arg5;
+ (id)parseNumberOutOfBasename:(id)arg1 hasNumber:(char *)arg2 number:(unsigned int *)arg3;
- (void)unionPathSet:(id)arg1;
- (void)setUnderlyingPathSet:(id)arg1;
- (BOOL)isPathUsed:(id)arg1;
- (void)pathIsNoLongerUsed:(id)arg1;
- (void)pathIsUsed:(id)arg1;
- (id)addPath:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithPaths:(id)arg1 basePathToNumberMap:(id)arg2;

@end


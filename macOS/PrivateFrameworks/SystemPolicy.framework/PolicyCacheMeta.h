//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, PolicyScanCacheTarget;

@interface PolicyCacheMeta : NSObject
{
    NSNumber *_metaId;
    NSNumber *_missCount;
    NSDate *_lastMiss;
    NSNumber *_forEntry;
    long long _sourceTable;
    PolicyScanCacheTarget *_target;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PolicyScanCacheTarget *resolvedEntry; // @synthesize resolvedEntry=_target;
@property(nonatomic) long long sourceTable; // @synthesize sourceTable=_sourceTable;
@property(retain, nonatomic) NSNumber *forEntry; // @synthesize forEntry=_forEntry;
@property(retain, nonatomic) NSDate *lastMiss; // @synthesize lastMiss=_lastMiss;
@property(retain, nonatomic) NSNumber *missCount; // @synthesize missCount=_missCount;
@property(retain, nonatomic) NSNumber *metaId; // @synthesize metaId=_metaId;

@end


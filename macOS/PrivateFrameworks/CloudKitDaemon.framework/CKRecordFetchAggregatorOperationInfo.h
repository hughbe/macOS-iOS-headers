//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CKDatabaseOperationInfo.h"

@class NSSet;

__attribute__((visibility("hidden")))
@interface CKRecordFetchAggregatorOperationInfo : CKDatabaseOperationInfo
{
    BOOL _fetchAssetContents;
    BOOL _preserveOrdering;
    NSSet *_desiredKeys;
}

@property(retain, nonatomic) NSSet *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(nonatomic) BOOL preserveOrdering; // @synthesize preserveOrdering=_preserveOrdering;
@property(nonatomic) BOOL fetchAssetContents; // @synthesize fetchAssetContents=_fetchAssetContents;
- (void).cxx_destruct;
- (id)init;

@end


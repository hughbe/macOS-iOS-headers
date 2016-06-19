//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSURL;

@interface CPLStatus : NSObject
{
    NSURL *_statusFileURL;
    NSMutableDictionary *_status;
    NSObject<OS_dispatch_queue> *_lock;
}

- (void).cxx_destruct;
- (id)statusDescription;
@property(readonly, nonatomic) NSDate *cloudAssetCountPerTypeLastCheckDate;
- (void)setCloudAssetCountPerType:(id)arg1 updateCheckDate:(BOOL)arg2;
@property(readonly, nonatomic) NSDictionary *cloudAssetCountPerType;
@property(nonatomic) BOOL iCloudLibraryExists;
@property(nonatomic) BOOL iCloudLibraryHasBeenWiped;
@property(copy, nonatomic) NSDate *exitDeleteTime;
@property(nonatomic) BOOL isExceedingQuota;
@property(nonatomic) BOOL hasChangesToProcess;
@property(copy, nonatomic) NSDate *initialSyncDate;
@property(copy, nonatomic) NSDate *lastPruneDate;
@property(copy, nonatomic) NSDate *lastCompletePrefetchDate;
@property(copy, nonatomic) NSDate *lastSuccessfulSyncDate;
- (void)refetchFromDisk;
- (void)_save;
- (void)_loadIfNecessary;
- (id)initWithClientLibraryBaseURL:(id)arg1;

@end


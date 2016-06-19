//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface RDDiskSpaceManager : NSObject
{
    NSObject<OS_dispatch_queue> *_volumeQueue;
    NSMutableDictionary *_volumes;
}

+ (id)mountPointForPath:(id)arg1;
+ (unsigned long long)diskAvailableFreeSpaceForPath:(id)arg1;
+ (unsigned long long)fileSystemSizeForPath:(id)arg1;
+ (id)qualifyPath:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (unsigned long long)test_diskManagerAvailableFreeSpaceForPath:(id)arg1;
- (id)requestFreeSpace:(unsigned long long)arg1 forPath:(id)arg2 messageText:(id)arg3 informativeText:(id)arg4;
- (id)requestFreeSpace:(unsigned long long)arg1 forPath:(id)arg2;
- (void)endRequest:(id)arg1;
- (id)volumeRecordForRequest:(id)arg1;
- (id)freeSpaceRequestForPath:(id)arg1 bytes:(unsigned long long)arg2;
- (id)init;

@end


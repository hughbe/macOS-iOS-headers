//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, WBSCloudHistoryThrottler;

@protocol WBSCloudHistoryThrottlerDataStore <NSObject>
- (void)setRecordOfPastOperations:(NSData *)arg1 forThrottler:(WBSCloudHistoryThrottler *)arg2;
- (NSData *)recordOfPastOperationsForThrottler:(WBSCloudHistoryThrottler *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallHistory/NSObject-Protocol.h>

@class NSObject;
@protocol OS_dispatch_queue;

@protocol CHSynchronizable <NSObject>
- (BOOL)executeSyncWithBOOL:(BOOL (^)(void))arg1;
- (id)executeSyncWithResult:(id (^)(void))arg1;
- (void)executeSync:(void (^)(void))arg1;
- (void)execute:(void (^)(void))arg1;
- (NSObject<OS_dispatch_queue> *)queue;
@end


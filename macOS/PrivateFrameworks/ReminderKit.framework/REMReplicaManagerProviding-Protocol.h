//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReminderKit/NSObject-Protocol.h>

@class NSDictionary, NSSet, REMObjectID, REMReplicaManager;

@protocol REMReplicaManagerProviding <NSObject>
- (NSDictionary *)unsavedReplicaManagersForAccountIDs:(NSSet *)arg1;
- (REMReplicaManager *)replicaManagerForAccountID:(REMObjectID *)arg1;
@end


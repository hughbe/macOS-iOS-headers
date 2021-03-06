//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSPersistentHistoryTransaction.h>

#import <CoreData/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSManagedObjectID, NSPersistentStoreCoordinator, NSString;

__attribute__((visibility("hidden")))
@interface _NSPersistentHistoryTransaction : NSPersistentHistoryTransaction <NSSecureCoding>
{
    long long _rowIdentifier;
    double _timestamp;
    NSArray *_changes;
    NSString *_storeID;
    NSString *_bundleID;
    NSString *_processID;
    NSString *_contextName;
    NSString *_author;
    NSData *_queryGeneration;
    NSPersistentStoreCoordinator *_coordinator;
    NSManagedObjectID *_backingObjectID;
}

+ (BOOL)supportsSecureCoding;
- (id)_userInfoFromChanges;
- (id)objectIDNotification;
- (id)_backingObjectID;
- (id)author;
- (id)contextName;
- (id)processID;
- (id)bundleID;
- (id)storeID;
- (id)postQueryGenerationToken;
- (id)initialQueryGenerationToken;
- (id)token;
- (long long)transactionNumber;
- (id)changes;
- (void)_setChanges:(id)arg1;
- (id)timestamp;
- (void)_setCoordinator:(id)arg1;
- (id)_coordinator;
- (id)_persistentStore;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 andObjectID:(id)arg2;

@end


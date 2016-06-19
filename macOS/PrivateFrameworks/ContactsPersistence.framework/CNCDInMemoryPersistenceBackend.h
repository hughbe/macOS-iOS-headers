//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNCDPersistenceBackend.h"

@class NSMutableArray, NSPersistentStoreCoordinator, NSString;

@interface CNCDInMemoryPersistenceBackend : NSObject <CNCDPersistenceBackend>
{
    NSPersistentStoreCoordinator *_coordinator;
    NSMutableArray *_containers;
}

- (id)defaultContainer;
- (id)allContainers;
- (id)makePersistenceContextWithNotificationSource:(id)arg1;
- (id)makeManagedObjectContextWithConcurrencyType:(unsigned long long)arg1;
- (id)addAccountContainerWithName:(id)arg1 type:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


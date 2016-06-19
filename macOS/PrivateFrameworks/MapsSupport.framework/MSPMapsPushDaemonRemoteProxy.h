//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSPMapsPushDaemonProxy.h"
#import "MSPMapsPushDaemonProxyObserver.h"

@class NSMutableArray, NSString, NSXPCConnection;

@interface MSPMapsPushDaemonRemoteProxy : NSObject <MSPMapsPushDaemonProxyObserver, MSPMapsPushDaemonProxy>
{
    NSXPCConnection *_connection;
    NSMutableArray *_observers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)historyDidChange;
- (void)favoritesDidChange;
- (void)pushDaemonProxyReceivedNotificationData:(id)arg1 forType:(id)arg2 recordIdentifier:(id)arg3;
- (void)commitHistorySerializedRepresentation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchHistorySerializedRepresentationWithCompletion:(CDUnknownBlockType)arg1;
- (void)commitFavoritesSerializedRepresentation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchFavoritesSerializedRepresentationWithCompletion:(CDUnknownBlockType)arg1;
- (void)setShouldUseDevAPNS:(BOOL)arg1;
- (void)shouldUseDevAPNS:(CDUnknownBlockType)arg1;
- (void)removeProblemStatusResponseWithNotificationID:(id)arg1;
- (void)problemStatusResponseWithNotificationID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchCurrentAnnouncement:(CDUnknownBlockType)arg1;
- (void)clearBulletinWithRecordID:(id)arg1;
- (void)resetShownAnnouncements;
- (void)clearCurrentAnnouncement;
- (void)simulateAnnouncement:(id)arg1;
- (void)checkin;
- (void)fetchDevicePushToken:(CDUnknownBlockType)arg1;
- (void)fetchProblemStatus;
- (void)simulateProblemResolution;
- (void)registerForTopic;
- (void)_connectToDaemonIfNeeded;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)closeConnection;
- (void)openConnection;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


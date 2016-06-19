//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APSConnectionDelegate.h"
#import "NSXPCListenerDelegate.h"
#import "_KSTextReplacementCancellation.h"
#import "_KSTextReplacementServiceProtocol.h"
#import "_KSTextReplacementStoreProtocol.h"

@class APSConnection, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSXPCListener, _KSTextReplacementManager;

@interface _KSTextReplacementServer : NSObject <_KSTextReplacementServiceProtocol, NSXPCListenerDelegate, APSConnectionDelegate, _KSTextReplacementStoreProtocol, _KSTextReplacementCancellation>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    BOOL _setupAssistanceRunning;
    _KSTextReplacementManager *_textReplacementManager;
    APSConnection *_pushConnection;
    NSXPCListener *_listener;
    NSMutableDictionary *_clientsMap;
    NSMutableSet *_clientsWithReadAccess;
    NSString *_directoryPath;
}

+ (BOOL)isBlackListed:(unsigned int)arg1;
+ (id)_keyForConnection:(id)arg1;
+ (id)textReplacementServer;
@property(nonatomic) BOOL setupAssistanceRunning; // @synthesize setupAssistanceRunning=_setupAssistanceRunning;
@property(copy, nonatomic) NSString *directoryPath; // @synthesize directoryPath=_directoryPath;
@property(retain, nonatomic) NSMutableSet *clientsWithReadAccess; // @synthesize clientsWithReadAccess=_clientsWithReadAccess;
@property(retain, nonatomic) NSMutableDictionary *clientsMap; // @synthesize clientsMap=_clientsMap;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) APSConnection *pushConnection; // @synthesize pushConnection=_pushConnection;
- (void).cxx_destruct;
- (void)requestSyncWithCallback:(CDUnknownBlockType)arg1;
- (void)forceCloudKitSync:(BOOL)arg1;
- (void)importSampleShortcuts;
- (id)appleLanguagesPreference;
- (BOOL)sampleShortcutWasImported;
- (void)importSampleShortcutsIfNecessary;
- (void)buddySetupDidFinish;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)registerForPushNotifications;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)cancelPendingUpdatesWithReply:(CDUnknownBlockType)arg1;
- (BOOL)clientHasReadAccess;
- (void)queryTextReplacementsWithPredicate:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)queryTextReplacementEntriesWithReply:(CDUnknownBlockType)arg1;
- (void)requestSyncWithReply:(CDUnknownBlockType)arg1;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)queryTextReplacementsWithPredicate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)queryTextReplacementsWithCallback:(CDUnknownBlockType)arg1;
- (id)textReplacementEntries;
- (BOOL)_cancelPendingUpdateForClient:(id)arg1;
- (void)requestSyncWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)cancelPendingUpdates;
- (void)removeAllEntries;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 forClient:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)shutdown;
- (void)start;
- (void)cleanup;
@property(retain, nonatomic) _KSTextReplacementManager *textReplacementManager; // @synthesize textReplacementManager=_textReplacementManager;
- (BOOL)isSetupAssistantRunning;
- (void)dealloc;
- (id)initWithDatabaseDirectoryPath:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


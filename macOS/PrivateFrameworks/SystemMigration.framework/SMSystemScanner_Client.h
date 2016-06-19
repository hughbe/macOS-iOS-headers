//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MigratableEventsListener.h"

@class NSArray, NSHashTable, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSPredicate, NSSet, NSUUID, NSUserActivity, NSXPCConnection, NSXPCInterface, SMSystem_Client;

@interface SMSystemScanner_Client : NSObject <MigratableEventsListener>
{
    BOOL _automaticallyAdvertiseHandoff;
    BOOL _hostingWirelessAP;
    BOOL _attemptingWirelessNetworkSwitch;
    NSXPCInterface *daemonInterface;
    NSXPCConnection *daemonConnection;
    id <SMDPScannerProtocol> daemonProxy;
    NSXPCInterface *exportedInterface;
    NSArray *_systemSortDescriptors;
    NSPredicate *_displaySystemsFilter;
    NSUUID *_handoffPasscode;
    NSMutableSet *_observedSystems;
    NSMutableDictionary *_systemDict;
    NSObject<OS_dispatch_queue> *_systemDictQueue;
    SMSystem_Client *_currentSystem;
    unsigned long long _scannerState;
    NSHashTable *_scannerClients;
    NSHashTable *_systemEventListeners;
    NSUserActivity *_handoffActivity;
}

+ (id)nonWindowsSystemsOnlyPredicate;
+ (id)windowsSystemsOnlyPredicate;
+ (id)keyPathsForValuesAffectingDisplaySystems;
+ (id)migratableEventsListenerInterface;
+ (id)keyPathsForValuesAffectingAllSystems;
+ (id)sharedScannerClient;
@property(retain) NSUserActivity *handoffActivity; // @synthesize handoffActivity=_handoffActivity;
@property BOOL attemptingWirelessNetworkSwitch; // @synthesize attemptingWirelessNetworkSwitch=_attemptingWirelessNetworkSwitch;
@property BOOL hostingWirelessAP; // @synthesize hostingWirelessAP=_hostingWirelessAP;
@property(retain) NSHashTable *systemEventListeners; // @synthesize systemEventListeners=_systemEventListeners;
@property(retain) NSHashTable *scannerClients; // @synthesize scannerClients=_scannerClients;
@property unsigned long long scannerState; // @synthesize scannerState=_scannerState;
@property(retain) SMSystem_Client *currentSystem; // @synthesize currentSystem=_currentSystem;
@property(retain) NSObject<OS_dispatch_queue> *systemDictQueue; // @synthesize systemDictQueue=_systemDictQueue;
@property(retain) NSMutableDictionary *systemDict; // @synthesize systemDict=_systemDict;
@property(retain) NSMutableSet *observedSystems; // @synthesize observedSystems=_observedSystems;
@property(retain) NSUUID *handoffPasscode; // @synthesize handoffPasscode=_handoffPasscode;
@property BOOL automaticallyAdvertiseHandoff; // @synthesize automaticallyAdvertiseHandoff=_automaticallyAdvertiseHandoff;
@property(retain) NSPredicate *displaySystemsFilter; // @synthesize displaySystemsFilter=_displaySystemsFilter;
@property(retain) NSArray *systemSortDescriptors; // @synthesize systemSortDescriptors=_systemSortDescriptors;
@property(retain) NSXPCInterface *exportedInterface; // @synthesize exportedInterface;
@property(retain) id <SMDPScannerProtocol> daemonProxy; // @synthesize daemonProxy;
@property(retain) NSXPCConnection *daemonConnection; // @synthesize daemonConnection;
@property(retain) NSXPCInterface *daemonInterface; // @synthesize daemonInterface;
- (void).cxx_destruct;
- (void)stopAdvertisingHandoff;
- (void)startAdvertisingHandoffTargetWithIdentifier:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingSystem:(id)arg1;
- (void)startObservingSystem:(id)arg1;
- (void)notifyListenersOfChangedKey:(id)arg1 onSystem:(id)arg2;
- (void)notifyListenersOfRemovedSystem:(id)arg1;
- (void)notifyListenersOfNewSystem:(id)arg1;
- (void)removeSystemChangesListener:(id)arg1;
- (void)addNewSystemChangesListener:(id)arg1;
@property(readonly) __weak NSArray *displaySystems;
- (void)requestUIFocusOnSystem:(id)arg1;
- (void)systemChanged:(id)arg1;
- (void)systemDisappeared:(id)arg1;
- (void)systemAppeared:(id)arg1;
- (void)addNewSystem:(id)arg1;
- (void)updateAllChildReferences;
@property(readonly) unsigned long long actualScannerState;
- (void)unmount:(id)arg1;
- (void)mount:(id)arg1 withPassword:(id)arg2;
- (void)mount:(id)arg1;
- (void)addNonBonjourRemoteShare:(id)arg1;
- (void)connectionErrorOccurred:(id)arg1;
- (void)connectToDaemon;
- (id)xpcDictFromSystem:(id)arg1 includeOneTimeData:(BOOL)arg2;
- (id)findSystemByIdentifier:(id)arg1;
@property(readonly) NSSet *allSystems;
- (void)updateScannerState;
- (void)removeScannerClient:(id)arg1;
- (void)addScannerClient:(id)arg1;
- (void)dealloc;
- (id)init;

@end


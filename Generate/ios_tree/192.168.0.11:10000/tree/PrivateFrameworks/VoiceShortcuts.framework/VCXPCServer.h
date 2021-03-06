/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCXPCServer : NSObject <NSXPCConnectionDelegate, NSXPCListenerDelegate> {
    VCCoreDuetListener * _coreDuetListener;
    <VCDatabaseProvider> * _databaseProvider;
    bool  _skipEntitlementsCheck;
    VCCKShortcutSyncCoordinator * _syncCoordinator;
    <VCSyncDataEndpoint> * _syncDataEndpoint;
    WFTriggerManager * _triggerManager;
    VCVoiceShortcutManager * _voiceShortcutManager;
    NSXPCListener * _xpcListener;
}

@property (nonatomic, readonly) VCCoreDuetListener *coreDuetListener;
@property (nonatomic, readonly) <VCDatabaseProvider> *databaseProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool skipEntitlementsCheck;
@property (readonly) Class superclass;
@property (nonatomic, readonly) VCCKShortcutSyncCoordinator *syncCoordinator;
@property (nonatomic, readonly) <VCSyncDataEndpoint> *syncDataEndpoint;
@property (nonatomic, readonly) WFTriggerManager *triggerManager;
@property (nonatomic, readonly) VCVoiceShortcutManager *voiceShortcutManager;
@property (nonatomic, readonly) NSXPCListener *xpcListener;

- (void).cxx_destruct;
- (id)coreDuetListener;
- (id)databaseProvider;
- (id)endpoint;
- (id)exportedXPCInterface;
- (id)initWithDatabaseProvider:(id)arg1 coreDuetListener:(id)arg2 syncCoordinator:(id)arg3 syncDataEndpoint:(id)arg4;
- (id)initWithUnsecuredAnonymousListenerAndDatabaseProvider:(id)arg1;
- (id)initWithXPCListener:(id)arg1 databaseProvider:(id)arg2 coreDuetListener:(id)arg3 syncCoordinator:(id)arg4 syncDataEndpoint:(id)arg5;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (bool)skipEntitlementsCheck;
- (id)syncCoordinator;
- (id)syncDataEndpoint;
- (id)triggerManager;
- (id)voiceShortcutManager;
- (id)xpcListener;

@end

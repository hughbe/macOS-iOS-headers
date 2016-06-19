//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKInstallService.h"
#import "PKInstallServiceClient.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface PKInstallDaemonClient : NSObject <PKInstallService, PKInstallServiceClient>
{
    NSXPCConnection *_connection;
    int _clientPID;
    int _clientAuditIdentifier;
    unsigned int _clientUID;
    NSString *_clientPath;
    NSMutableSet *_outstandingInstallTokens;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

@property(readonly, retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)installDidEndForToken:(id)arg1;
- (void)installDidBeginCommitForToken:(id)arg1;
- (void)installDidBeginForToken:(id)arg1;
- (void)purgeOrphanedSandboxesOnVolume:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)purgeableSpaceForOrphanedSandboxesOnVolume:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)startPurgeOfSandboxesOnVolume:(id)arg1 purgeAmountNeeded:(unsigned long long)arg2 systemSandboxes:(BOOL)arg3 reply:(CDUnknownBlockType)arg4;
- (void)estimateOfPurgeableSpaceForSandboxesOnVolume:(id)arg1 systemSandboxes:(BOOL)arg2 reply:(CDUnknownBlockType)arg3;
- (void)currentStageStatusOfInstallRequest:(id)arg1 calculatePurgeableSize:(BOOL)arg2 reply:(CDUnknownBlockType)arg3;
- (void)registerAuthorizationFromInstallRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)adoptToken:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)tokenForCurrentCommitIgnoringBlockingClients:(BOOL)arg1 reply:(CDUnknownBlockType)arg2;
- (void)displayNamesForToken:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)installStatusForToken:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)addToken:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)tokenForInstallRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)cancelInstallsWherePossible;
- (BOOL)isWatchingInstallWithToken:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


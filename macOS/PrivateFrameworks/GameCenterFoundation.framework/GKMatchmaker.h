//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKDiscovery, GKMatch, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSSet;

@interface GKMatchmaker : NSObject
{
    BOOL _nearbyAdvertising;
    BOOL _wasNearbyBrowsing;
    BOOL _nearbyBrowsing;
    int _matching;
    CDUnknownBlockType _inviteHandler;
    GKMatch *_match;
    CDUnknownBlockType _inviteeResponseHandler;
    CDUnknownBlockType _recipientResponseHandler;
    NSSet *_invitees;
    NSDictionary *_inviteesByUserID;
    CDUnknownBlockType _nearbyPlayerHandler;
    CDUnknownBlockType _nearbyPlayerIDHandler;
    NSObject<OS_dispatch_queue> *_lookForInviteQueue;
    NSMutableDictionary *_nearbyPlayers;
    NSDate *_nearbyQueryLastCheckDate;
    GKDiscovery *_nearbyDiscovery;
    double _nearbyQueryAllowance;
    NSSet *_nearbyCompatibileHashes;
    NSMutableDictionary *_nearbyInvites;
    NSMutableArray *_shareInvitees;
}

+ (id)sharedMatchmaker;
+ (id)descriptionForNearbyDictionary:(id)arg1;
+ (id)syncQueue;
@property(retain, nonatomic) NSMutableArray *shareInvitees; // @synthesize shareInvitees=_shareInvitees;
@property(retain, nonatomic) NSMutableDictionary *nearbyInvites; // @synthesize nearbyInvites=_nearbyInvites;
@property(retain, nonatomic) NSSet *nearbyCompatibileHashes; // @synthesize nearbyCompatibileHashes=_nearbyCompatibileHashes;
@property(nonatomic) double nearbyQueryAllowance; // @synthesize nearbyQueryAllowance=_nearbyQueryAllowance;
@property(retain, nonatomic) GKDiscovery *nearbyDiscovery; // @synthesize nearbyDiscovery=_nearbyDiscovery;
@property(retain, nonatomic) NSDate *nearbyQueryLastCheckDate; // @synthesize nearbyQueryLastCheckDate=_nearbyQueryLastCheckDate;
@property(nonatomic) BOOL nearbyBrowsing; // @synthesize nearbyBrowsing=_nearbyBrowsing;
@property(nonatomic) BOOL wasNearbyBrowsing; // @synthesize wasNearbyBrowsing=_wasNearbyBrowsing;
@property(retain) NSMutableDictionary *nearbyPlayers; // @synthesize nearbyPlayers=_nearbyPlayers;
@property(nonatomic) BOOL nearbyAdvertising; // @synthesize nearbyAdvertising=_nearbyAdvertising;
@property int matching; // @synthesize matching=_matching;
@property(nonatomic) NSObject<OS_dispatch_queue> *lookForInviteQueue; // @synthesize lookForInviteQueue=_lookForInviteQueue;
@property(copy, nonatomic) CDUnknownBlockType nearbyPlayerIDHandler; // @synthesize nearbyPlayerIDHandler=_nearbyPlayerIDHandler;
@property(copy, nonatomic) CDUnknownBlockType nearbyPlayerHandler; // @synthesize nearbyPlayerHandler=_nearbyPlayerHandler;
@property(retain) NSDictionary *inviteesByUserID; // @synthesize inviteesByUserID=_inviteesByUserID;
@property(retain, nonatomic) NSSet *invitees; // @synthesize invitees=_invitees;
@property(copy, nonatomic) CDUnknownBlockType recipientResponseHandler; // @synthesize recipientResponseHandler=_recipientResponseHandler;
@property(copy, nonatomic) CDUnknownBlockType inviteeResponseHandler; // @synthesize inviteeResponseHandler=_inviteeResponseHandler;
@property(retain, nonatomic) GKMatch *match; // @synthesize match=_match;
@property(copy, nonatomic) CDUnknownBlockType inviteHandler; // @synthesize inviteHandler=_inviteHandler;
- (void)setNearbyPlayerFailed:(id)arg1;
- (void)setNearbyPlayerDeclined:(id)arg1 reason:(long long)arg2;
- (void)setNearbyPlayerAccepted:(id)arg1 connectionData:(id)arg2;
- (void)inviteeDeclinedNotification:(id)arg1;
- (void)inviteeAcceptedNotification:(id)arg1;
- (void)localPlayerAcceptedGameInviteNotification:(id)arg1;
- (void)localPlayerAcceptedGameInvite;
- (long long)responseForDeclineReason:(long long)arg1;
- (void)stopBrowsingForNearbyPlayers;
- (void)startBrowsingForNearbyPlayersWithReachableHandler:(CDUnknownBlockType)arg1;
- (void)startBrowsingForNearbyPlayersWithHandler:(CDUnknownBlockType)arg1;
- (void)queryActivityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)queryPlayerGroupActivity:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)finishMatchmakingForMatch:(id)arg1;
- (void)cancel;
- (void)cancelInviteToPlayer:(id)arg1;
- (void)cancelPendingInviteToPlayer:(id)arg1;
- (void)cancelPendingInvitesAndMarkInviteComplete:(BOOL)arg1;
- (void)doneMatchmaking;
- (void)findRematchForMatch:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addPlayersForHostedMatchRequest:(id)arg1 existingPlayerCount:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addPlayersToMatch:(id)arg1 matchRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)findPlayersForHostedMatchRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)findPlayersForHostedRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)findMatchForRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setShareInvitees:(id)arg1 propogateToDaemon:(BOOL)arg2;
- (void)loadURLForMatch:(id)arg1 matchRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)matchWithRequest:(id)arg1 currentMatch:(id)arg2 hostedCurrentPlayerCount:(long long)arg3 serverHosted:(BOOL)arg4 rematchID:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_request:(id)arg1 match:(id)arg2 rematchID:(id)arg3 serverHosted:(BOOL)arg4 playerCount:(long long)arg5 connectionData:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)invitePlayersWithRequest:(id)arg1 serverHosted:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)invitePlayersWithRequest:(id)arg1 serverHosted:(BOOL)arg2 onlineConnectionData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)reportResponse:(long long)arg1 forInvitees:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)matchForInvite:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)matchForRemoteInvite:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)matchForNearbyInvite:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)respondToHostedInvite:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)lookForInvite;
- (BOOL)removeInvitee:(id)arg1;
@property(readonly, nonatomic) BOOL hasInviteListener;
- (void)registeredListentersChanged;
- (void)finishedAuthenticating;
- (void)dealloc;
- (void)setConnectivitySettings:(id)arg1;
- (void)loadConnectivitySettingsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (void)nearbyInviteWasCancelled:(id)arg1 fromDevice:(id)arg2;
- (void)declineNearbyInviteFromDevice:(id)arg1 reason:(long long)arg2;
- (void)acceptNearbyInvite:(id)arg1 connectionData:(id)arg2;
- (void)localPlayerAcceptedNearbyInvite:(id)arg1;
- (void)localPlayerRespondedToNearbyInvite:(id)arg1;
- (void)declineReceivedNearbyInvites;
- (id)nearbyInviteFromPlayer:(id)arg1;
- (void)removeNearbyInviteFromPlayer:(id)arg1;
- (void)saveNearbyInvite:(id)arg1 fromPlayer:(id)arg2;
- (void)presentNearbyInvite:(id)arg1 fromDevice:(id)arg2;
- (void)handleNearbyInvite:(id)arg1 fromDevice:(id)arg2;
- (void)sendProfileResponseToDevice:(id)arg1;
- (void)handleNearbyProfileQuery:(id)arg1 fromDevice:(id)arg2;
- (void)setNearbyPlayerFailed:(id)arg1 deviceID:(id)arg2;
- (void)setNearbyPlayerDeclined:(id)arg1 deviceID:(id)arg2 reason:(long long)arg3;
- (void)setNearbyPlayerAccepted:(id)arg1 deviceID:(id)arg2 connectionData:(id)arg3;
- (void)handleNearbyInviteResponse:(id)arg1 fromDevice:(id)arg2;
- (void)cancelSentNearbyInvites;
- (void)cancelNearbyInvitesToPlayers:(id)arg1;
- (void)inviteAnyNearbyPlayersWithRequest:(id)arg1;
- (id)nearbyDevicesForPlayer:(id)arg1 withState:(long long)arg2;
- (void)setNearbyDevice:(id)arg1 reachable:(BOOL)arg2;
- (int)numberOfNearbyDevicesForPlayer:(id)arg1 withState:(long long)arg2;
- (void)handleNearbyProfileResponse:(id)arg1 fromDevice:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)lostNearbyDeviceID:(id)arg1;
- (void)foundNearbyDeviceID:(id)arg1 discoveryInfo:(id)arg2;
- (void)stopNearbyBrowsing;
- (void)startNearbyBrowsing;
- (void)updateNearbyAdvertising;
- (void)stopNearbyAdvertising;
- (void)startNearbyAdvertising;
- (id)hashForCurrentGame;
- (id)hashForBundleID:(id)arg1 version:(id)arg2;
- (id)nearbyDeviceWithDeviceID:(id)arg1;
- (id)_nearbyDeviceWithDeviceID:(id)arg1;
- (void)generateHashedCompatibiltySet;
- (id)unreleasedHash;
- (BOOL)compatibilityMatrix:(id)arg1 includesAppWithBundleID:(id)arg2 version:(id)arg3;
- (void)loadCompatabilityMatrixAsDictionaryWithHandler:(CDUnknownBlockType)arg1;
- (void)loadPhotoDataDictionaryWithHandler:(CDUnknownBlockType)arg1;
- (id)profileDictionaryForLocalPlayer;
- (BOOL)shouldRespondToNearbyQuery;
- (void)determineIfShouldRespondToNearbyPlayer:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)receivedData:(id)arg1 fromNearbyDeviceID:(id)arg2;
- (long long)currentEnvironment;
- (void)setupNearbyDiscovery;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (void)applicationWillTerminateNotification:(id)arg1;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)performSync:(CDUnknownBlockType)arg1;

@end


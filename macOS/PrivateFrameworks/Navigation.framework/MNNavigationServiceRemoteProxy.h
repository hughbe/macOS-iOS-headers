//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNNavigationServiceClientInterface.h"
#import "MNNavigationServiceDaemonInterface.h"
#import "MNNavigationServiceReconnectorDelegate.h"

@class MNNavigationServiceReconnector, NSDate, NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface MNNavigationServiceRemoteProxy : NSObject <MNNavigationServiceClientInterface, MNNavigationServiceReconnectorDelegate, MNNavigationServiceDaemonInterface>
{
    NSXPCConnection *_connection;
    MNNavigationServiceReconnector *_reconnector;
    NSDate *_lastReconnectionDate;
    id <MNNavigationServiceRemoteProxyDelegate> _delegate;
}

@property(nonatomic) __weak id <MNNavigationServiceRemoteProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)navigationServiceReconnector:(id)arg1 didReconnectWithDetails:(id)arg2;
- (void)didUpdateTracePlaybackDetails:(id)arg1;
- (void)didUpdateTrafficForETARoute:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3 withRouteDetails:(id)arg4;
- (void)didInvalidateTrafficIncidentAlert:(id)arg1;
- (void)didUpdateTrafficIncidentAlert:(id)arg1;
- (void)didReceiveTrafficIncidentAlert:(id)arg1;
- (void)failedRerouteWithErrorCode:(long long)arg1;
- (void)didSwitchToNewTransportType:(int)arg1 newRoute:(id)arg2;
- (void)didCancelReroute;
- (void)didRerouteWithDetails:(id)arg1 withLocationDetails:(id)arg2;
- (void)willReroute;
- (void)didEnableGuidancePrompts:(BOOL)arg1;
- (void)didArrive;
- (void)didSignalAlightForStepAtIndex:(unsigned long long)arg1;
- (void)hideSecondaryStep;
- (void)displaySecondaryStep:(id)arg1 instructions:(id)arg2 shieldType:(int)arg3 shieldText:(id)arg4 drivingSide:(int)arg5;
- (void)displayManeuverAlertForAnnouncementStage:(unsigned long long)arg1;
- (void)displayPrimaryStep:(id)arg1 instructions:(id)arg2 shieldType:(int)arg3 shieldText:(id)arg4 drivingSide:(int)arg5 maneuverStepIndex:(unsigned long long)arg6 isSynthetic:(BOOL)arg7;
- (void)didUpdateDistanceUntilManeuver:(double)arg1 timeUntilManeuver:(double)arg2 forStepIndex:(unsigned long long)arg3;
- (void)didUpdateProceedToRouteDistance:(double)arg1 displayString:(id)arg2 remainingTime:(double)arg3 remainingDistance:(double)arg4 closestStepIndex:(unsigned long long)arg5;
- (void)didUpdateRemainingTime:(double)arg1 remainingDistance:(double)arg2;
- (void)didUpdateStepIndex:(unsigned long long)arg1 legIndex:(unsigned long long)arg2;
- (void)didUpdateMatchedLocation:(id)arg1;
- (void)didChangeGuidanceLevel:(int)arg1;
- (void)didChangeGuidanceState:(id)arg1;
- (void)didChangeNavigationState:(int)arg1;
- (void)permanentlyFailedToNavigateWithError:(long long)arg1;
- (void)willResumeFromPauseNavigation;
- (void)willPauseNavigation;
- (void)didStopNavigation;
- (void)willStopNavigation;
- (void)didStartNavigation;
- (void)willStartNavigationForRoute:(id)arg1;
- (void)didPrepareNavigationWithRouteDetails:(id)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)setTracePosition:(double)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTraceIsPlaying:(BOOL)arg1;
- (void)acceptReroute:(BOOL)arg1 forTrafficIncidentAlertDetails:(id)arg2;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setIsConnectedToCarplay:(BOOL)arg1;
@property(nonatomic) BOOL guidancePromptsEnabled;
- (void)stopCurrentGuidancePrompt;
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)repeatCurrentTrafficAlertWithReply:(CDUnknownBlockType)arg1;
- (void)repeatCurrentGuidanceWithReply:(CDUnknownBlockType)arg1;
- (void)changeSettings:(id)arg1;
- (void)resumeOriginalDestination;
- (void)updateDestination:(id)arg1;
- (void)stopNavigation;
- (void)startNavigationForRouteDetails:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)prepareNavigationWithRouteDetails:(id)arg1;
- (id)remoteObjectProxyThreadUnsafe;
- (void)_connectToDaemonIfNeededThreadUnsafe;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


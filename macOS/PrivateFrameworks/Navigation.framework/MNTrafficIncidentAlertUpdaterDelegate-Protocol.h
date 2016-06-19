//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOComposedRoute, MNTrafficIncidentAlert, MNTrafficIncidentAlertUpdater;

@protocol MNTrafficIncidentAlertUpdaterDelegate <NSObject>
- (double)trafficIncidentAlertUpdaterTimeUntilNextAnnouncement:(MNTrafficIncidentAlertUpdater *)arg1;
- (double)trafficIncidentAlertUpdaterTimeSinceLastAnnouncement:(MNTrafficIncidentAlertUpdater *)arg1;
- (double)trafficIncidentAlertUpdaterRemainingTimeOnRoute:(MNTrafficIncidentAlertUpdater *)arg1;
- (void)trafficIncidentAlertUpdater:(MNTrafficIncidentAlertUpdater *)arg1 didSwitchToNewRoute:(GEOComposedRoute *)arg2;
- (void)trafficIncidentAlertUpdater:(MNTrafficIncidentAlertUpdater *)arg1 updatedAlert:(MNTrafficIncidentAlert *)arg2;
- (void)trafficIncidentAlertUpdater:(MNTrafficIncidentAlertUpdater *)arg1 invalidatedAlert:(MNTrafficIncidentAlert *)arg2;
- (void)trafficIncidentAlertUpdater:(MNTrafficIncidentAlertUpdater *)arg1 receivedAlert:(MNTrafficIncidentAlert *)arg2 responseCallback:(void (^)(BOOL))arg3;
@end


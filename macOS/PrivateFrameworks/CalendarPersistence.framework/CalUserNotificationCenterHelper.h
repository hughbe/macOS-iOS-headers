//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CalAccumulatingQueue, NSObject<OS_dispatch_queue>;

@interface CalUserNotificationCenterHelper : NSObject
{
    NSObject<OS_dispatch_queue> *_postQueue;
    NSObject<OS_dispatch_queue> *_findQueue;
    CalAccumulatingQueue *_alarmScan;
}

+ (id)defaultHelper;
+ (void)initialize;
- (BOOL)_isPrincipalOrAccountDisabledOrDelegate:(id)arg1 forCalendar:(BOOL)arg2;
- (BOOL)_doesEvent:(id)arg1 haveOccurrenceOnDate:(id)arg2;
- (BOOL)_isEventOccurrenceTooFarInFuture:(id)arg1 occurrenceDate:(id)arg2;
- (BOOL)_isEventOccurrenceOver:(id)arg1 occurrenceDate:(id)arg2 allowZeroDuration:(BOOL)arg3;
- (BOOL)_commonShouldEventBeShown:(id)arg1 forOccurrenceDate:(id)arg2;
- (BOOL)_doesAlarm:(id)arg1 haveTriggerOnDate:(id)arg2;
- (BOOL)_acknowledged:(id)arg1 orAcknowledgedBeforeTriggerDate:(id)arg2;
- (BOOL)_shouldAlarmFire:(id)arg1 onScheduledDate:(id)arg2 forOccurrenceDate:(id)arg3;
- (id)_datesToScheduleAlarm:(id)arg1;
- (id)_alarmScanRange;
- (id)_calendarIDs;
- (id)contextForNotificationCenter;
- (void)handleLocationChangeForRegion:(id)arg1 type:(id)arg2;
- (void)_executeProcAlarm:(id)arg1;
- (void)_sendMailAlarm:(id)arg1;
- (void)_acknowledgeAlarm:(id)arg1 originalAlarm:(id)arg2 deleteAlarm:(BOOL)arg3 inContext:(id)arg4 onDate:(id)arg5;
- (void)dismissAlarm:(id)arg1 withAckDate:(id)arg2;
- (void)dismissAlarm:(id)arg1;
- (void)snoozeAlarm:(id)arg1 withSnoozeInterval:(id)arg2;
- (void)snoozeAlarm:(id)arg1;
- (id)_calcDateWhenSnoozeAlarmOccurs:(id)arg1 withInterval:(id)arg2;
- (id)_validateAlarmOccurringDate:(id)arg1 withRespectToEventDate:(id)arg2;
- (double)_calcSnoozeInterval:(id)arg1;
- (void)fireAlarm:(id)arg1;
- (BOOL)_shouldAlarmExpire:(id)arg1;
- (void)expireNotifications:(id)arg1;
- (void)coalesceAlarmsFromNotification:(id)arg1 forCenter:(id)arg2;
- (void)resolveBookmarks:(id)arg1;
- (void)_deleteAlarms:(id)arg1;
- (void)deleteAlarms:(id)arg1;
- (BOOL)_isExpired:(id)arg1;
- (void)_removeOldAlarms;
- (void)_scheduleAlarms:(id)arg1;
- (void)scheduleAlarms:(id)arg1;
- (void)_findAndScheduleUpcomingAlarms:(id)arg1;
- (void)findAndScheduleUpcomingAlarms:(id)arg1;
- (void)dealloc;
- (id)init;

@end


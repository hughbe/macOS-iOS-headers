//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CalCalDAVTaskManager;

@interface CalHolidayCalendarSubscriber : NSObject
{
    CalCalDAVTaskManager *_calDAVTaskManager;
}

+ (id)defaultSubscriber;
- (void)disableHolidayCalendars;
- (id)backupCalendarSymbolicColor;
- (BOOL)_alreadySubscribedToLocalHolidayCalendar;
- (BOOL)_alreadySubscribedToCalendarWithLanguageCode:(id)arg1 withLocationCode:(id)arg2 orURL:(id)arg3;
- (void)_subscribeToHolidayCalendar:(id)arg1 withAccount:(id)arg2 locationCode:(id)arg3 languageCode:(id)arg4;
- (void)subscribeToHolidayCalendar;
- (void)dealloc;

@end


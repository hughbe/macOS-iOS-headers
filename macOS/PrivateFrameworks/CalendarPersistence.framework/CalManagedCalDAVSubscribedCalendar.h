//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalManagedCalDAVCalendar.h>

@class NSString;

@interface CalManagedCalDAVSubscribedCalendar : CalManagedCalDAVCalendar
{
}

+ (id)entityName;
- (BOOL)allowsScheduling;
- (BOOL)isSubscribedHolidayCalendar;
- (BOOL)isSubscribed;
- (id)lastOperationError;
- (id)session;
- (void)refreshSession:(long long)arg1;
- (void)refreshSession;
- (id)_makeSession;
- (void)activateSession;
- (BOOL)wantsSession;

// Remaining properties
@property(retain) NSString *eTag; // @dynamic eTag;

@end


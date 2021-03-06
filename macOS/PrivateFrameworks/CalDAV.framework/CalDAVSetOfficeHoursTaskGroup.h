//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

#import <CalDAV/CoreDAVPropPatchTaskDelegate-Protocol.h>

@class ICSDocument, NSString, NSURL;
@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVSetOfficeHoursTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate>
{
    NSURL *_inboxURL;
    ICSDocument *_calendarAvailability;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ICSDocument *calendarAvailability; // @synthesize calendarAvailability=_calendarAvailability;
@property(retain, nonatomic) NSURL *inboxURL; // @synthesize inboxURL=_inboxURL;
- (void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)startTaskGroup;
- (id)initWithAccountInfoProvider:(id)arg1 inboxURL:(id)arg2 calendarAvailability:(id)arg3 taskManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <CoreDAVTaskGroupDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalDAVEntityQueueableOperation.h>

@class CALEntity, CoreEvent, NSString;

@interface CalDAVScheduleEventQueueableOperation : CalDAVEntityQueueableOperation
{
    NSString *_meAddress;
    NSString *_recipients;
    NSString *_scheduleData;
    NSString *_localUID;
    CoreEvent *_event;
    CALEntity *_parentEvent;
    long long _attachmentsSent;
    NSString *_outboxPath;
    int _method;
    NSString *_etag;
    BOOL _scheduleIsAnUpdate;
}

- (void)configureOperationDependencies;
- (void)performSchedule;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)_setErrorWithFakeStatus:(id)arg1;
- (void)_sendMessageForInvalidAttendees:(id)arg1;
- (void)_checkHeadETag:(id)arg1;
- (void)performOperation;
- (void)dealloc;
- (id)readableDescription;
- (id)initWithChangeRequest:(id)arg1 entity:(id)arg2 meAddress:(id)arg3 recipients:(id)arg4 scheduleData:(id)arg5 outboxPath:(id)arg6 fromSource:(id)arg7 session:(id)arg8 etag:(id)arg9 serverFilename:(id)arg10;

@end


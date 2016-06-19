//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalDAV/CalDAVScheduleTask.h>

@class NSString;

@interface CalDAVFreeBusyLookupTask : CalDAVScheduleTask
{
    NSString *_maskedUID;
}

+ (id)_icsDate:(id)arg1 calendar:(id)arg2;
+ (id)_freeBusyDocumentWithOrganizer:(id)arg1 attendees:(id)arg2 start:(id)arg3 end:(id)arg4 maskedUID:(id)arg5 extendedFreeBusy:(BOOL)arg6 prodID:(id)arg7;
@property(retain, nonatomic) NSString *maskedUID; // @synthesize maskedUID=_maskedUID;
- (void).cxx_destruct;
- (id)initWithOrganizer:(id)arg1 originator:(id)arg2 attendees:(id)arg3 start:(id)arg4 end:(id)arg5 outboxURL:(id)arg6 maskedUID:(id)arg7 extendedFreeBusy:(BOOL)arg8 prodID:(id)arg9;
- (id)initWithOrganizer:(id)arg1 originator:(id)arg2 attendees:(id)arg3 start:(id)arg4 end:(id)arg5 outboxURL:(id)arg6 maskedUID:(id)arg7;

@end


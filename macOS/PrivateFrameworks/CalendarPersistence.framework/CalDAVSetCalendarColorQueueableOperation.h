//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalDAVSetPropertyQueueableOperation.h>

@class CoreDAVItem;

@interface CalDAVSetCalendarColorQueueableOperation : CalDAVSetPropertyQueueableOperation
{
    CoreDAVItem *_backupElement;
}

@property(retain) CoreDAVItem *backupElement; // @synthesize backupElement=_backupElement;
- (void)performOperation;
- (void)dealloc;
- (id)initWithChangeRequest:(id)arg1 session:(id)arg2 URI:(id)arg3 colorString:(id)arg4 colorName:(id)arg5;

@end


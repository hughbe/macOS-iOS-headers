//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/CalCalDAVSynchronousTaskGroup.h>

#import <CalendarPersistence/CoreDAVTaskGroupDelegate-Protocol.h>

@class NSString;

@interface CalCalDAVBasicTaskGroupWrapper : CalCalDAVSynchronousTaskGroup <CoreDAVTaskGroupDelegate>
{
}

- (void)taskGroup:(id)arg1 didFinishWithError:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


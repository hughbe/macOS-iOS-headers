//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalDAVCalendarQueueableOperation.h>

@class CoreDAVItem, NSString, NSURL;

@interface CalDAVRemovePropertyQueueableOperation : CalDAVCalendarQueueableOperation
{
    NSString *_property;
    NSURL *_url;
    CoreDAVItem *_propertyToRemove;
}

+ (void)initialize;
@property(retain) CoreDAVItem *propertyToRemove; // @synthesize propertyToRemove=_propertyToRemove;
@property(retain) NSURL *url; // @synthesize url=_url;
- (void)performOperation;
- (void)dealloc;
- (id)initWithChangeRequest:(id)arg1 session:(id)arg2 URI:(id)arg3 property:(id)arg4;

@end


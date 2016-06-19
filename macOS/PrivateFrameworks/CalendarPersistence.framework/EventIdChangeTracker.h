//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/EntityIdChangeTracker.h>

@class NSMutableSet;

@interface EventIdChangeTracker : EntityIdChangeTracker
{
    NSMutableSet *hasRecurrence;
    NSMutableSet *hasOrganizer;
}

- (id)getIdentityString:(id)arg1;
- (void)remap:(id)arg1 to:(id)arg2 forObject:(id)arg3 into:(id)arg4;
- (void)removeKey:(id)arg1 forObject:(id)arg2 into:(id)arg3;
- (void)extractExtraInfo:(id)arg1 withId:(id)arg2;
- (BOOL)hasOrganizer:(id)arg1;
- (BOOL)hasRecurrence:(id)arg1;
- (id)init;

@end


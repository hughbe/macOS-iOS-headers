//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNChangeHistoryEventFactory : NSObject
{
}

- (id)differentMeCardEventWithContactIdentifier:(id)arg1;
- (id)preferredContactForImageEventWithPreferredContact:(id)arg1 unifiedContact:(id)arg2;
- (id)preferredContactForNameEventWithPreferredContact:(id)arg1 unifiedContact:(id)arg2;
- (id)unlinkContactEventWithContact:(id)arg1;
- (id)linkContactsEventWithFromContact:(id)arg1 toContact:(id)arg2;
- (id)removeSubgroupFromGroupEventWithSubgroup:(id)arg1 group:(id)arg2;
- (id)addSubgroupToGroupEventWithSubgroup:(id)arg1 group:(id)arg2;
- (id)removeMemberFromGroupEventWithMember:(id)arg1 group:(id)arg2;
- (id)addMemberToGroupEventWithMember:(id)arg1 group:(id)arg2;
- (id)deleteGroupEventWithGroupIdentifier:(id)arg1 externalURI:(id)arg2 externalModificationTag:(id)arg3;
- (id)deleteGroupEventWithGroupIdentifier:(id)arg1;
- (id)updateGroupEventWithGroup:(id)arg1;
- (id)addGroupEventWithGroup:(id)arg1 containerIdentifier:(id)arg2;
- (id)deleteContactEventWithContactIdentifier:(id)arg1 externalURI:(id)arg2 externalModificationTag:(id)arg3;
- (id)deleteContactEventWithContactIdentifier:(id)arg1;
- (id)updateContactEventWithContact:(id)arg1;
- (id)addContactEventWithContact:(id)arg1 containerIdentifier:(id)arg2;
- (id)dropEverythingEvent;

@end


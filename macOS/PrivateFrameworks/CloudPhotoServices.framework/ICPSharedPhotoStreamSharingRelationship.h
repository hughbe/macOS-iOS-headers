//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICPDictionaryCoding.h"

@class ICPSharedPhotoStream, ICPSharedPhotoStreamPerson, NSDate, NSString;

@interface ICPSharedPhotoStreamSharingRelationship : NSObject <ICPDictionaryCoding>
{
    NSString *_identifier;
    NSString *_streamIdentifier;
    ICPSharedPhotoStreamPerson *_person;
    long long _state;
    NSDate *_inviteeSubscriptionDate;
    ICPSharedPhotoStream *_strongSharedPhotoStream;
    ICPSharedPhotoStream *_weakSharedPhotoStream;
}

@property __weak ICPSharedPhotoStream *weakSharedPhotoStream; // @synthesize weakSharedPhotoStream=_weakSharedPhotoStream;
@property(retain) ICPSharedPhotoStream *strongSharedPhotoStream; // @synthesize strongSharedPhotoStream=_strongSharedPhotoStream;
@property(retain) NSDate *inviteeSubscriptionDate; // @synthesize inviteeSubscriptionDate=_inviteeSubscriptionDate;
@property long long state; // @synthesize state=_state;
@property(retain) ICPSharedPhotoStreamPerson *person; // @synthesize person=_person;
@property(retain) NSString *streamIdentifier; // @synthesize streamIdentifier=_streamIdentifier;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly) NSString *displayString;
@property(readonly) NSString *editingString;
- (BOOL)isEqual:(id)arg1;
@property(readonly) ICPSharedPhotoStream *sharedPhotoStream;
- (id)_copyWithClass:(Class)arg1 zone:(struct _NSZone *)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) BOOL shouldBeHiddenFromAlbumSubscriberList;
@property(readonly) BOOL countsAgainstStreamSubscriberLimit;
- (id)initWithPerson:(id)arg1 streamIdentifier:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)dictionaryRepresentation;
- (void)encodeWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


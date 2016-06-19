//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSPerson, NSData, NSMutableSet, NSSet, NSString, SGDuplicateKey, SGRecordId, SGSimpleTimeRange;

@interface SGEntity : NSObject
{
    NSMutableSet *_tags;
    NSSet *_tagsSnapshot;
    struct _opaque_pthread_mutex_t _tagsLock;
    unsigned int _state;
    SGRecordId *_recordId;
    SGDuplicateKey *_duplicateKey;
    unsigned long long _extractionType;
    NSString *_sourceKey;
    NSString *_content;
    NSString *_title;
    CSPerson *_author;
    struct SGUnixTimestamp_ _creationTimestamp;
    struct SGUnixTimestamp_ _lastModifiedTimestamp;
    SGSimpleTimeRange *_timeRange;
    NSData *_structuredData;
    double _quality;
    NSMutableSet *_locations;
    long long _masterEntityId;
    long long _groupId;
    struct _NSRange _contentRangeOfInterest;
}

@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
@property(nonatomic) long long masterEntityId; // @synthesize masterEntityId=_masterEntityId;
@property(retain, nonatomic) NSMutableSet *locations; // @synthesize locations=_locations;
@property(nonatomic) double quality; // @synthesize quality=_quality;
@property(retain, nonatomic) NSData *structuredData; // @synthesize structuredData=_structuredData;
@property(retain, nonatomic) SGSimpleTimeRange *timeRange; // @synthesize timeRange=_timeRange;
@property(nonatomic) struct SGUnixTimestamp_ lastModifiedTimestamp; // @synthesize lastModifiedTimestamp=_lastModifiedTimestamp;
@property(nonatomic) struct SGUnixTimestamp_ creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
@property(retain, nonatomic) CSPerson *author; // @synthesize author=_author;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) struct _NSRange contentRangeOfInterest; // @synthesize contentRangeOfInterest=_contentRangeOfInterest;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *sourceKey; // @synthesize sourceKey=_sourceKey;
@property(nonatomic) unsigned long long extractionType; // @synthesize extractionType=_extractionType;
@property(retain, nonatomic) SGDuplicateKey *duplicateKey; // @synthesize duplicateKey=_duplicateKey;
@property(retain, nonatomic) SGRecordId *recordId; // @synthesize recordId=_recordId;
- (void).cxx_destruct;
- (id)description;
- (id)fieldsToSaveOnConfirmation;
- (BOOL)isPartiallyDownloaded;
- (BOOL)isInhuman;
- (id)templateShortName;
- (id)extraKeyTag;
- (id)tags;
- (void)addTag:(id)arg1;
- (BOOL)isFromForwardedMessage;
- (BOOL)isCancelled;
- (id)loadOrigin:(id)arg1;
- (void)validate;
- (unsigned long long)hash;
- (BOOL)isEqualToEntity:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithEntity:(id)arg1;
- (id)init;

@end


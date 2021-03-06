//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSetTimerAttributeIntent-Protocol.h>

@class NSString, _INPBDataString, _INPBIntentMetadata, _INPBTimer;

@interface _INPBSetTimerAttributeIntent : PBCodable <_INPBSetTimerAttributeIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int toDuration:1;
    } _has;
    BOOL __encodeLegacyGloryData;
    _INPBIntentMetadata *_intentMetadata;
    _INPBTimer *_targetTimer;
    double _toDuration;
    _INPBDataString *_toLabel;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(retain, nonatomic) _INPBDataString *toLabel; // @synthesize toLabel=_toLabel;
@property(nonatomic) double toDuration; // @synthesize toDuration=_toDuration;
@property(retain, nonatomic) _INPBTimer *targetTimer; // @synthesize targetTimer=_targetTimer;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasToLabel;
@property(nonatomic) BOOL hasToDuration;
@property(readonly, nonatomic) BOOL hasTargetTimer;
@property(readonly, nonatomic) BOOL hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


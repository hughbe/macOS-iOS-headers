//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBWellnessValue-Protocol.h>

@class NSString, _INPBDouble, _INPBInteger, _INPBValueMetadata;

@interface _INPBWellnessValue : PBCodable <_INPBWellnessValue, NSSecureCoding, NSCopying>
{
    struct _has;
    BOOL __encodeLegacyGloryData;
    _INPBDouble *_pbDoubleValue;
    _INPBInteger *_ordinalValue;
    _INPBValueMetadata *_valueMetadata;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(retain, nonatomic) _INPBInteger *ordinalValue; // @synthesize ordinalValue=_ordinalValue;
@property(retain, nonatomic) _INPBDouble *pbDoubleValue; // @synthesize pbDoubleValue=_pbDoubleValue;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasValueMetadata;
@property(readonly, nonatomic) BOOL hasOrdinalValue;
@property(readonly, nonatomic) BOOL hasPbDoubleValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


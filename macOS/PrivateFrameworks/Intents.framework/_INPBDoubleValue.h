//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class PBUnknownFields, _INPBValueMetadata;

@interface _INPBDoubleValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _value;
    _INPBValueMetadata *_valueMetadata;
    CDStruct_01ef6375 _has;
}

+ (id)options;
@property(nonatomic) double value; // @synthesize value=_value;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasValue;
@property(readonly, nonatomic) BOOL hasValueMetadata;

@end


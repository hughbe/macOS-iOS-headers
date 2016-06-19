//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class PBUnknownFields, _INPBContact;

@interface _INPBShareDestination : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBContact *_contact;
    int _deviceType;
    struct {
        unsigned int deviceType:1;
    } _has;
}

+ (id)options;
@property(retain, nonatomic) _INPBContact *contact; // @synthesize contact=_contact;
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
@property(nonatomic) BOOL hasDeviceType;
@property(nonatomic) int deviceType; // @synthesize deviceType=_deviceType;
@property(readonly, nonatomic) BOOL hasContact;

@end


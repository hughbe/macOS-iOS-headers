//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBTrainReservation-Protocol.h>

@class NSString, _INPBReservation, _INPBSeat, _INPBTrainTrip;

@interface _INPBTrainReservation : PBCodable <_INPBTrainReservation, NSSecureCoding, NSCopying>
{
    struct _has;
    BOOL __encodeLegacyGloryData;
    _INPBReservation *_reservation;
    _INPBSeat *_reservedSeat;
    _INPBTrainTrip *_trainTrip;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(retain, nonatomic) _INPBTrainTrip *trainTrip; // @synthesize trainTrip=_trainTrip;
@property(retain, nonatomic) _INPBSeat *reservedSeat; // @synthesize reservedSeat=_reservedSeat;
@property(retain, nonatomic) _INPBReservation *reservation; // @synthesize reservation=_reservation;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasTrainTrip;
@property(readonly, nonatomic) BOOL hasReservedSeat;
@property(readonly, nonatomic) BOOL hasReservation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


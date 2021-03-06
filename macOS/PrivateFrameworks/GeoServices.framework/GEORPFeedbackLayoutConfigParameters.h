//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOMapRegion, GEOPDMapsIdentifier, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackLayoutConfigParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLatLng *_coordinate;
    GEOMapRegion *_mapRegion;
    GEOPDMapsIdentifier *_mapsId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _formType;
    struct {
        unsigned int has_formType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_coordinate:1;
        unsigned int read_mapRegion:1;
        unsigned int read_mapsId:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_coordinate:1;
        unsigned int wrote_mapRegion:1;
        unsigned int wrote_mapsId:1;
        unsigned int wrote_formType:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOPDMapsIdentifier *mapsId;
@property(readonly, nonatomic) BOOL hasMapsId;
- (void)_readMapsId;
@property(retain, nonatomic) GEOLatLng *coordinate;
@property(readonly, nonatomic) BOOL hasCoordinate;
- (void)_readCoordinate;
@property(retain, nonatomic) GEOMapRegion *mapRegion;
@property(readonly, nonatomic) BOOL hasMapRegion;
- (void)_readMapRegion;
- (int)StringAsFormType:(id)arg1;
- (id)formTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasFormType;
@property(nonatomic) int formType;
- (id)initWithData:(id)arg1;
- (id)init;

@end


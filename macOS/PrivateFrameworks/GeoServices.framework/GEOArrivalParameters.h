//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOArrivalParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_arrivalMapRegions;
    NSMutableArray *_arrivalPoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _arrivalParametersEndOfRouteDistanceThreshold;
    unsigned int _endOfRouteDistanceThreshold;
    struct {
        unsigned int has_arrivalParametersEndOfRouteDistanceThreshold:1;
        unsigned int has_endOfRouteDistanceThreshold:1;
        unsigned int read_unknownFields:1;
        unsigned int read_arrivalMapRegions:1;
        unsigned int read_arrivalPoints:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_arrivalMapRegions:1;
        unsigned int wrote_arrivalPoints:1;
        unsigned int wrote_arrivalParametersEndOfRouteDistanceThreshold:1;
        unsigned int wrote_endOfRouteDistanceThreshold:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)arrivalMapRegionsType;
+ (Class)arrivalPointsType;
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
@property(nonatomic) BOOL hasArrivalParametersEndOfRouteDistanceThreshold;
@property(nonatomic) unsigned int arrivalParametersEndOfRouteDistanceThreshold;
- (id)arrivalMapRegionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)arrivalMapRegionsCount;
- (void)_addNoFlagsArrivalMapRegions:(id)arg1;
- (void)addArrivalMapRegions:(id)arg1;
- (void)clearArrivalMapRegions;
@property(retain, nonatomic) NSMutableArray *arrivalMapRegions;
- (void)_readArrivalMapRegions;
- (id)arrivalPointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)arrivalPointsCount;
- (void)_addNoFlagsArrivalPoints:(id)arg1;
- (void)addArrivalPoints:(id)arg1;
- (void)clearArrivalPoints;
@property(retain, nonatomic) NSMutableArray *arrivalPoints;
- (void)_readArrivalPoints;
@property(nonatomic) BOOL hasEndOfRouteDistanceThreshold;
@property(nonatomic) unsigned int endOfRouteDistanceThreshold;
- (id)initWithData:(id)arg1;
- (id)init;

@end


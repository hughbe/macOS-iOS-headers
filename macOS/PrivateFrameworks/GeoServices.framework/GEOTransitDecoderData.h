//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface GEOTransitDecoderData : PBCodable <NSCopying>
{
    NSMutableArray *_accessPoints;
    NSMutableArray *_artworks;
    NSMutableArray *_brands;
    NSMutableArray *_halls;
    NSMutableArray *_lines;
    NSMutableArray *_stations;
    NSMutableArray *_steps;
    NSMutableArray *_stops;
    NSMutableArray *_systems;
    NSMutableArray *_transitIncidentMessages;
    NSMutableArray *_transitIncidents;
    NSMutableArray *_walkings;
    NSMutableArray *_zilchPoints;
}

+ (Class)stepType;
+ (Class)transitIncidentMessageType;
+ (Class)artworkType;
+ (Class)hallType;
+ (Class)transitIncidentType;
+ (Class)systemType;
+ (Class)zilchPointsType;
+ (Class)stopType;
+ (Class)walkingType;
+ (Class)accessPointType;
+ (Class)lineType;
+ (Class)brandType;
+ (Class)stationType;
@property(retain, nonatomic) NSMutableArray *steps; // @synthesize steps=_steps;
@property(retain, nonatomic) NSMutableArray *transitIncidentMessages; // @synthesize transitIncidentMessages=_transitIncidentMessages;
@property(retain, nonatomic) NSMutableArray *artworks; // @synthesize artworks=_artworks;
@property(retain, nonatomic) NSMutableArray *halls; // @synthesize halls=_halls;
@property(retain, nonatomic) NSMutableArray *transitIncidents; // @synthesize transitIncidents=_transitIncidents;
@property(retain, nonatomic) NSMutableArray *systems; // @synthesize systems=_systems;
@property(retain, nonatomic) NSMutableArray *zilchPoints; // @synthesize zilchPoints=_zilchPoints;
@property(retain, nonatomic) NSMutableArray *stops; // @synthesize stops=_stops;
@property(retain, nonatomic) NSMutableArray *walkings; // @synthesize walkings=_walkings;
@property(retain, nonatomic) NSMutableArray *accessPoints; // @synthesize accessPoints=_accessPoints;
@property(retain, nonatomic) NSMutableArray *lines; // @synthesize lines=_lines;
@property(retain, nonatomic) NSMutableArray *brands; // @synthesize brands=_brands;
@property(retain, nonatomic) NSMutableArray *stations; // @synthesize stations=_stations;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)stepAtIndex:(unsigned long long)arg1;
- (unsigned long long)stepsCount;
- (void)addStep:(id)arg1;
- (void)clearSteps;
- (id)transitIncidentMessageAtIndex:(unsigned long long)arg1;
- (unsigned long long)transitIncidentMessagesCount;
- (void)addTransitIncidentMessage:(id)arg1;
- (void)clearTransitIncidentMessages;
- (id)artworkAtIndex:(unsigned long long)arg1;
- (unsigned long long)artworksCount;
- (void)addArtwork:(id)arg1;
- (void)clearArtworks;
- (id)hallAtIndex:(unsigned long long)arg1;
- (unsigned long long)hallsCount;
- (void)addHall:(id)arg1;
- (void)clearHalls;
- (id)transitIncidentAtIndex:(unsigned long long)arg1;
- (unsigned long long)transitIncidentsCount;
- (void)addTransitIncident:(id)arg1;
- (void)clearTransitIncidents;
- (id)systemAtIndex:(unsigned long long)arg1;
- (unsigned long long)systemsCount;
- (void)addSystem:(id)arg1;
- (void)clearSystems;
- (id)zilchPointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)zilchPointsCount;
- (void)addZilchPoints:(id)arg1;
- (void)clearZilchPoints;
- (id)stopAtIndex:(unsigned long long)arg1;
- (unsigned long long)stopsCount;
- (void)addStop:(id)arg1;
- (void)clearStops;
- (id)walkingAtIndex:(unsigned long long)arg1;
- (unsigned long long)walkingsCount;
- (void)addWalking:(id)arg1;
- (void)clearWalkings;
- (id)accessPointAtIndex:(unsigned long long)arg1;
- (unsigned long long)accessPointsCount;
- (void)addAccessPoint:(id)arg1;
- (void)clearAccessPoints;
- (id)lineAtIndex:(unsigned long long)arg1;
- (unsigned long long)linesCount;
- (void)addLine:(id)arg1;
- (void)clearLines;
- (id)brandAtIndex:(unsigned long long)arg1;
- (unsigned long long)brandsCount;
- (void)addBrand:(id)arg1;
- (void)clearBrands;
- (id)stationAtIndex:(unsigned long long)arg1;
- (unsigned long long)stationsCount;
- (void)addStation:(id)arg1;
- (void)clearStations;
- (void)dealloc;
- (id)artworkFromIndices:(unsigned int *)arg1 count:(unsigned long long)arg2;

@end


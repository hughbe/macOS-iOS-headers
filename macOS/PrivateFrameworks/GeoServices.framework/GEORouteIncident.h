//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLatLng, NSString;

@interface GEORouteIncident : PBCodable <NSCopying>
{
    long long _endTime;
    long long _startTime;
    long long _updateTime;
    NSString *_crossStreet;
    NSString *_incidentId;
    NSString *_info;
    unsigned int _laneClosureCount;
    int _laneClosureType;
    GEOLatLng *_position;
    int _significance;
    NSString *_street;
    int _type;
    BOOL _endTimeReliable;
    struct {
        unsigned int endTime:1;
        unsigned int startTime:1;
        unsigned int updateTime:1;
        unsigned int laneClosureCount:1;
        unsigned int laneClosureType:1;
        unsigned int significance:1;
        unsigned int type:1;
        unsigned int endTimeReliable:1;
    } _has;
}

@property(nonatomic) BOOL endTimeReliable; // @synthesize endTimeReliable=_endTimeReliable;
@property(nonatomic) unsigned int laneClosureCount; // @synthesize laneClosureCount=_laneClosureCount;
@property(nonatomic) long long updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *crossStreet; // @synthesize crossStreet=_crossStreet;
@property(retain, nonatomic) NSString *street; // @synthesize street=_street;
@property(retain, nonatomic) NSString *info; // @synthesize info=_info;
@property(retain, nonatomic) NSString *incidentId; // @synthesize incidentId=_incidentId;
@property(retain, nonatomic) GEOLatLng *position; // @synthesize position=_position;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsSignificance:(id)arg1;
- (id)significanceAsString:(int)arg1;
@property(nonatomic) BOOL hasSignificance;
@property(nonatomic) int significance; // @synthesize significance=_significance;
@property(nonatomic) BOOL hasEndTimeReliable;
@property(nonatomic) BOOL hasLaneClosureCount;
- (int)StringAsLaneClosureType:(id)arg1;
- (id)laneClosureTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasLaneClosureType;
@property(nonatomic) int laneClosureType; // @synthesize laneClosureType=_laneClosureType;
@property(nonatomic) BOOL hasUpdateTime;
@property(nonatomic) BOOL hasEndTime;
@property(nonatomic) BOOL hasStartTime;
@property(readonly, nonatomic) BOOL hasCrossStreet;
@property(readonly, nonatomic) BOOL hasStreet;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) BOOL hasInfo;
@property(readonly, nonatomic) BOOL hasIncidentId;
@property(readonly, nonatomic) BOOL hasPosition;
- (void)dealloc;

@end


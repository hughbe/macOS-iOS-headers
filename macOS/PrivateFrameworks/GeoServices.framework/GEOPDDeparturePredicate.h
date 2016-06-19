//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEOPDDeparturePredicate : PBCodable <NSCopying>
{
    struct GEOPDTimeRange _timeRange;
    unsigned int _numAdditionalDepartures;
    struct {
        unsigned int timeRange:1;
        unsigned int numAdditionalDepartures:1;
    } _has;
}

@property(nonatomic) unsigned int numAdditionalDepartures; // @synthesize numAdditionalDepartures=_numAdditionalDepartures;
@property(nonatomic) struct GEOPDTimeRange timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasNumAdditionalDepartures;
@property(nonatomic) BOOL hasTimeRange;
- (id)initWithTraitsTransitModeFilter:(id)arg1;

@end


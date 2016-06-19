//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSArray, NSMutableArray;

@interface GEORouteDisplayHints : PBCodable <NSCopying>
{
    CDStruct_95bda58d _availablePrioritizations;
    NSMutableArray *_availableTransitSurcharges;
    BOOL _showTransitSchedules;
    struct {
        unsigned int showTransitSchedules:1;
    } _has;
}

+ (Class)availableTransitSurchargeType;
@property(retain, nonatomic) NSMutableArray *availableTransitSurcharges; // @synthesize availableTransitSurcharges=_availableTransitSurcharges;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)availableTransitSurchargeAtIndex:(unsigned long long)arg1;
- (unsigned long long)availableTransitSurchargesCount;
- (void)addAvailableTransitSurcharge:(id)arg1;
- (void)clearAvailableTransitSurcharges;
- (int)StringAsAvailablePrioritizations:(id)arg1;
- (id)availablePrioritizationsAsString:(int)arg1;
- (void)setAvailablePrioritizations:(int *)arg1 count:(unsigned long long)arg2;
- (int)availablePrioritizationAtIndex:(unsigned long long)arg1;
- (void)addAvailablePrioritization:(int)arg1;
- (void)clearAvailablePrioritizations;
@property(readonly, nonatomic) int *availablePrioritizations;
@property(readonly, nonatomic) unsigned long long availablePrioritizationsCount;
@property(nonatomic) BOOL hasShowTransitSchedules;
@property(nonatomic) BOOL showTransitSchedules; // @synthesize showTransitSchedules=_showTransitSchedules;
- (void)dealloc;
@property(readonly, nonatomic) NSArray *prioritizationOptions;
@property(readonly, nonatomic) NSArray *surchargeOptions;

@end


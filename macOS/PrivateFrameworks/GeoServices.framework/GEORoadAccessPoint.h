//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLatLng;

@interface GEORoadAccessPoint : PBCodable <NSCopying>
{
    int _drivingDirection;
    GEOLatLng *_location;
    int _walkingDirection;
    BOOL _isApproximate;
    struct {
        unsigned int drivingDirection:1;
        unsigned int walkingDirection:1;
        unsigned int isApproximate:1;
    } _has;
}

@property(nonatomic) BOOL isApproximate; // @synthesize isApproximate=_isApproximate;
@property(retain, nonatomic) GEOLatLng *location; // @synthesize location=_location;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsDrivingDirection:(id)arg1;
- (id)drivingDirectionAsString:(int)arg1;
@property(nonatomic) BOOL hasDrivingDirection;
@property(nonatomic) int drivingDirection; // @synthesize drivingDirection=_drivingDirection;
- (int)StringAsWalkingDirection:(id)arg1;
- (id)walkingDirectionAsString:(int)arg1;
@property(nonatomic) BOOL hasWalkingDirection;
@property(nonatomic) int walkingDirection; // @synthesize walkingDirection=_walkingDirection;
@property(nonatomic) BOOL hasIsApproximate;
@property(readonly, nonatomic) BOOL hasLocation;
- (void)dealloc;

@end


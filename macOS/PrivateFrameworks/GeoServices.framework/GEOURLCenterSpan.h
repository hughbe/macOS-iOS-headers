//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEOURLCenterSpan : PBCodable <NSCopying>
{
    double _latitude;
    double _latitudeDelta;
    double _longitude;
    double _longitudeDelta;
    struct {
        unsigned int latitude:1;
        unsigned int latitudeDelta:1;
        unsigned int longitude:1;
        unsigned int longitudeDelta:1;
    } _has;
}

@property(nonatomic) double longitudeDelta; // @synthesize longitudeDelta=_longitudeDelta;
@property(nonatomic) double latitudeDelta; // @synthesize latitudeDelta=_latitudeDelta;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasLongitudeDelta;
@property(nonatomic) BOOL hasLatitudeDelta;
@property(nonatomic) BOOL hasLongitude;
@property(nonatomic) BOOL hasLatitude;

@end


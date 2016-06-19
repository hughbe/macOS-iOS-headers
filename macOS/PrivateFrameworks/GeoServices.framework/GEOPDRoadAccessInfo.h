//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface GEOPDRoadAccessInfo : PBCodable <NSCopying>
{
    NSMutableArray *_roadAccessPoints;
}

+ (Class)roadAccessPointType;
+ (id)roadAccessInfoForPlaceData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *roadAccessPoints; // @synthesize roadAccessPoints=_roadAccessPoints;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)roadAccessPointAtIndex:(unsigned long long)arg1;
- (unsigned long long)roadAccessPointsCount;
- (void)addRoadAccessPoint:(id)arg1;
- (void)clearRoadAccessPoints;
- (void)dealloc;

@end


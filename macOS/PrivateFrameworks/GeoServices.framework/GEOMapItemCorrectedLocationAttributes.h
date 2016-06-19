//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOAddress, GEOLatLng, NSString;

@interface GEOMapItemCorrectedLocationAttributes : PBCodable <NSCopying>
{
    GEOAddress *_correctedAddress;
    NSString *_correctedAddressSecondaryStreetLine;
    GEOLatLng *_correctedCoordinate;
}

@property(retain, nonatomic) NSString *correctedAddressSecondaryStreetLine; // @synthesize correctedAddressSecondaryStreetLine=_correctedAddressSecondaryStreetLine;
@property(retain, nonatomic) GEOAddress *correctedAddress; // @synthesize correctedAddress=_correctedAddress;
@property(retain, nonatomic) GEOLatLng *correctedCoordinate; // @synthesize correctedCoordinate=_correctedCoordinate;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasCorrectedAddressSecondaryStreetLine;
@property(readonly, nonatomic) BOOL hasCorrectedAddress;
@property(readonly, nonatomic) BOOL hasCorrectedCoordinate;
- (void)dealloc;

@end


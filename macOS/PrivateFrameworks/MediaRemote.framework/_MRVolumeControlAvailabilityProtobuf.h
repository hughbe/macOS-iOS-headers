//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface _MRVolumeControlAvailabilityProtobuf : PBCodable <NSCopying>
{
    BOOL _volumeControlAvailable;
    struct {
        unsigned int volumeControlAvailable:1;
    } _has;
}

@property(nonatomic) BOOL volumeControlAvailable; // @synthesize volumeControlAvailable=_volumeControlAvailable;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasVolumeControlAvailable;

@end


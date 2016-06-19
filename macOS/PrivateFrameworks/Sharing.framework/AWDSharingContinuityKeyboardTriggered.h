//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface AWDSharingContinuityKeyboardTriggered : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _rssi;
    NSString *_sessionUUID;
    int _smoothedRSSI;
    struct {
        unsigned int timestamp:1;
        unsigned int rssi:1;
        unsigned int smoothedRSSI:1;
    } _has;
}

@property(nonatomic) int smoothedRSSI; // @synthesize smoothedRSSI=_smoothedRSSI;
@property(nonatomic) int rssi; // @synthesize rssi=_rssi;
@property(retain, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSmoothedRSSI;
@property(nonatomic) BOOL hasRssi;
@property(readonly, nonatomic) BOOL hasSessionUUID;
@property(nonatomic) BOOL hasTimestamp;

@end


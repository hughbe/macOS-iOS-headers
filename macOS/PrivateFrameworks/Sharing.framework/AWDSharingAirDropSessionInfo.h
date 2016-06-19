//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface AWDSharingAirDropSessionInfo : PBCodable <NSCopying>
{
    unsigned long long _startTimestamp;
    unsigned long long _timestamp;
    NSString *_bundleID;
    unsigned int _firstDiscovery;
    unsigned int _maxPeersDiscovered;
    unsigned int _sessionDuration;
    NSString *_sessionID;
    unsigned int _totalPeersDiscovered;
    unsigned int _transfersCompleted;
    unsigned int _transfersInitiated;
    BOOL _legacyMode;
    struct {
        unsigned int startTimestamp:1;
        unsigned int timestamp:1;
        unsigned int firstDiscovery:1;
        unsigned int maxPeersDiscovered:1;
        unsigned int sessionDuration:1;
        unsigned int totalPeersDiscovered:1;
        unsigned int transfersCompleted:1;
        unsigned int transfersInitiated:1;
        unsigned int legacyMode:1;
    } _has;
}

@property(nonatomic) unsigned int transfersCompleted; // @synthesize transfersCompleted=_transfersCompleted;
@property(nonatomic) unsigned int transfersInitiated; // @synthesize transfersInitiated=_transfersInitiated;
@property(nonatomic) unsigned int maxPeersDiscovered; // @synthesize maxPeersDiscovered=_maxPeersDiscovered;
@property(nonatomic) unsigned int totalPeersDiscovered; // @synthesize totalPeersDiscovered=_totalPeersDiscovered;
@property(nonatomic) unsigned int sessionDuration; // @synthesize sessionDuration=_sessionDuration;
@property(nonatomic) unsigned int firstDiscovery; // @synthesize firstDiscovery=_firstDiscovery;
@property(nonatomic) unsigned long long startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(nonatomic) BOOL legacyMode; // @synthesize legacyMode=_legacyMode;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
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
@property(nonatomic) BOOL hasTransfersCompleted;
@property(nonatomic) BOOL hasTransfersInitiated;
@property(nonatomic) BOOL hasMaxPeersDiscovered;
@property(nonatomic) BOOL hasTotalPeersDiscovered;
@property(nonatomic) BOOL hasSessionDuration;
@property(nonatomic) BOOL hasFirstDiscovery;
@property(nonatomic) BOOL hasStartTimestamp;
@property(nonatomic) BOOL hasLegacyMode;
@property(readonly, nonatomic) BOOL hasBundleID;
@property(readonly, nonatomic) BOOL hasSessionID;
@property(nonatomic) BOOL hasTimestamp;

@end


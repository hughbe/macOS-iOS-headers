//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface APSAWDAirPlayScreenSessionStartedOnClient : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _audioCompressionType;
    unsigned int _bonjourMs;
    unsigned int _configMs;
    unsigned int _connectMs;
    unsigned int _prepareMs;
    NSString *_sessionUUID;
    int _status;
    unsigned int _transportType;
    BOOL _didFallbackToInfraToAvoidP2POverDFS;
    struct {
        unsigned int timestamp:1;
        unsigned int audioCompressionType:1;
        unsigned int bonjourMs:1;
        unsigned int configMs:1;
        unsigned int connectMs:1;
        unsigned int prepareMs:1;
        unsigned int status:1;
        unsigned int transportType:1;
        unsigned int didFallbackToInfraToAvoidP2POverDFS:1;
    } _has;
}

@property(nonatomic) BOOL didFallbackToInfraToAvoidP2POverDFS; // @synthesize didFallbackToInfraToAvoidP2POverDFS=_didFallbackToInfraToAvoidP2POverDFS;
@property(nonatomic) unsigned int configMs; // @synthesize configMs=_configMs;
@property(nonatomic) unsigned int connectMs; // @synthesize connectMs=_connectMs;
@property(nonatomic) unsigned int bonjourMs; // @synthesize bonjourMs=_bonjourMs;
@property(nonatomic) unsigned int prepareMs; // @synthesize prepareMs=_prepareMs;
@property(nonatomic) unsigned int audioCompressionType; // @synthesize audioCompressionType=_audioCompressionType;
@property(nonatomic) unsigned int transportType; // @synthesize transportType=_transportType;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasDidFallbackToInfraToAvoidP2POverDFS;
@property(nonatomic) BOOL hasConfigMs;
@property(nonatomic) BOOL hasConnectMs;
@property(nonatomic) BOOL hasBonjourMs;
@property(nonatomic) BOOL hasPrepareMs;
@property(nonatomic) BOOL hasAudioCompressionType;
@property(nonatomic) BOOL hasTransportType;
@property(nonatomic) BOOL hasStatus;
@property(nonatomic) BOOL hasTimestamp;
@property(readonly, nonatomic) BOOL hasSessionUUID;
- (void)dealloc;

@end


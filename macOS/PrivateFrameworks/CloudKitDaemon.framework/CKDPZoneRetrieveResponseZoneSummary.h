//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CKDPZone, NSData;

__attribute__((visibility("hidden")))
@interface CKDPZoneRetrieveResponseZoneSummary : PBCodable <NSCopying>
{
    long long _assetQuotaUsage;
    long long _metadataQuotaUsage;
    NSData *_clientChangeToken;
    NSData *_currentServerContinuationToken;
    int _deviceCount;
    CKDPZone *_targetZone;
    struct {
        unsigned int assetQuotaUsage:1;
        unsigned int metadataQuotaUsage:1;
        unsigned int deviceCount:1;
    } _has;
}

@property(nonatomic) long long metadataQuotaUsage; // @synthesize metadataQuotaUsage=_metadataQuotaUsage;
@property(nonatomic) long long assetQuotaUsage; // @synthesize assetQuotaUsage=_assetQuotaUsage;
@property(nonatomic) int deviceCount; // @synthesize deviceCount=_deviceCount;
@property(retain, nonatomic) NSData *clientChangeToken; // @synthesize clientChangeToken=_clientChangeToken;
@property(retain, nonatomic) NSData *currentServerContinuationToken; // @synthesize currentServerContinuationToken=_currentServerContinuationToken;
@property(retain, nonatomic) CKDPZone *targetZone; // @synthesize targetZone=_targetZone;
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
@property(nonatomic) BOOL hasMetadataQuotaUsage;
@property(nonatomic) BOOL hasAssetQuotaUsage;
@property(nonatomic) BOOL hasDeviceCount;
@property(readonly, nonatomic) BOOL hasClientChangeToken;
@property(readonly, nonatomic) BOOL hasCurrentServerContinuationToken;
@property(readonly, nonatomic) BOOL hasTargetZone;

@end


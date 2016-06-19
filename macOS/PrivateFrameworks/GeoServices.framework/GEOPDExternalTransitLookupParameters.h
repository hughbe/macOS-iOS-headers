//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLocation, NSMutableArray, NSString;

@interface GEOPDExternalTransitLookupParameters : PBCodable <NSCopying>
{
    double _transactionTimestamp;
    NSMutableArray *_externalTransitStationCodes;
    NSString *_sourceId;
    GEOLocation *_transactionLocation;
    struct {
        unsigned int transactionTimestamp:1;
    } _has;
}

+ (Class)externalTransitStationCodeType;
@property(retain, nonatomic) NSMutableArray *externalTransitStationCodes; // @synthesize externalTransitStationCodes=_externalTransitStationCodes;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(retain, nonatomic) GEOLocation *transactionLocation; // @synthesize transactionLocation=_transactionLocation;
@property(nonatomic) double transactionTimestamp; // @synthesize transactionTimestamp=_transactionTimestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)externalTransitStationCodeAtIndex:(unsigned long long)arg1;
- (unsigned long long)externalTransitStationCodesCount;
- (void)addExternalTransitStationCode:(id)arg1;
- (void)clearExternalTransitStationCodes;
@property(readonly, nonatomic) BOOL hasSourceId;
@property(readonly, nonatomic) BOOL hasTransactionLocation;
@property(nonatomic) BOOL hasTransactionTimestamp;
- (void)dealloc;

@end


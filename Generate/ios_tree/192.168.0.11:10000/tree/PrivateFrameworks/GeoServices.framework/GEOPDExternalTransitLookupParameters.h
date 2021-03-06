/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDExternalTransitLookupParameters : PBCodable <NSCopying> {
    NSMutableArray * _externalTransitStationCodes;
    struct { 
        unsigned int has_transactionTimestamp : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_externalTransitStationCodes : 1; 
        unsigned int read_sourceId : 1; 
        unsigned int read_transactionLocation : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _sourceId;
    GEOLocation * _transactionLocation;
    double  _transactionTimestamp;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *externalTransitStationCodes;
@property (nonatomic, readonly) bool hasSourceId;
@property (nonatomic, readonly) bool hasTransactionLocation;
@property (nonatomic) bool hasTransactionTimestamp;
@property (nonatomic, retain) NSString *sourceId;
@property (nonatomic, retain) GEOLocation *transactionLocation;
@property (nonatomic) double transactionTimestamp;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)externalTransitStationCodeType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addExternalTransitStationCode:(id)arg1;
- (void)clearExternalTransitStationCodes;
- (void)clearSensitiveFields;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)externalTransitStationCodeAtIndex:(unsigned long long)arg1;
- (id)externalTransitStationCodes;
- (unsigned long long)externalTransitStationCodesCount;
- (bool)hasSourceId;
- (bool)hasTransactionLocation;
- (bool)hasTransactionTimestamp;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setExternalTransitStationCodes:(id)arg1;
- (void)setHasTransactionTimestamp:(bool)arg1;
- (void)setSourceId:(id)arg1;
- (void)setTransactionLocation:(id)arg1;
- (void)setTransactionTimestamp:(double)arg1;
- (id)sourceId;
- (id)transactionLocation;
- (double)transactionTimestamp;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

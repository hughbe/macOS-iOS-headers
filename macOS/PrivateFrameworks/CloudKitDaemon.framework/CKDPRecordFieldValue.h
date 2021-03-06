//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPAsset, CKDPDate, CKDPLocationCoordinate, CKDPPackage, CKDPRecordReference, CKDPStreamingAsset, NSData, NSMutableArray, NSString;

@interface CKDPRecordFieldValue : PBCodable <NSCopying>
{
    double _doubleValue;
    long long _signedValue;
    CKDPAsset *_assetValue;
    NSData *_bytesValue;
    CKDPDate *_dateValue;
    NSMutableArray *_listValues;
    CKDPLocationCoordinate *_locationValue;
    CKDPPackage *_packageValue;
    CKDPRecordReference *_referenceValue;
    CKDPStreamingAsset *_streamingAssetValue;
    NSString *_stringValue;
    int _type;
    BOOL _isEncrypted;
    struct {
        unsigned int doubleValue:1;
        unsigned int signedValue:1;
        unsigned int type:1;
        unsigned int isEncrypted:1;
    } _has;
}

+ (Class)listValueType;
- (void).cxx_destruct;
@property(nonatomic) BOOL isEncrypted; // @synthesize isEncrypted=_isEncrypted;
@property(retain, nonatomic) CKDPStreamingAsset *streamingAssetValue; // @synthesize streamingAssetValue=_streamingAssetValue;
@property(retain, nonatomic) CKDPPackage *packageValue; // @synthesize packageValue=_packageValue;
@property(retain, nonatomic) NSMutableArray *listValues; // @synthesize listValues=_listValues;
@property(retain, nonatomic) CKDPAsset *assetValue; // @synthesize assetValue=_assetValue;
@property(retain, nonatomic) CKDPRecordReference *referenceValue; // @synthesize referenceValue=_referenceValue;
@property(retain, nonatomic) CKDPLocationCoordinate *locationValue; // @synthesize locationValue=_locationValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(retain, nonatomic) CKDPDate *dateValue; // @synthesize dateValue=_dateValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(nonatomic) long long signedValue; // @synthesize signedValue=_signedValue;
@property(retain, nonatomic) NSData *bytesValue; // @synthesize bytesValue=_bytesValue;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasIsEncrypted;
@property(readonly, nonatomic) BOOL hasStreamingAssetValue;
@property(readonly, nonatomic) BOOL hasPackageValue;
- (id)listValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)listValuesCount;
- (void)addListValue:(id)arg1;
- (void)clearListValues;
@property(readonly, nonatomic) BOOL hasAssetValue;
@property(readonly, nonatomic) BOOL hasReferenceValue;
@property(readonly, nonatomic) BOOL hasLocationValue;
@property(readonly, nonatomic) BOOL hasStringValue;
@property(readonly, nonatomic) BOOL hasDateValue;
@property(nonatomic) BOOL hasDoubleValue;
@property(nonatomic) BOOL hasSignedValue;
@property(readonly, nonatomic) BOOL hasBytesValue;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;

@end


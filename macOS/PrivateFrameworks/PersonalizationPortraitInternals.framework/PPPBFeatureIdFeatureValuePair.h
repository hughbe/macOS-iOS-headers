//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSString;

@interface PPPBFeatureIdFeatureValuePair : PBCodable <NSCopying>
{
    NSString *_featureId;
    float _value;
    struct {
        unsigned int value:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) float value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *featureId; // @synthesize featureId=_featureId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasValue;
@property(readonly, nonatomic) BOOL hasFeatureId;

@end


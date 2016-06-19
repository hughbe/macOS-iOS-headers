//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, PBUnknownFields;

@interface _INPBPayloadUnsupported : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_conflictingParameters;
    int _reason;
    struct {
        unsigned int reason:1;
    } _has;
}

+ (Class)conflictingParametersType;
+ (id)options;
@property(retain, nonatomic) NSMutableArray *conflictingParameters; // @synthesize conflictingParameters=_conflictingParameters;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)conflictingParametersAtIndex:(unsigned long long)arg1;
- (unsigned long long)conflictingParametersCount;
- (void)addConflictingParameters:(id)arg1;
- (void)clearConflictingParameters;
@property(nonatomic) BOOL hasReason;
@property(nonatomic) int reason; // @synthesize reason=_reason;

@end


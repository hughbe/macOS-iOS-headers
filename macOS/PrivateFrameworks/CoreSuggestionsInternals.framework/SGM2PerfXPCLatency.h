//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestionsInternals/NSCopying-Protocol.h>

@class NSString;

@interface SGM2PerfXPCLatency : PBCodable <NSCopying>
{
    NSString *_key;
    int _method;
    struct {
        unsigned int method:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsMethod:(id)arg1;
- (id)methodAsString:(int)arg1;
@property(nonatomic) BOOL hasMethod;
@property(nonatomic) int method; // @synthesize method=_method;
@property(readonly, nonatomic) BOOL hasKey;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEORPProblemContext, GEORPProblemCorrections;

@interface GEORPProblem : PBCodable <NSCopying>
{
    CDStruct_95bda58d _userPaths;
    GEORPProblemContext *_problemContext;
    GEORPProblemCorrections *_problemCorrections;
    int _problemType;
    unsigned int _protocolVersion;
    struct {
        unsigned int problemType:1;
        unsigned int protocolVersion:1;
    } _has;
}

@property(retain, nonatomic) GEORPProblemContext *problemContext; // @synthesize problemContext=_problemContext;
@property(retain, nonatomic) GEORPProblemCorrections *problemCorrections; // @synthesize problemCorrections=_problemCorrections;
@property(nonatomic) unsigned int protocolVersion; // @synthesize protocolVersion=_protocolVersion;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasProblemContext;
@property(readonly, nonatomic) BOOL hasProblemCorrections;
- (int)StringAsProblemType:(id)arg1;
- (id)problemTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasProblemType;
@property(nonatomic) int problemType; // @synthesize problemType=_problemType;
- (int)StringAsUserPaths:(id)arg1;
- (id)userPathsAsString:(int)arg1;
- (void)setUserPaths:(int *)arg1 count:(unsigned long long)arg2;
- (int)userPathAtIndex:(unsigned long long)arg1;
- (void)addUserPath:(int)arg1;
- (void)clearUserPaths;
@property(readonly, nonatomic) int *userPaths;
@property(readonly, nonatomic) unsigned long long userPathsCount;
@property(nonatomic) BOOL hasProtocolVersion;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEOLogMsgEventTileSetState : PBCodable <NSCopying>
{
    double _durationInOldState;
    double _newCoverage;
    double _oldCoverage;
    int _tileSetStateType;
    CDStruct_8081ba47 _has;
}

@property(nonatomic) double newCoverage; // @synthesize newCoverage=_newCoverage;
@property(nonatomic) double oldCoverage; // @synthesize oldCoverage=_oldCoverage;
@property(nonatomic) double durationInOldState; // @synthesize durationInOldState=_durationInOldState;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasNewCoverage;
@property(nonatomic) BOOL hasOldCoverage;
- (int)StringAsTileSetStateType:(id)arg1;
- (id)tileSetStateTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasTileSetStateType;
@property(nonatomic) int tileSetStateType; // @synthesize tileSetStateType=_tileSetStateType;
@property(nonatomic) BOOL hasDurationInOldState;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface GEOPDExternalAction : PBCodable <NSCopying>
{
    int _componentType;
    NSMutableArray *_externalActionDetails;
    struct {
        unsigned int componentType:1;
    } _has;
}

+ (Class)externalActionDetailType;
@property(retain, nonatomic) NSMutableArray *externalActionDetails; // @synthesize externalActionDetails=_externalActionDetails;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)externalActionDetailAtIndex:(unsigned long long)arg1;
- (unsigned long long)externalActionDetailsCount;
- (void)addExternalActionDetail:(id)arg1;
- (void)clearExternalActionDetails;
- (int)StringAsComponentType:(id)arg1;
- (id)componentTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasComponentType;
@property(nonatomic) int componentType; // @synthesize componentType=_componentType;
- (void)dealloc;

@end


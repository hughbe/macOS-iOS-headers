//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GEOAttribution : PBCodable <NSCopying>
{
    struct GEOTileSetRegion *_regions;
    unsigned long long _regionsCount;
    unsigned long long _regionsSpace;
    NSString *_badge;
    NSString *_badgeChecksum;
    unsigned int _dataSet;
    NSString *_logo;
    NSString *_logoChecksum;
    NSString *_name;
    NSMutableArray *_resources;
    NSString *_url;
    CDStruct_2fe9a6d4 _has;
}

+ (Class)resourceType;
@property(nonatomic) unsigned int dataSet; // @synthesize dataSet=_dataSet;
@property(retain, nonatomic) NSMutableArray *resources; // @synthesize resources=_resources;
@property(retain, nonatomic) NSString *logoChecksum; // @synthesize logoChecksum=_logoChecksum;
@property(retain, nonatomic) NSString *badgeChecksum; // @synthesize badgeChecksum=_badgeChecksum;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) NSString *badge; // @synthesize badge=_badge;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasDataSet;
- (void)setRegions:(struct GEOTileSetRegion *)arg1 count:(unsigned long long)arg2;
- (struct GEOTileSetRegion)regionAtIndex:(unsigned long long)arg1;
- (void)addRegion:(struct GEOTileSetRegion)arg1;
- (void)clearRegions;
@property(readonly, nonatomic) struct GEOTileSetRegion *regions;
@property(readonly, nonatomic) unsigned long long regionsCount;
- (id)resourceAtIndex:(unsigned long long)arg1;
- (unsigned long long)resourcesCount;
- (void)addResource:(id)arg1;
- (void)clearResources;
@property(readonly, nonatomic) BOOL hasLogoChecksum;
@property(readonly, nonatomic) BOOL hasBadgeChecksum;
@property(readonly, nonatomic) BOOL hasUrl;
@property(readonly, nonatomic) BOOL hasName;
@property(readonly, nonatomic) BOOL hasLogo;
@property(readonly, nonatomic) BOOL hasBadge;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface GEORegionalResourceTileData : PBCodable <NSCopying>
{
    NSMutableArray *_attributions;
    NSMutableArray *_icons;
}

+ (Class)attributionType;
+ (Class)iconType;
@property(retain, nonatomic) NSMutableArray *attributions; // @synthesize attributions=_attributions;
@property(retain, nonatomic) NSMutableArray *icons; // @synthesize icons=_icons;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributionsCount;
- (void)addAttribution:(id)arg1;
- (void)clearAttributions;
- (id)iconAtIndex:(unsigned long long)arg1;
- (unsigned long long)iconsCount;
- (void)addIcon:(id)arg1;
- (void)clearIcons;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface GEOPDTransitConnection : PBCodable <NSCopying>
{
    unsigned long long _muid;
    NSString *_entityNameString;
    NSMutableArray *_transitLabels;
    CDStruct_e99c65f7 _has;
}

+ (Class)transitLabelType;
@property(retain, nonatomic) NSString *entityNameString; // @synthesize entityNameString=_entityNameString;
@property(retain, nonatomic) NSMutableArray *transitLabels; // @synthesize transitLabels=_transitLabels;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasEntityNameString;
- (id)transitLabelAtIndex:(unsigned long long)arg1;
- (unsigned long long)transitLabelsCount;
- (void)addTransitLabel:(id)arg1;
- (void)clearTransitLabels;
@property(nonatomic) BOOL hasMuid;
- (void)dealloc;

@end


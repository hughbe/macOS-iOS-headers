//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface GEOPBTransitZoomRangeString : PBCodable <NSCopying>
{
    NSString *_labelLanguage;
    NSString *_labelText;
    unsigned int _minZoom;
    struct {
        unsigned int minZoom:1;
    } _has;
}

@property(retain, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
@property(retain, nonatomic) NSString *labelLanguage; // @synthesize labelLanguage=_labelLanguage;
@property(nonatomic) unsigned int minZoom; // @synthesize minZoom=_minZoom;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasLabelText;
@property(readonly, nonatomic) BOOL hasLabelLanguage;
@property(nonatomic) BOOL hasMinZoom;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface _MRVirtualTouchDeviceDescriptorProtobuf : PBCodable <NSCopying>
{
    float _screenSizeHeight;
    float _screenSizeWidth;
    BOOL _absolute;
    BOOL _integratedDisplay;
    struct {
        unsigned int screenSizeHeight:1;
        unsigned int screenSizeWidth:1;
        unsigned int absolute:1;
        unsigned int integratedDisplay:1;
    } _has;
}

@property(nonatomic) float screenSizeHeight; // @synthesize screenSizeHeight=_screenSizeHeight;
@property(nonatomic) float screenSizeWidth; // @synthesize screenSizeWidth=_screenSizeWidth;
@property(nonatomic) BOOL integratedDisplay; // @synthesize integratedDisplay=_integratedDisplay;
@property(nonatomic) BOOL absolute; // @synthesize absolute=_absolute;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasScreenSizeHeight;
@property(nonatomic) BOOL hasScreenSizeWidth;
@property(nonatomic) BOOL hasIntegratedDisplay;
@property(nonatomic) BOOL hasAbsolute;

@end


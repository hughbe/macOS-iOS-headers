//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface GEOLogMsgStateDeviceLocale : PBCodable <NSCopying>
{
    NSString *_deviceInputLocale;
    NSString *_deviceOutputLocale;
    NSString *_deviceSettingsLocale;
}

@property(retain, nonatomic) NSString *deviceOutputLocale; // @synthesize deviceOutputLocale=_deviceOutputLocale;
@property(retain, nonatomic) NSString *deviceInputLocale; // @synthesize deviceInputLocale=_deviceInputLocale;
@property(retain, nonatomic) NSString *deviceSettingsLocale; // @synthesize deviceSettingsLocale=_deviceSettingsLocale;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasDeviceOutputLocale;
@property(readonly, nonatomic) BOOL hasDeviceInputLocale;
@property(readonly, nonatomic) BOOL hasDeviceSettingsLocale;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPUserPrivacySettingsBatchLookupResponse : PBCodable <NSCopying>
{
    NSMutableArray *_containerPrivacySettings;
}

+ (Class)containerPrivacySettingsType;
@property(retain, nonatomic) NSMutableArray *containerPrivacySettings; // @synthesize containerPrivacySettings=_containerPrivacySettings;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)containerPrivacySettingsAtIndex:(unsigned long long)arg1;
- (unsigned long long)containerPrivacySettingsCount;
- (void)addContainerPrivacySettings:(id)arg1;
- (void)clearContainerPrivacySettings;

@end


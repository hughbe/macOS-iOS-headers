//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSString;

@interface BRServerInfoRecordInfo : PBCodable <NSCopying>
{
    unsigned long long _bounceNo;
    NSData *_encryptedBasename;
    NSString *_etag;
    NSString *_extension;
    NSString *_recordID;
    NSData *_recordProtectionInfo;
    NSString *_zoneName;
    NSData *_zoneProtectionInfo;
    struct {
        unsigned int bounceNo:1;
    } _has;
}

@property(retain, nonatomic) NSData *zoneProtectionInfo; // @synthesize zoneProtectionInfo=_zoneProtectionInfo;
@property(retain, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(retain, nonatomic) NSData *recordProtectionInfo; // @synthesize recordProtectionInfo=_recordProtectionInfo;
@property(retain, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(nonatomic) unsigned long long bounceNo; // @synthesize bounceNo=_bounceNo;
@property(retain, nonatomic) NSData *encryptedBasename; // @synthesize encryptedBasename=_encryptedBasename;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
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
@property(readonly, nonatomic) BOOL hasZoneProtectionInfo;
@property(readonly, nonatomic) BOOL hasZoneName;
@property(readonly, nonatomic) BOOL hasRecordProtectionInfo;
@property(readonly, nonatomic) BOOL hasExtension;
@property(nonatomic) BOOL hasBounceNo;
@property(readonly, nonatomic) BOOL hasEncryptedBasename;
@property(readonly, nonatomic) BOOL hasEtag;
@property(readonly, nonatomic) BOOL hasRecordID;

@end


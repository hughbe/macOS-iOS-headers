//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SafariCore/NSCopying-Protocol.h>

@interface WBSAnalyticsSafariSafeBrowsingUserActionAfterSeeingWarningEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _action;
    CDStruct_399b966a _has;
}

@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsAction:(id)arg1;
- (id)actionAsString:(int)arg1;
@property(nonatomic) BOOL hasAction;
@property(nonatomic) int action; // @synthesize action=_action;
@property(nonatomic) BOOL hasTimestamp;

@end


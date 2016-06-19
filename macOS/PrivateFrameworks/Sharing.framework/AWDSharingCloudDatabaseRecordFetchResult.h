//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface AWDSharingCloudDatabaseRecordFetchResult : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _errorCode;
    NSString *_errorDomain;
    unsigned int _updateCount;
    struct {
        unsigned int timestamp:1;
        unsigned int errorCode:1;
        unsigned int updateCount:1;
    } _has;
}

@property(nonatomic) unsigned int updateCount; // @synthesize updateCount=_updateCount;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
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
@property(nonatomic) BOOL hasUpdateCount;
@property(nonatomic) BOOL hasErrorCode;
@property(readonly, nonatomic) BOOL hasErrorDomain;
@property(nonatomic) BOOL hasTimestamp;

@end


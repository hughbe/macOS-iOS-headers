//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SafariCore/NSCopying-Protocol.h>

@interface WBSAnalyticsSafariPageLoadCompleteEvent : PBCodable <NSCopying>
{
    unsigned long long _configurationID;
    long long _errorCode;
    unsigned long long _pageID;
    unsigned long long _pageLoadTime;
    unsigned long long _timestamp;
    struct {
        unsigned int configurationID:1;
        unsigned int errorCode:1;
        unsigned int pageID:1;
        unsigned int pageLoadTime:1;
        unsigned int timestamp:1;
    } _has;
}

@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned long long pageLoadTime; // @synthesize pageLoadTime=_pageLoadTime;
@property(nonatomic) unsigned long long pageID; // @synthesize pageID=_pageID;
@property(nonatomic) unsigned long long configurationID; // @synthesize configurationID=_configurationID;
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
@property(nonatomic) BOOL hasErrorCode;
@property(nonatomic) BOOL hasPageLoadTime;
@property(nonatomic) BOOL hasPageID;
@property(nonatomic) BOOL hasConfigurationID;
@property(nonatomic) BOOL hasTimestamp;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface GEOPDAnalyticMetadata : PBCodable <NSCopying>
{
    struct GEOSessionID _sessionId;
    NSString *_appIdentifier;
    NSString *_appMajorVersion;
    NSString *_appMinorVersion;
    NSString *_hardwareModel;
    NSString *_loggedAbExperiment;
    NSString *_osVersion;
    NSString *_productName;
    int _requestSource;
    unsigned int _sequenceNumber;
    NSMutableArray *_serviceTags;
    BOOL _isFromApi;
    BOOL _isInternalInstall;
    BOOL _isInternalTool;
    struct {
        unsigned int sessionId:1;
        unsigned int requestSource:1;
        unsigned int sequenceNumber:1;
        unsigned int isFromApi:1;
        unsigned int isInternalInstall:1;
        unsigned int isInternalTool:1;
    } _has;
}

+ (Class)serviceTagType;
@property(retain, nonatomic) NSString *loggedAbExperiment; // @synthesize loggedAbExperiment=_loggedAbExperiment;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSMutableArray *serviceTags; // @synthesize serviceTags=_serviceTags;
@property(nonatomic) BOOL isFromApi; // @synthesize isFromApi=_isFromApi;
@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) struct GEOSessionID sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) BOOL isInternalInstall; // @synthesize isInternalInstall=_isInternalInstall;
@property(nonatomic) BOOL isInternalTool; // @synthesize isInternalTool=_isInternalTool;
@property(retain, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain, nonatomic) NSString *hardwareModel; // @synthesize hardwareModel=_hardwareModel;
@property(retain, nonatomic) NSString *appMinorVersion; // @synthesize appMinorVersion=_appMinorVersion;
@property(retain, nonatomic) NSString *appMajorVersion; // @synthesize appMajorVersion=_appMajorVersion;
@property(retain, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasLoggedAbExperiment;
@property(readonly, nonatomic) BOOL hasProductName;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceTagsCount;
- (void)addServiceTag:(id)arg1;
- (void)clearServiceTags;
@property(nonatomic) BOOL hasIsFromApi;
- (int)StringAsRequestSource:(id)arg1;
- (id)requestSourceAsString:(int)arg1;
@property(nonatomic) BOOL hasRequestSource;
@property(nonatomic) int requestSource; // @synthesize requestSource=_requestSource;
@property(nonatomic) BOOL hasSequenceNumber;
@property(nonatomic) BOOL hasSessionId;
@property(nonatomic) BOOL hasIsInternalInstall;
@property(nonatomic) BOOL hasIsInternalTool;
@property(readonly, nonatomic) BOOL hasOsVersion;
@property(readonly, nonatomic) BOOL hasHardwareModel;
@property(readonly, nonatomic) BOOL hasAppMinorVersion;
@property(readonly, nonatomic) BOOL hasAppMajorVersion;
@property(readonly, nonatomic) BOOL hasAppIdentifier;
- (void)dealloc;
- (id)initWithTraits:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface GEODataSetURLOverride : PBCodable <NSCopying>
{
    NSString *_addressCorrectionInitURL;
    NSString *_addressCorrectionUpdateURL;
    NSString *_announcementsURL;
    NSString *_batchReverseGeocoderURL;
    NSString *_businessPortalBaseURL;
    unsigned int _dataSet;
    NSString *_directionsURL;
    NSString *_dispatcherURL;
    NSString *_etaURL;
    NSString *_logMessageUsageURL;
    NSString *_problemCategoriesURL;
    NSString *_problemOptInURL;
    NSString *_problemStatusURL;
    NSString *_problemSubmissionURL;
    NSString *_simpleETAURL;
    NSString *_spatialLookupURL;
    CDStruct_2fe9a6d4 _has;
}

@property(retain, nonatomic) NSString *spatialLookupURL; // @synthesize spatialLookupURL=_spatialLookupURL;
@property(retain, nonatomic) NSString *logMessageUsageURL; // @synthesize logMessageUsageURL=_logMessageUsageURL;
@property(retain, nonatomic) NSString *businessPortalBaseURL; // @synthesize businessPortalBaseURL=_businessPortalBaseURL;
@property(retain, nonatomic) NSString *problemOptInURL; // @synthesize problemOptInURL=_problemOptInURL;
@property(retain, nonatomic) NSString *dispatcherURL; // @synthesize dispatcherURL=_dispatcherURL;
@property(retain, nonatomic) NSString *announcementsURL; // @synthesize announcementsURL=_announcementsURL;
@property(retain, nonatomic) NSString *problemCategoriesURL; // @synthesize problemCategoriesURL=_problemCategoriesURL;
@property(retain, nonatomic) NSString *problemStatusURL; // @synthesize problemStatusURL=_problemStatusURL;
@property(retain, nonatomic) NSString *problemSubmissionURL; // @synthesize problemSubmissionURL=_problemSubmissionURL;
@property(retain, nonatomic) NSString *addressCorrectionUpdateURL; // @synthesize addressCorrectionUpdateURL=_addressCorrectionUpdateURL;
@property(retain, nonatomic) NSString *addressCorrectionInitURL; // @synthesize addressCorrectionInitURL=_addressCorrectionInitURL;
@property(retain, nonatomic) NSString *simpleETAURL; // @synthesize simpleETAURL=_simpleETAURL;
@property(retain, nonatomic) NSString *batchReverseGeocoderURL; // @synthesize batchReverseGeocoderURL=_batchReverseGeocoderURL;
@property(retain, nonatomic) NSString *etaURL; // @synthesize etaURL=_etaURL;
@property(retain, nonatomic) NSString *directionsURL; // @synthesize directionsURL=_directionsURL;
@property(nonatomic) unsigned int dataSet; // @synthesize dataSet=_dataSet;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasSpatialLookupURL;
@property(readonly, nonatomic) BOOL hasLogMessageUsageURL;
@property(readonly, nonatomic) BOOL hasBusinessPortalBaseURL;
@property(readonly, nonatomic) BOOL hasProblemOptInURL;
@property(readonly, nonatomic) BOOL hasDispatcherURL;
@property(readonly, nonatomic) BOOL hasAnnouncementsURL;
@property(readonly, nonatomic) BOOL hasProblemCategoriesURL;
@property(readonly, nonatomic) BOOL hasProblemStatusURL;
@property(readonly, nonatomic) BOOL hasProblemSubmissionURL;
@property(readonly, nonatomic) BOOL hasAddressCorrectionUpdateURL;
@property(readonly, nonatomic) BOOL hasAddressCorrectionInitURL;
@property(readonly, nonatomic) BOOL hasSimpleETAURL;
@property(readonly, nonatomic) BOOL hasBatchReverseGeocoderURL;
@property(readonly, nonatomic) BOOL hasEtaURL;
@property(readonly, nonatomic) BOOL hasDirectionsURL;
@property(nonatomic) BOOL hasDataSet;
- (void)dealloc;

@end


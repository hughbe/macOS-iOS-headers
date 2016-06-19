//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class GEOPDAnalyticMetadata, GEOPDClientMetadata, GEOPDPlaceRequestParameters, NSMutableArray, NSString;

@interface GEOPDPlaceRequest : PBRequest <NSCopying>
{
    GEOPDAnalyticMetadata *_analyticMetadata;
    GEOPDClientMetadata *_clientMetadata;
    NSMutableArray *_displayLanguages;
    NSString *_displayRegion;
    GEOPDPlaceRequestParameters *_placeRequestParameters;
    int _requestType;
    NSMutableArray *_requestedComponents;
    NSMutableArray *_spokenLanguages;
    BOOL _needLatency;
    BOOL _suppressResultsRequiringAttribution;
    struct {
        unsigned int requestType:1;
        unsigned int needLatency:1;
        unsigned int suppressResultsRequiringAttribution:1;
    } _has;
}

+ (Class)requestedComponentType;
+ (Class)spokenLanguageType;
+ (Class)displayLanguageType;
@property(retain, nonatomic) GEOPDPlaceRequestParameters *placeRequestParameters; // @synthesize placeRequestParameters=_placeRequestParameters;
@property(nonatomic) BOOL suppressResultsRequiringAttribution; // @synthesize suppressResultsRequiringAttribution=_suppressResultsRequiringAttribution;
@property(retain, nonatomic) NSMutableArray *requestedComponents; // @synthesize requestedComponents=_requestedComponents;
@property(retain, nonatomic) NSMutableArray *spokenLanguages; // @synthesize spokenLanguages=_spokenLanguages;
@property(retain, nonatomic) NSString *displayRegion; // @synthesize displayRegion=_displayRegion;
@property(retain, nonatomic) NSMutableArray *displayLanguages; // @synthesize displayLanguages=_displayLanguages;
@property(retain, nonatomic) GEOPDClientMetadata *clientMetadata; // @synthesize clientMetadata=_clientMetadata;
@property(retain, nonatomic) GEOPDAnalyticMetadata *analyticMetadata; // @synthesize analyticMetadata=_analyticMetadata;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasPlaceRequestParameters;
- (int)StringAsRequestType:(id)arg1;
- (id)requestTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasRequestType;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
@property(nonatomic) BOOL hasSuppressResultsRequiringAttribution;
- (id)requestedComponentAtIndex:(unsigned long long)arg1;
- (unsigned long long)requestedComponentsCount;
- (void)addRequestedComponent:(id)arg1;
- (void)clearRequestedComponents;
- (id)spokenLanguageAtIndex:(unsigned long long)arg1;
- (unsigned long long)spokenLanguagesCount;
- (void)addSpokenLanguage:(id)arg1;
- (void)clearSpokenLanguages;
@property(readonly, nonatomic) BOOL hasDisplayRegion;
- (id)displayLanguageAtIndex:(unsigned long long)arg1;
- (unsigned long long)displayLanguagesCount;
- (void)addDisplayLanguage:(id)arg1;
- (void)clearDisplayLanguages;
@property(readonly, nonatomic) BOOL hasClientMetadata;
@property(readonly, nonatomic) BOOL hasAnalyticMetadata;
- (void)dealloc;
@property(nonatomic) BOOL hasNeedLatency;
@property(nonatomic) BOOL needLatency;
- (BOOL)shouldConsiderCaching;
- (BOOL)isMerchantRequest;
- (BOOL)isCanonicalLocationSearchRequest;
- (BOOL)isForwardGeocoderRequest;
- (id)initForNearestTransitStationWithLine:(unsigned long long)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 includeETA:(BOOL)arg3 traits:(id)arg4;
- (id)initForSearchFieldPlaceholderWithTraits:(id)arg1;
- (id)initWithBatchPopularNearbySearchCategories:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithPopularNearbySearchCategory:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithSearchCategory:(id)arg1 searchString:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithCategory:(id)arg1 routeInfo:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithCategory:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initForSpotlightCategoryListWithTraits:(id)arg1;
- (int)geoUserPreferredTransportType;
- (id)initForCategoryListWithTraits:(id)arg1;
- (id)initWithAutocompleteFragment:(id)arg1 type:(int)arg2 traits:(id)arg3 categoryFilter:(id)arg4;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5 maxResults:(unsigned int)arg6 traits:(id)arg7;
- (id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 autocompleteEntry:(id)arg4 maxResults:(unsigned int)arg5 suppressResultsRequiringAttribution:(BOOL)arg6 includeETA:(BOOL)arg7 traits:(id)arg8;
- (id)initWithCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2;
- (id)initWithVendorSpecificPlaceRefinementParameters:(id)arg1 traits:(id)arg2;
- (id)initWithPlaceRefinementParameters:(id)arg1 traits:(id)arg2;
- (id)initWithMapItemToRefine:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 traits:(id)arg3;
- (id)initWithMapItemToRefine:(id)arg1 traits:(id)arg2;
- (id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithReverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1 includeEntryPoints:(BOOL)arg2 includeETA:(BOOL)arg3 preserveOriginalLocation:(BOOL)arg4 traits:(id)arg5;
- (id)initWithExternalTransitStationCodes:(id)arg1 sourceID:(id)arg2 transactionDate:(id)arg3 transactionLocation:(id)arg4 traits:(id)arg5;
- (id)initWithMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 paymentNetwork:(id)arg3 transactionDate:(id)arg4 transactionLocation:(id)arg5 traits:(id)arg6;
- (id)initWithExternalBusinessID:(id)arg1 contentProvider:(id)arg2 includeETA:(BOOL)arg3 traits:(id)arg4;
- (id)initWithMUIDs:(id)arg1 resultProviderID:(int)arg2 includeETA:(BOOL)arg3 traits:(id)arg4;
- (id)initWithComponents:(id)arg1 muid:(unsigned long long)arg2 resultProviderID:(int)arg3 traits:(id)arg4;
- (id)initWithTraits:(id)arg1 count:(unsigned int)arg2 includeETA:(BOOL)arg3 includeEntryPoints:(BOOL)arg4;
- (id)_initWithTraits:(id)arg1;
- (id)initForAutocompleteWithTraits:(id)arg1 count:(unsigned int)arg2;

@end


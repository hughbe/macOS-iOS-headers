//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOMapRegion, GEOPDRelatedSearchSuggestion, GEOPDSearchClientBehavior, NSMutableArray, NSString;

@interface GEOPDSearchResult : PBCodable <NSCopying>
{
    GEOPDRelatedSearchSuggestion *_defaultRelatedSearchSuggestion;
    NSMutableArray *_disambiguationLabels;
    GEOMapRegion *_displayMapRegion;
    NSMutableArray *_relatedSearchSuggestions;
    NSString *_resultDisplayHeader;
    GEOPDSearchClientBehavior *_searchClientBehavior;
    int _searchResultType;
    BOOL _isChainResultSet;
    struct {
        unsigned int searchResultType:1;
        unsigned int isChainResultSet:1;
    } _has;
}

+ (Class)relatedSearchSuggestionType;
+ (Class)disambiguationLabelType;
@property(retain, nonatomic) GEOPDSearchClientBehavior *searchClientBehavior; // @synthesize searchClientBehavior=_searchClientBehavior;
@property(retain, nonatomic) GEOPDRelatedSearchSuggestion *defaultRelatedSearchSuggestion; // @synthesize defaultRelatedSearchSuggestion=_defaultRelatedSearchSuggestion;
@property(retain, nonatomic) NSString *resultDisplayHeader; // @synthesize resultDisplayHeader=_resultDisplayHeader;
@property(retain, nonatomic) NSMutableArray *relatedSearchSuggestions; // @synthesize relatedSearchSuggestions=_relatedSearchSuggestions;
@property(nonatomic) BOOL isChainResultSet; // @synthesize isChainResultSet=_isChainResultSet;
@property(retain, nonatomic) NSMutableArray *disambiguationLabels; // @synthesize disambiguationLabels=_disambiguationLabels;
@property(retain, nonatomic) GEOMapRegion *displayMapRegion; // @synthesize displayMapRegion=_displayMapRegion;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasSearchClientBehavior;
@property(readonly, nonatomic) BOOL hasDefaultRelatedSearchSuggestion;
@property(readonly, nonatomic) BOOL hasResultDisplayHeader;
- (int)StringAsSearchResultType:(id)arg1;
- (id)searchResultTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasSearchResultType;
@property(nonatomic) int searchResultType; // @synthesize searchResultType=_searchResultType;
- (id)relatedSearchSuggestionAtIndex:(unsigned long long)arg1;
- (unsigned long long)relatedSearchSuggestionsCount;
- (void)addRelatedSearchSuggestion:(id)arg1;
- (void)clearRelatedSearchSuggestions;
@property(nonatomic) BOOL hasIsChainResultSet;
- (id)disambiguationLabelAtIndex:(unsigned long long)arg1;
- (unsigned long long)disambiguationLabelsCount;
- (void)addDisambiguationLabel:(id)arg1;
- (void)clearDisambiguationLabels;
@property(readonly, nonatomic) BOOL hasDisplayMapRegion;
- (void)dealloc;

@end


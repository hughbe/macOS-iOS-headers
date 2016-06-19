//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPDAutocompleteEntry, GEOPDViewportInfo, NSData, NSString;

@interface GEOPDAutocompleteParametersAllEntriesWithBrowse : PBCodable <NSCopying>
{
    GEOPDAutocompleteEntry *_categorySuggestionEntry;
    NSData *_categorySuggestionEntryMetadata;
    int _maxResults;
    NSString *_query;
    GEOPDViewportInfo *_viewportInfo;
    BOOL _highlightDiff;
    BOOL _interleaveCategorySuggestions;
    struct {
        unsigned int maxResults:1;
        unsigned int highlightDiff:1;
        unsigned int interleaveCategorySuggestions:1;
    } _has;
}

@property(nonatomic) BOOL interleaveCategorySuggestions; // @synthesize interleaveCategorySuggestions=_interleaveCategorySuggestions;
@property(retain, nonatomic) GEOPDAutocompleteEntry *categorySuggestionEntry; // @synthesize categorySuggestionEntry=_categorySuggestionEntry;
@property(retain, nonatomic) NSData *categorySuggestionEntryMetadata; // @synthesize categorySuggestionEntryMetadata=_categorySuggestionEntryMetadata;
@property(retain, nonatomic) GEOPDViewportInfo *viewportInfo; // @synthesize viewportInfo=_viewportInfo;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasInterleaveCategorySuggestions;
@property(readonly, nonatomic) BOOL hasCategorySuggestionEntry;
@property(readonly, nonatomic) BOOL hasCategorySuggestionEntryMetadata;
@property(nonatomic) BOOL hasHighlightDiff;
@property(nonatomic) BOOL highlightDiff; // @synthesize highlightDiff=_highlightDiff;
@property(nonatomic) BOOL hasMaxResults;
@property(nonatomic) int maxResults; // @synthesize maxResults=_maxResults;
@property(readonly, nonatomic) BOOL hasViewportInfo;
@property(readonly, nonatomic) BOOL hasQuery;
- (void)dealloc;

@end


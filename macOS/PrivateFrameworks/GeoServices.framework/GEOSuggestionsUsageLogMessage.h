//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPDAutocompleteEntry, NSData, NSMutableArray, NSString;

@interface GEOSuggestionsUsageLogMessage : PBCodable <NSCopying>
{
    NSMutableArray *_displayedResults;
    NSString *_prefix;
    int _searchFieldType;
    int _selectedIndex;
    GEOPDAutocompleteEntry *_suggestionEntry;
    int _suggestionEntryIndex;
    int _suggestionEntryListIndex;
    NSData *_suggestionEntryMetadata;
    NSData *_suggestionMetadata;
    CDStruct_de532012 _has;
}

+ (Class)displayedResultType;
@property(nonatomic) int selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSMutableArray *displayedResults; // @synthesize displayedResults=_displayedResults;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(retain, nonatomic) GEOPDAutocompleteEntry *suggestionEntry; // @synthesize suggestionEntry=_suggestionEntry;
@property(retain, nonatomic) NSData *suggestionEntryMetadata; // @synthesize suggestionEntryMetadata=_suggestionEntryMetadata;
@property(retain, nonatomic) NSData *suggestionMetadata; // @synthesize suggestionMetadata=_suggestionMetadata;
@property(nonatomic) int suggestionEntryIndex; // @synthesize suggestionEntryIndex=_suggestionEntryIndex;
@property(nonatomic) int suggestionEntryListIndex; // @synthesize suggestionEntryListIndex=_suggestionEntryListIndex;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsSearchFieldType:(id)arg1;
- (id)searchFieldTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasSearchFieldType;
@property(nonatomic) int searchFieldType; // @synthesize searchFieldType=_searchFieldType;
@property(nonatomic) BOOL hasSelectedIndex;
- (id)displayedResultAtIndex:(unsigned long long)arg1;
- (unsigned long long)displayedResultsCount;
- (void)addDisplayedResult:(id)arg1;
- (void)clearDisplayedResults;
@property(readonly, nonatomic) BOOL hasPrefix;
@property(readonly, nonatomic) BOOL hasSuggestionEntry;
@property(readonly, nonatomic) BOOL hasSuggestionEntryMetadata;
@property(readonly, nonatomic) BOOL hasSuggestionMetadata;
@property(nonatomic) BOOL hasSuggestionEntryIndex;
@property(nonatomic) BOOL hasSuggestionEntryListIndex;
- (void)dealloc;

@end


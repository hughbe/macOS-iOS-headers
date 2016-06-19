//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface GEOPDAutocompleteResultSection : PBCodable <NSCopying>
{
    NSMutableArray *_entries;
    NSString *_name;
    int _suggestionType;
    int _type;
    struct {
        unsigned int suggestionType:1;
        unsigned int type:1;
    } _has;
}

+ (Class)entriesType;
@property(retain, nonatomic) NSMutableArray *entries; // @synthesize entries=_entries;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsSuggestionType:(id)arg1;
- (id)suggestionTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasSuggestionType;
@property(nonatomic) int suggestionType; // @synthesize suggestionType=_suggestionType;
- (id)entriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entriesCount;
- (void)addEntries:(id)arg1;
- (void)clearEntries;
@property(readonly, nonatomic) BOOL hasName;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)dealloc;

@end


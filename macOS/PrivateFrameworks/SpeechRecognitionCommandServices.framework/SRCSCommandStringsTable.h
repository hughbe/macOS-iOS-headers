//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface SRCSCommandStringsTable : NSObject
{
    NSDictionary *_commandStringsCache;
}

+ (id)languageModelDictionaryFromCommandText:(id)arg1 parsingErrorString:(id *)arg2;
+ (BOOL)isSameLocaleIdentifier:(id)arg1 secondLocaleIdentifier:(id)arg2;
+ (id)componentsFromLocaleIdentifier:(id)arg1;
+ (id)supportedTargetTypes;
- (id)createCommandStringsDictionaryForLocaleIdentifier:(id)arg1;
- (id)warningStringForText:(id)arg1 identifier:(id)arg2 textTable:(id)arg3;
- (id)rowDataForTargetTypes:(id)arg1;
- (id)spokenStringPermutationsOfLanguageModelDictionary:(id)arg1 stringsTable:(id)arg2;
- (id)languageModelDictionaryForCommandIdentifier:(id)arg1 targetType:(id)arg2 parsingErrorString:(id *)arg3;
- (id)unparsedCommandTextForCommandIdentifier:(id)arg1 targetType:(id)arg2;
- (void)removeDuplicateSpacesFromMutableString:(id)arg1;
- (id)spokenStringPermutationOfLanguageModelDictionary:(id)arg1 givenPermutation:(unsigned short *)arg2 stringsTable:(id)arg3;
- (unsigned long long)countOptionalNodesOfLanguageModelDictionary:(id)arg1;
- (id)rootCommandIdentifier:(id)arg1 foundTargetType:(id *)arg2;
- (BOOL)isSupportedCommandIdentifier:(id)arg1 forTargetTypes:(id)arg2;
- (id)supportedCommandIdentifiersForTargetTypes:(id)arg1;
- (void)dealloc;
- (id)initWithLocaleIdentifier:(id)arg1;

@end


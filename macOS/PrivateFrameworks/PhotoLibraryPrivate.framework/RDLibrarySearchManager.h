//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RDLibrarySearchManager : NSObject
{
    int _rebuildStatus;
}

+ (id)tokensForString:(id)arg1 inDatabase:(id)arg2 ignoreSubTokens:(BOOL)arg3;
+ (void)rebuildSearchIndex:(id)arg1 withReason:(unsigned short)arg2;
+ (void)rebuildSearchIndex:(id)arg1 withReason:(unsigned short)arg2 whenDoneClearing:(CDUnknownBlockType)arg3;
+ (BOOL)indexRebuildInProgress;
+ (void)clearSearchIndex:(id)arg1 withReason:(unsigned short)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)replaceSceneClassifierSearchIndexTextInDatabase:(id)arg1 withReason:(unsigned short)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)updateSearchIndexTextInDatabase:(id)arg1 withReason:(unsigned short)arg2 upgrading:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)_replaceSceneClassifierSearchIndexTextInDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_updateSearchIndexTextInDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)updateSceneClassifierSearchIndexTextInVersions:(id)arg1;
+ (void)updateSearchIndexTextInVersions:(id)arg1;
+ (void)makePlacesSearchTextForVersion:(id)arg1 inDictionary:(id)arg2;
+ (void)makePlacesSearchTextForVersion:(id)arg1 revGeoPlace:(id)arg2 inDictionary:(id)arg3;
+ (void)updateFacesSearchTextForPerson:(id)arg1;
+ (void)updateFacesSearchTextForVersion:(id)arg1 addingPersonsNamed:(id)arg2 removingPersonsNamed:(id)arg3;
+ (void)updateFacesSearchTextForVersion:(id)arg1;
+ (void)replaceBasicMetadataSearchTextForVersion:(id)arg1;
+ (void)makeFacesSearchTextForVersion:(id)arg1 inDictionary:(id)arg2;
+ (void)makeFacesSearchTextWithPersonNames:(id)arg1 inDictionary:(id)arg2;
+ (void)makeBasicMetadataSearchTextForVersion:(id)arg1 inDictionary:(id)arg2;
+ (void)makeBasicMetadataSearchTextForVersion:(id)arg1 withFilenames:(id)arg2 inDictionary:(id)arg3;
+ (void)makeDateSearchTextForVersion:(id)arg1 inDictionary:(id)arg2;
+ (void)updateKeywordSearchTextForVersion:(id)arg1 addingKeywords:(id)arg2 removingKeywords:(id)arg3 clobberingWithKeywords:(id)arg4;
+ (void)replaceKeywordSearchTextForVersions:(id)arg1;
+ (void)makeKeywordSearchTextForVersion:(id)arg1 inDictionary:(id)arg2;
+ (void)makeKeywordSearchTextWithKeywordStrings:(id)arg1 inDictionary:(id)arg2;
+ (void)rebuildSceneClassifierSearchTextForVersion:(id)arg1;
+ (void)replaceSceneClassifiersForVersion:(id)arg1 scenes:(id)arg2;
+ (void)replaceSearchTextForVersion:(id)arg1 replacedValues:(id)arg2 addedValues:(id)arg3 removedValues:(id)arg4;
+ (id)tokenValueForVersion:(id)arg1 tokenType:(unsigned long long)arg2;
+ (id)searchIndexVersionProperties:(id)arg1;
+ (BOOL)databaseRebuildNeeded:(id)arg1 upgrading:(BOOL)arg2;
+ (void)storeDatabase:(id)arg1 searchIndexDataVersion:(long long)arg2 rebuildStatus:(int)arg3;
+ (void)readDatabase:(id)arg1 upgrading:(BOOL)arg2 searchIndexDataVersion:(long long *)arg3 rebuildStatus:(int *)arg4;
+ (void)serialiseSync:(CDUnknownBlockType)arg1;
+ (id)serialQueue;
- (id)startSearch:(id)arg1 inDatabase:(id)arg2;
- (void)_rebuildSearchIndexInDatabase:(id)arg1 withReason:(unsigned short)arg2 whenDoneClearing:(CDUnknownBlockType)arg3;
- (Class)searchResultClassForMemoryWithMatchTypes:(id)arg1;
- (Class)searchResultClassForAlbumWithMatchTypes:(id)arg1;
- (Class)searchResultClassForVersionsWithMatchTypes:(id)arg1;
- (id)init;

@end


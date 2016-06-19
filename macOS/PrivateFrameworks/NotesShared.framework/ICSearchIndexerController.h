//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICSearchIndexerContext;

@interface ICSearchIndexerController : NSObject
{
    ICSearchIndexerContext *_searchIndexerContext;
    id <ICSearchIndexer> _searchIndexer;
}

+ (void)clearSharedInstance;
+ (id)sharedInstance;
+ (void)startSharedInstance;
@property(retain, nonatomic) id <ICSearchIndexer> searchIndexer; // @synthesize searchIndexer=_searchIndexer;
@property(retain, nonatomic) ICSearchIndexerContext *searchIndexerContext; // @synthesize searchIndexerContext=_searchIndexerContext;
- (void).cxx_destruct;
- (void)removeSearchIndexableNoteContextForChangeNotifyingManagedObjectContext:(id)arg1;
- (void)addSearchIndexableNoteContext:(id)arg1 withChangeNotifyingManagedObjectContext:(id)arg2;
- (void)createSearchIndexerIfNecessary;
- (void)createSearchIndexer;
- (id)newSearchIndexer;
- (id)init;

@end


/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
 */

@interface PODataSource : NSObject {
    bool  _constructingData;
    NSString * _databaseUUID;
    NSString * _firstRevisionUUID;
    NSMutableDictionary * _podcastCollectionsByUUID;
    NSDate * _podcastDataPlistLastModified;
    NSMutableArray * _podcastRevisions;
    NSMutableDictionary * _podcastStationsByUUID;
    NSDate * _revisionsDataPlistLastModified;
}

@property bool constructingData;
@property (retain) NSString *databaseUUID;
@property (retain) NSString *firstRevisionUUID;
@property (nonatomic, retain) NSMutableDictionary *podcastCollectionsByUUID;
@property (retain) NSDate *podcastDataPlistLastModified;
@property (nonatomic, retain) NSMutableArray *podcastRevisions;
@property (nonatomic, retain) NSMutableDictionary *podcastStationsByUUID;
@property (retain) NSDate *revisionsDataPlistLastModified;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)arrayFromPlistURL:(id)arg1;
- (id)constructModelObjectOfClass:(Class)arg1 fromDictionary:(id)arg2;
- (id)constructModelObjectsFromDictionaries:(id)arg1 withIndexPath:(id)arg2 modelObjectClass:(Class)arg3;
- (void)constructRevisionFromDictionary:(id)arg1 isPodcastCollections:(bool)arg2 isDelete:(bool)arg3;
- (void)constructRevisionsFromDictionary:(id)arg1 isPodcastCollections:(bool)arg2;
- (bool)constructingData;
- (id)containerURL;
- (id)databaseUUID;
- (id)dbPlistURL;
- (id)description;
- (id)domainObjectWithUUID:(id)arg1;
- (id)firstRevisionUUID;
- (id)init;
- (void)initializeDataFromDictionary;
- (bool)isPodcastDataStale;
- (bool)isPodcastRevisionDataStale;
- (bool)isPodcastsInstalled;
- (id)podcastCollectionWithUUID:(id)arg1;
- (id)podcastCollections;
- (id)podcastCollectionsByUUID;
- (id)podcastCollectionsMatchingString:(id)arg1 maxResults:(long long)arg2;
- (id)podcastDataPlistLastModified;
- (id)podcastModelObjectsInArray:(id)arg1 matchingString:(id)arg2 maxResults:(long long)arg3;
- (id)podcastRevisions;
- (id)podcastRevisionsSinceAnchor:(unsigned long long)arg1;
- (id)podcastStationWithUUID:(id)arg1;
- (id)podcastStations;
- (id)podcastStationsByUUID;
- (id)podcastStationsMatchingString:(id)arg1 maxResults:(long long)arg2;
- (id)podcastsIndexPath;
- (id)revisionPlistURL;
- (id)revisionsDataPlistLastModified;
- (void)setConstructingData:(bool)arg1;
- (void)setDatabaseUUID:(id)arg1;
- (void)setFirstRevisionUUID:(id)arg1;
- (void)setPodcastCollectionsByUUID:(id)arg1;
- (void)setPodcastDataPlistLastModified:(id)arg1;
- (void)setPodcastRevisions:(id)arg1;
- (void)setPodcastStationsByUUID:(id)arg1;
- (void)setRevisionsDataPlistLastModified:(id)arg1;
- (id)validity;

@end

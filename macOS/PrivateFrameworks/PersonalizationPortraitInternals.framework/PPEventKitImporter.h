//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PPLocalEventStore, PPLocalLocationStore, PPLocalNamedEntityStore, SGDataDetectorDissector, SGNamedEntityDissector, SGSqlEntityStore, SGURLDissector;

@interface PPEventKitImporter : NSObject
{
    PPLocalEventStore *_eventStore;
    PPLocalNamedEntityStore *_namedEntityStore;
    PPLocalLocationStore *_locationStore;
    SGSqlEntityStore *_urlStore;
    SGURLDissector *_urlDissector;
    SGNamedEntityDissector *_neDissector;
    SGDataDetectorDissector *_ddDissector;
    struct atomic_flag _fullImportInProgress;
}

+ (BOOL)_shouldImport;
+ (id)defaultInstance;
- (void).cxx_destruct;
- (BOOL)_flush;
- (BOOL)_deleteOldLocations;
- (BOOL)_deleteOldEntities;
- (BOOL)deleteAllExtractions;
- (void)_donateEntityContainer:(id)arg1;
- (void)_donateURLContainer:(id)arg1;
- (void)_dissectAndDonateURLsFromEvent:(id)arg1 source:(id)arg2;
- (void)_donateLocationFromPreferredLocationOfEvent:(id)arg1 source:(id)arg2;
- (void)_dissectAndDonateEntitiesFromRawTextOfEvent:(id)arg1 source:(id)arg2;
- (id)_entitiesFromPropertiesOfEvent:(id)arg1;
- (void)_donateEntitiesForPropertiesOfEvent:(id)arg1 source:(id)arg2;
- (void)_importEvent:(id)arg1;
- (void)importEvent:(id)arg1;
- (void)importEventDataWithShouldContinueBlock:(CDUnknownBlockType)arg1;
- (void)importEventData;
- (BOOL)_setDissectorsFromPipeline;
- (id)init;
- (id)initWithEventStore:(id)arg1 namedEntityStore:(id)arg2 locationStore:(id)arg3 urlStore:(id)arg4 urlDissector:(id)arg5 namedEntityDissector:(id)arg6 dataDetectorDissector:(id)arg7;

@end


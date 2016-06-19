//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface CIMResourcePathManager : NSObject
{
    struct __FSEventStream *_stream;
    BOOL _rebuildResourcePaths;
    NSMutableDictionary *_updateDictionaryPaths;
}

+ (id)sharedResourcePathManager;
+ (id)userDictionaryURL;
@property(readonly, nonatomic) NSMutableDictionary *updateDictionaryPaths; // @synthesize updateDictionaryPaths=_updateDictionaryPaths;
@property(nonatomic) struct __FSEventStream *stream; // @synthesize stream=_stream;
- (void).cxx_destruct;
- (id)combinedResourcePathsForKeys:(id)arg1 inputMode:(id)arg2;
- (id)resourcePathsForKey:(id)arg1 inputMode:(id)arg2;
- (id)resourcePathsForUpdateDictionaries:(id)arg1;
- (void)rebuildUpdateResourcePaths:(id)arg1;
- (void)addUpdateDictionaryPath:(id)arg1 forInputModePrefix:(id)arg2;
- (void)tearDownDirectoryNotificationChangesForPath;
- (void)setUpDirectoryNotificationChangesForPath:(id)arg1;
- (void)additionalDictionariesUpdated;
- (void)dealloc;
- (id)init;

@end


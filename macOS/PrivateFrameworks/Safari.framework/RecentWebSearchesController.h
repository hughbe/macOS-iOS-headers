//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBSRecentWebSearchesController.h"

__attribute__((visibility("hidden")))
@interface RecentWebSearchesController : WBSRecentWebSearchesController
{
}

+ (BOOL)_shouldTrackSearches;
+ (id)sharedController;
- (void)_migrateLegacyData;
- (void)clearRecentSearchesAddedAfterDate:(id)arg1;
- (void)clearRecentSearches;
- (void)_removeLegacyRecentSearchesData;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSString;

@protocol CPLCTLLibraryManagerActions
- (void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(void (^)(BOOL, unsigned long long, NSError *))arg3;
- (void)getLibraryLocationWithCompletionHandler:(void (^)(NSString *, NSError *))arg1;
- (void)addInfoToLog:(NSString *)arg1;
- (void)enableSynchronizationWithReason:(NSString *)arg1;
- (void)disableSynchronizationWithReason:(NSString *)arg1;
- (void)noteClientIsEndingSignificantWork;
- (void)noteClientIsBeginningSignificantWork;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForeground;
- (void)resetCacheWithOption:(unsigned long long)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)getResourcesForItemWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *, NSArray *))arg2;
- (void)cloudCacheGetDescriptionForRecordWithIdentifier:(NSString *)arg1 related:(BOOL)arg2 completionHandler:(void (^)(id, id, NSError *))arg3;
- (void)cloudCacheGetDescriptionForRecordWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(id, id, NSError *))arg2;
- (void)getStatusArrayForComponents:(NSArray *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)getStatusForComponents:(NSArray *)arg1 completionHandler:(void (^)(NSString *, NSError *))arg2;
- (void)getListOfComponentsWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)startSyncSession;
@end


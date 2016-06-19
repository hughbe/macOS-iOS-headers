//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPLPlatformImplementation.h"

@class CPLEngineStoreTransaction, NSDate, NSString;

@protocol CPLEngineStoreImplementation <CPLPlatformImplementation>
@property(readonly, nonatomic) id corruptionInfo;
@property(readonly) NSDate *libraryCreationDate;
- (NSString *)status;
- (BOOL)isClientInSyncWithClientCache;
- (BOOL)storeClientIsNotInSyncWithClientCacheWithError:(id *)arg1;
- (BOOL)storeClientIsInSyncWithClientCacheWithError:(id *)arg1;
- (NSString *)createNewClientCacheIdentifier;
- (BOOL)storeClientCacheIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSString *)clientCacheIdentifier;
- (BOOL)storeLastQuarantineCountReportDate:(NSDate *)arg1 error:(id *)arg2;
- (NSDate *)lastQuarantineCountReportDate;
- (BOOL)storeSupportedFeatureVersionInLastSync:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)supportedFeatureVersionInLastSync;
- (BOOL)storeLibraryZoneName:(NSString *)arg1 error:(id *)arg2;
- (NSString *)libraryZoneName;
- (BOOL)storeUserIdentifier:(id <CPLEngineStoreUserIdentifier>)arg1 error:(id *)arg2;
- (id <CPLEngineStoreUserIdentifier>)userIdentifier;
- (NSString *)createNewLibraryVersion;
- (BOOL)storeLibraryVersion:(NSString *)arg1 withError:(id *)arg2;
- (NSString *)libraryVersion;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;
- (void)performBarrierTransaction:(CPLEngineStoreTransaction *)arg1 withBlock:(void (^)(void))arg2;
- (void)performWriteTransaction:(CPLEngineStoreTransaction *)arg1 withBlock:(void (^)(void))arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)performReadTransaction:(CPLEngineStoreTransaction *)arg1 withBlock:(void (^)(void))arg2;
- (BOOL)closeWithError:(id *)arg1;
- (BOOL)executePostOpenWithError:(id *)arg1;
- (BOOL)openWithError:(id *)arg1;
@end


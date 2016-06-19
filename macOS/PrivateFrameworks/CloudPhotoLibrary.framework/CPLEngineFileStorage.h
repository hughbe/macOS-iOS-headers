//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPLAbstractObject.h"

@class CPLPlatformObject, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface CPLEngineFileStorage : NSObject <CPLAbstractObject>
{
    NSObject<OS_dispatch_queue> *_lock;
    NSString *_logDomain;
    NSURL *_crashMarkerURL;
    NSMutableArray *_uncommittedFiles;
    BOOL _keepOriginals;
    BOOL _deleteImmediately;
    CPLPlatformObject *_platformObject;
    NSURL *_baseURL;
}

+ (id)platformImplementationProtocol;
@property(nonatomic) BOOL deleteImmediately; // @synthesize deleteImmediately=_deleteImmediately;
@property(nonatomic) BOOL keepOriginals; // @synthesize keepOriginals=_keepOriginals;
@property(readonly, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
- (void).cxx_destruct;
- (id)fileEnumerator;
- (id)fileEnumeratorIncludingPropertiesForKeys:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (BOOL)tryToFreeDiskSpace:(unsigned long long)arg1 actuallyFreedSpace:(unsigned long long *)arg2 includeOriginals:(BOOL)arg3 error:(id *)arg4;
- (BOOL)compactStorageIncludeOriginals:(BOOL)arg1 error:(id *)arg2;
- (BOOL)_compactStorageIncludeOriginals:(BOOL)arg1 desiredFreeSpace:(unsigned long long *)arg2 error:(id *)arg3;
- (BOOL)tryToFreeDiskSpace:(unsigned long long)arg1 actuallyFreedSpace:(unsigned long long *)arg2 error:(id *)arg3;
- (BOOL)compactStorage:(id *)arg1;
- (BOOL)discardAllRetainedFileURLsWithError:(id *)arg1;
- (BOOL)releaseFileURL:(id)arg1 error:(id *)arg2;
- (id)retainFileURLForIdentity:(id)arg1 resourceType:(unsigned long long)arg2 error:(id *)arg3;
- (void)checkFileSizeForIdentity:(id)arg1;
- (BOOL)hasFileWithIdentity:(id)arg1;
- (BOOL)storeUnretainedData:(id)arg1 identity:(id)arg2 isOriginal:(BOOL)arg3 error:(id *)arg4;
- (BOOL)storeUnretainedFileAtURL:(id)arg1 identity:(id)arg2 isOriginal:(BOOL)arg3 error:(id *)arg4;
- (BOOL)deleteFileWithIdentity:(id)arg1 includingOriginal:(BOOL)arg2 error:(id *)arg3;
- (BOOL)deleteFileWithIdentity:(id)arg1 error:(id *)arg2;
- (BOOL)discardUncommittedFileWithIdentity:(id)arg1 error:(id *)arg2;
- (BOOL)commitFileWithIdentity:(id)arg1 error:(id *)arg2;
- (BOOL)storeData:(id)arg1 identity:(id)arg2 isOriginal:(BOOL)arg3 needsCommit:(char *)arg4 error:(id *)arg5;
- (BOOL)storeFileAtURL:(id)arg1 identity:(id)arg2 isOriginal:(BOOL)arg3 needsCommit:(char *)arg4 error:(id *)arg5;
- (BOOL)_fixupIdentity:(id)arg1 fileURL:(id)arg2 data:(id)arg3 error:(id *)arg4;
- (void)_removeIdentityFromUncommittedFiles:(id)arg1;
- (void)_addIdentityToUncommittedFiles:(id)arg1;
- (BOOL)hasCrashMarker;
- (unsigned long long)countOfUncommittedFiles;
- (BOOL)closeWithError:(id *)arg1;
- (BOOL)openWithRecoveryHandler:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (BOOL)_recoverFromCrashWithRecoveryHandler:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (BOOL)doWrite:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)doRead:(CDUnknownBlockType)arg1;
- (id)initWithBaseURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


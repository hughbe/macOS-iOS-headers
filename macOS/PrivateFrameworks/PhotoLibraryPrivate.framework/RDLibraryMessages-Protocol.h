//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSSet, RDModelNotification;

@protocol RDLibraryMessages

@optional
- (void)libraryUpdatedVolume:(RDModelNotification *)arg1 forKeyPaths:(NSSet *)arg2;
- (void)libraryDeletedVersion:(RDModelNotification *)arg1;
- (void)libraryUpdatedVersion:(RDModelNotification *)arg1 forKeyPaths:(NSSet *)arg2;
- (void)libraryCreatedVersion:(RDModelNotification *)arg1;
- (void)libraryDeletedPlace:(RDModelNotification *)arg1;
- (void)libraryCreatedPlace:(RDModelNotification *)arg1;
- (void)libraryDeletedPerson:(RDModelNotification *)arg1;
- (void)libraryUpdatedPerson:(RDModelNotification *)arg1 forKeyPaths:(NSSet *)arg2;
- (void)libraryCreatedPerson:(RDModelNotification *)arg1;
- (void)libraryDeletedMomentYear:(RDModelNotification *)arg1;
- (void)libraryUpdatedMomentYear:(RDModelNotification *)arg1 forKeyPaths:(NSSet *)arg2;
- (void)libraryCreatedMomentYear:(RDModelNotification *)arg1;
- (void)libraryDeletedMomentCollection:(RDModelNotification *)arg1;
- (void)libraryUpdatedMomentCollection:(RDModelNotification *)arg1 forKeyPaths:(NSSet *)arg2;
- (void)libraryCreatedMomentCollection:(RDModelNotification *)arg1;
- (void)libraryDeletedMoment:(RDModelNotification *)arg1;
- (void)libraryUpdatedMoment:(RDModelNotification *)arg1 forKeyPaths:(NSSet *)arg2;
- (void)libraryCreatedMoment:(RDModelNotification *)arg1;
- (void)libraryDeletedMemory:(RDModelNotification *)arg1;
- (void)libraryUpdatedMemory:(RDModelNotification *)arg1 forKeyPaths:(NSSet *)arg2;
- (void)libraryCreatedMemory:(RDModelNotification *)arg1;
- (void)libraryDeletedMaster:(RDModelNotification *)arg1;
- (void)libraryUpdatedMaster:(RDModelNotification *)arg1 forKeyPaths:(NSSet *)arg2;
- (void)libraryCreatedMaster:(RDModelNotification *)arg1;
- (void)libraryDeletedKeyword:(RDModelNotification *)arg1;
- (void)libraryUpdatedKeyword:(RDModelNotification *)arg1 forKeyPaths:(NSSet *)arg2;
- (void)libraryCreatedKeyword:(RDModelNotification *)arg1;
- (void)libraryDeletedFolder:(RDModelNotification *)arg1;
- (void)libraryUpdatedFolder:(RDModelNotification *)arg1 forKeyPaths:(NSSet *)arg2;
- (void)libraryCreatedFolder:(RDModelNotification *)arg1;
- (void)libraryDeletedFaceGroup:(RDModelNotification *)arg1;
- (void)libraryDeletedFace:(RDModelNotification *)arg1;
- (void)libraryUpdatedFace:(RDModelNotification *)arg1 forKeyPaths:(NSSet *)arg2;
- (void)libraryCreatedFace:(RDModelNotification *)arg1;
- (void)libraryDeletedCloudResource:(RDModelNotification *)arg1;
- (void)libraryUpdatedCloudResource:(RDModelNotification *)arg1 forKeyPaths:(NSSet *)arg2;
- (void)libraryDeletedAttachment:(RDModelNotification *)arg1;
- (void)libraryCreatedAttachment:(RDModelNotification *)arg1;
- (void)libraryDeletedAlbum:(RDModelNotification *)arg1;
- (void)libraryUpdatedAlbum:(RDModelNotification *)arg1 forKeyPaths:(NSSet *)arg2;
- (void)libraryCreatedAlbum:(RDModelNotification *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDFaceGroupModel.h>

@class NSArray, RDPerson;

@interface RDFaceGroup : RDFaceGroupModel
{
    NSArray *_cachedFaces;
}

+ (void)deleteStaleFaceGroupsOfType:(unsigned long long)arg1 fromDatabase:(id)arg2 withMaxNumberOfFaces:(unsigned long long)arg3 withReason:(unsigned short)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)deleteStaleFaceGroupsFromDatabase:(id)arg1 withMaxNumberOfFaces:(unsigned long long)arg2 withReason:(unsigned short)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)deleteStaleFaceGroupsFromDatabase:(id)arg1 exceptFaceGroupsWithIds:(id)arg2 withMaxNumberOfFaces:(unsigned long long)arg3 usingModelFilter:(id)arg4 withReason:(unsigned short)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void).cxx_destruct;
- (CDUnknownBlockType)willBeDeleted:(BOOL)arg1;
- (void)prepareForDeleteInTransactionContext:(id)arg1;
- (void)deleteRelatedModelsWithTransactionContext:(id)arg1;
@property(readonly, nonatomic) RDPerson *associatedPerson;
@property(readonly, nonatomic) NSArray *faces;
@property(retain, nonatomic) NSArray *cachedFaces;
- (void)setModelDefaults;
- (short)modelType;

@end


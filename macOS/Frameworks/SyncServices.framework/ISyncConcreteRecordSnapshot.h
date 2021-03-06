//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SyncServices/ISyncRecordSnapshot.h>

@class ISDRecordIdMapper, ISDRecordStore, ISyncSession, NSArray;

@interface ISyncConcreteRecordSnapshot : ISyncRecordSnapshot
{
    ISDRecordStore *_truth;
    ISDRecordIdMapper *_mapper;
    NSArray *_entityNames;
    ISyncSession *_session;
}

- (id)recordStore;
- (id)recordsWithMatchingAttributes:(id)arg1;
- (id)recordsWithMatchingAttributes:(id)arg1 useUnformattedValues:(BOOL)arg2;
- (id)recordsWithMatchingAttributes:(id)arg1 useUnformattedValues:(BOOL)arg2 matchAll:(BOOL)arg3;
- (id)sourceIdentifiersForRelationshipName:(id)arg1 withTargetIdentifier:(id)arg2;
- (id)targetIdentifiersForRelationshipName:(id)arg1 withSourceIdentifier:(id)arg2;
- (id)recordsWithIdentifiers:(id)arg1;
- (id)recordsWithIdentifiers:(id)arg1 useUnformattedValues:(BOOL)arg2;
- (id)_swapMapper:(id)arg1;
- (id)_recordIdMapper;
- (id)_globalIdForLocalId:(id)arg1;
- (id)_localIdForGlobalId:(id)arg1;
- (void)checkForCancelledSession;
- (void)dealloc;
- (void)freeOSResources;
- (id)initWithTruthRecordStore:(id)arg1 clientRecordIdMapper:(id)arg2 entityNames:(id)arg3;
- (id)initWithTruthRecordStore:(id)arg1 clientRecordIdMapper:(id)arg2 entityNames:(id)arg3 session:(id)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDModifyRecordHandler.h>

@class CKDModifyShareTokenURLRequest, CKRecordID, CKShare;

__attribute__((visibility("hidden")))
@interface CKDModifyShareHandler : CKDModifyRecordHandler
{
    BOOL _haveAddedOwnerToShare;
    CKDModifyShareTokenURLRequest *_request;
}

+ (id)modifyHandlerForDeleteWithShareID:(id)arg1 operation:(id)arg2;
+ (id)modifyHandlerWithShare:(id)arg1 operation:(id)arg2;
@property(nonatomic) BOOL haveAddedOwnerToShare; // @synthesize haveAddedOwnerToShare=_haveAddedOwnerToShare;
@property(retain, nonatomic) CKDModifyShareTokenURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)updateParticipantsForFetchedShare:(id)arg1 error:(id)arg2;
- (void)savePCSDataToCache;
- (void)setServerRecord:(id)arg1;
- (void)clearProtectionDataForRecord;
- (id)_removePublicKey:(id)arg1 fromInvitedPCS:(struct _OpaquePCSShareProtection *)arg2;
- (id)_ensurePrivateParticipant:(id)arg1 isInInvitedSharePCS:(struct _OpaquePCSShareProtection *)arg2;
- (id)_publicKeyForParticipant:(id)arg1 error:(id *)arg2;
- (id)_removePrivateParticipant:(id)arg1 fromInvitedSharePCS:(struct _OpaquePCSShareProtection *)arg2;
- (BOOL)_removePrivateParticipantsFromInvitedPCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;
- (void)_setupParticipantsProtectionInfos;
- (void)_addPublicKeyToSelfParticipant;
- (BOOL)_cleanPublicPCSforShareWithError:(id *)arg1;
- (BOOL)_updateSharePublicPCSWithError:(id *)arg1;
- (BOOL)_serializePCSDataForShareWithError:(id *)arg1;
- (void)_alignParticipantPermissions;
- (void)prepareForSave;
- (void)_handleSharePCSData:(id)arg1 withError:(id)arg2;
- (id)_createNewSharePCSDataWithError:(id *)arg1;
- (void)_fetchRootRecordPublicSharingIdentityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_fetchSharePCSData;
- (BOOL)_decryptSharePCSData;
- (void)fetchSharePCSData;
- (void)noteSideEffectRecordPendingDelete:(id)arg1;
- (void)noteSideEffectRecordAbsent:(id)arg1;
- (void)noteSideEffectRecordPendingModify:(id)arg1;
- (id)sideEffectRecordIDs;
- (unsigned long long)serviceType;
- (BOOL)isShare;
@property(readonly, nonatomic) CKRecordID *shareID;
@property(readonly, nonatomic) CKShare *share;

@end


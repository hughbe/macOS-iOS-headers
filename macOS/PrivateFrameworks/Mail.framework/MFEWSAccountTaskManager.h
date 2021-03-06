//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailCore/MCTaskManager.h>

#import <Mail/EWSSubscriptionDelegate-Protocol.h>

@class EWSSubscription, MFEWSAccount, MFEWSAccountSyncActivity, MFEWSLocalActionSyncTask, NSString;

@interface MFEWSAccountTaskManager : MCTaskManager <EWSSubscriptionDelegate>
{
    MFEWSAccount *_account;
    MFEWSAccountSyncActivity *_syncActivity;
    EWSSubscription *_subscription;
    MFEWSLocalActionSyncTask *_localActionSyncTask;
}

+ (id)log;
- (void).cxx_destruct;
@property(retain, nonatomic) MFEWSLocalActionSyncTask *localActionSyncTask; // @synthesize localActionSyncTask=_localActionSyncTask;
@property(retain, nonatomic) EWSSubscription *subscription; // @synthesize subscription=_subscription;
@property(retain, nonatomic) MFEWSAccountSyncActivity *syncActivity; // @synthesize syncActivity=_syncActivity;
@property(readonly, nonatomic) __weak MFEWSAccount *account; // @synthesize account=_account;
- (void)addLocalAction:(id)arg1;
- (void)checkForNewLocalActions;
- (void)_systemDidWake:(id)arg1;
- (void)subscription:(id)arg1 failedWithError:(id)arg2;
- (void)subscription:(id)arg1 receivedEvents:(id)arg2;
- (void)subscriptionDidUnsubscribe:(id)arg1;
- (void)subscriptionDidSubscribe:(id)arg1;
- (void)cleanUp;
- (id)newBodyFetchContext;
- (void)activity:(id)arg1 didEncounterError:(id)arg2;
- (void)activityDidFinish:(id)arg1;
- (void)addActivity:(id)arg1;
- (void)recalculateMailboxPriority:(id)arg1;
- (void)synchronizeMailbox:(id)arg1;
- (void)_populateSubscriptionIfNeeded;
- (void)_populateAccountSyncActivityIfNeeded;
- (void)synchronizeAccountUserInitiated:(BOOL)arg1;
- (id)newPersistenceHandler;
- (id)newNetworkHandler;
@property(readonly, copy) NSString *accountName;
- (void)dealloc;
- (id)init;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


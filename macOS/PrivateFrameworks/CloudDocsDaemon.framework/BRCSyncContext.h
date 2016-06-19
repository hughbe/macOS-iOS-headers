//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BRCAccountSession, BRCThrottleBase, BRCTransferStream, BRCUserDefaults, CDAttribute, CDBudget, CKContainer, CKContainerID, NSDate, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

__attribute__((visibility("hidden")))
@interface BRCSyncContext : NSObject
{
    CKContainer *_ckContainer;
    NSString *_contextIdentifier;
    CDAttribute *_duetAttribute;
    CDBudget *_energyBudget;
    CDBudget *_dataBudget;
    NSString *_admissionTicket;
    NSObject<OS_dispatch_queue> *_duetSetupQueue;
    BOOL _isShared;
    BOOL _isCancelled;
    int _notifyTokenForFramework;
    NSMutableSet *_foregroundClients;
    NSString *_lastForegroundClientDescription;
    NSDate *_dateWhenLastForegroundClientLeft;
    NSObject<OS_dispatch_source> *_timerForGraceForegroundPeriod;
    NSObject<OS_dispatch_source> *_timerForForcedForegroundPeriod;
    NSObject<OS_dispatch_queue> *_foregroundStateQueue;
    unsigned long long _foregroundState;
    BRCAccountSession *_session;
    BRCThrottleBase *_readerThrottle;
    BRCThrottleBase *_applyThrottle;
    BRCThrottleBase *_downloadThrottle;
    BRCThrottleBase *_uploadThrottle;
    BRCTransferStream *_uploadStream;
    BRCTransferStream *_downloadStream;
}

+ (id)_contextIdentifierForAppLibrary:(id)arg1;
+ (id)_contextIdentifierForZone:(id)arg1 metadata:(BOOL)arg2;
@property(readonly, nonatomic) CDBudget *dataBudget; // @synthesize dataBudget=_dataBudget;
@property(readonly, nonatomic) CDBudget *energyBudget; // @synthesize energyBudget=_energyBudget;
@property(readonly, nonatomic) BOOL isShared; // @synthesize isShared=_isShared;
@property(readonly, nonatomic) BRCTransferStream *downloadStream; // @synthesize downloadStream=_downloadStream;
@property(readonly, nonatomic) BRCTransferStream *uploadStream; // @synthesize uploadStream=_uploadStream;
@property(readonly, nonatomic) BRCThrottleBase *uploadThrottle; // @synthesize uploadThrottle=_uploadThrottle;
@property(readonly, nonatomic) BRCThrottleBase *downloadThrottle; // @synthesize downloadThrottle=_downloadThrottle;
@property(readonly, nonatomic) BRCThrottleBase *applyThrottle; // @synthesize applyThrottle=_applyThrottle;
@property(readonly, nonatomic) BRCThrottleBase *readerThrottle; // @synthesize readerThrottle=_readerThrottle;
@property(readonly, nonatomic) NSString *contextIdentifier; // @synthesize contextIdentifier=_contextIdentifier;
@property(readonly, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)_notifyContainerBeingNowForeground;
- (void)_notifyFrameworkContainersMonitorWithState:(BOOL)arg1;
- (void)_armForegroundGraceTimerForClientDescription:(id)arg1;
- (void)didReceiveHandoffRequest;
- (id)foregroundClients;
- (BOOL)isForeground;
- (void)removeForegroundClient:(id)arg1;
- (void)addForegroundClient:(id)arg1;
- (void)forceContainerForegroundForDuration:(double)arg1;
- (void)dumpToContext:(id)arg1;
- (void)close;
- (void)waitForAllOperations;
- (void)cancel;
- (void)resume;
- (void)addOperation:(id)arg1 allowsCellularAccess:(id)arg2;
- (void)addOperation:(id)arg1;
- (BOOL)allowsCellularAccess;
- (void)notifyDuetFromAccessByBundleID:(id)arg1;
- (id)_database;
@property(readonly, nonatomic) CKContainerID *ckContainerID;
@property(readonly, nonatomic) CKContainer *ckContainer;
- (void)setupIfNeeded;
@property(readonly, nonatomic) NSString *admissionTicket;
- (void)_setupDuetIfNeeded;
- (void)_setupDuetIfNeededInQueue;
- (void)dealloc;
- (id)initWithSession:(id)arg1 contextIdentifier:(id)arg2 isShared:(BOOL)arg3;
- (id)description;
@property(readonly, nonatomic) BRCUserDefaults *defaults;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalSession.h>

@class NSString;

@interface CalSubscriptionSession : CalSession
{
    NSString *_username;
    NSString *_password;
    BOOL _tryCredentialsOnNextSync;
    int _isUpdating;
    BOOL _isAutoRefreshed;
    BOOL _needsRefresh;
}

@property BOOL needsRefresh; // @synthesize needsRefresh=_needsRefresh;
@property BOOL isAutoRefreshed; // @synthesize isAutoRefreshed=_isAutoRefreshed;
@property BOOL tryCredentialsOnNextSync; // @synthesize tryCredentialsOnNextSync=_tryCredentialsOnNextSync;
@property(retain) NSString *password; // @synthesize password=_password;
@property(retain) NSString *username; // @synthesize username=_username;
- (void)systemWillSleep;
- (void)systemDidWake;
- (void)systemNetworkDidChange;
- (void)subscription:(id)arg1 didFailWithError:(id)arg2;
- (void)subscriptionDidFinishLoading:(id)arg1;
- (void)subscription:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)onNextSyncTryUsername:(id)arg1 andPassword:(id)arg2;
- (void)deletePersistedErrorAndNotify;
- (BOOL)persistErrorAndNotify;
- (void)_doSynchronize;
- (void)synchronizeWithFlags:(long long)arg1;
- (BOOL)needsSync;
- (double)timeSinceLastSync;
- (void)reschedule;
- (void)dealloc;
- (id)initWithObjectID:(id)arg1;

@end


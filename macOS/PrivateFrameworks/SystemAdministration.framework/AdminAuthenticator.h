//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AdminAuthenticator : NSObject
{
    BOOL _syncWaitDone;
}

+ (id)sharedAuthenticator;
- (BOOL)isAuthenticated;
- (BOOL)authenticateUsingAuthorizationSync:(id)arg1;
- (void)deauthenticate;
- (void)authenticateUsingAuthorization:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (void)_toolStartedNotification:(id)arg1;

@end


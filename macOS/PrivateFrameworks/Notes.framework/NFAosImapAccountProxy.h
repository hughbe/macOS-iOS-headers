//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Notes/NFIMAPAccountProxy.h>

@interface NFAosImapAccountProxy : NFIMAPAccountProxy
{
}

- (BOOL)canAuthenticateWithScheme:(id)arg1;
- (BOOL)shouldRetryConnectionWithoutCertificateCheckingAfterError:(id)arg1 host:(id)arg2 didPromptUser:(char *)arg3;
- (id)clientInfo;
- (id)_anisetteData;
- (id)oneTimePassword;
- (id)machineID;
- (id)appleAuthenticationToken;
- (id)applePersonID;
- (void)setPassword:(id)arg1;
- (id)password;
- (void)setSessionPassword:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ACAccount.h"

@interface ACAccount (GameCenter)
- (void)_gkSetProperty:(id)arg1 forKey:(id)arg2 environment:(long long)arg3;
- (id)_gkPropertyForKey:(id)arg1 environment:(long long)arg2;
- (id)_gkModifiedDateForProperty:(id)arg1 environment:(long long)arg2;
- (id)_gkCredentialForEnvironment:(long long)arg1;
- (id)_gkCredentialsForEnvironment:(long long)arg1;
- (id)_gkCredentials;
- (void)_gkSetPlayerInternal:(id)arg1;
- (id)_gkPlayerInternal;
- (id)_gkPerEnvironmentTokens;
- (void)_gkSetToken:(id)arg1 forEnvironment:(long long)arg2;
- (id)_gkTokenForEnvironment:(long long)arg1;
- (BOOL)_gkIsPrimaryForEnvironment:(long long)arg1;
@end


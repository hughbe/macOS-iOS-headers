//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ExchangeOAuthClient : NSObject
{
}

+ (struct codeChallenge)codeChallenge;
+ (id)codeChallengeMethod;
+ (id)codeVerifier;
+ (id)state;
+ (id)defaultScopeForHostURL:(id)arg1;
+ (id)hostFQDNFromURL:(id)arg1;
+ (id)scopeForUpgradingFromBasicCreds;
+ (id)clientRedirect;
+ (id)defaultScope;
+ (id)defaultScopesForDomain;
+ (id)defaultScopesWithoutDomain;
+ (id)clientID;

@end


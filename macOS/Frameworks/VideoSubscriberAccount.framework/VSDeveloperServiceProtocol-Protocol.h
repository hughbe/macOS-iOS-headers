//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/NSObject-Protocol.h>

@class NSString, VSDeveloperSettings, VSIdentityProvider;

@protocol VSDeveloperServiceProtocol <NSObject>
- (void)updateDeveloperSettings:(VSDeveloperSettings *)arg1 completionHandler:(void (^)(VSFailable *))arg2;
- (void)fetchDeveloperSettingsWithCompletionHandler:(void (^)(VSFailable *))arg1;
- (void)removeDeveloperIdentityProviderWithUniqueID:(NSString *)arg1 completionHandler:(void (^)(VSFailable *))arg2;
- (void)updateExistingDeveloperIdentityProvider:(VSIdentityProvider *)arg1 completionHandler:(void (^)(VSFailable *))arg2;
- (void)addDeveloperIdentityProvider:(VSIdentityProvider *)arg1 completionHandler:(void (^)(VSFailable *))arg2;
- (void)fetchDeveloperIdentityProvidersWithCompletionHandler:(void (^)(VSFailable *))arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ICNFMCISPAccountSettingsManager : NSObject
{
    NSMutableDictionary *_ispAccountsSettings;
    NSMutableDictionary *_ispReceivingAccountsSettingsByDomain;
    NSMutableDictionary *_ispDeliveryAccountsSettingsByDomain;
    NSMutableDictionary *_ispDeliveryAccountsSettingsByIdentifier;
}

+ (id)_accountInformationStringForKey:(id)arg1 localizedKey:(id)arg2 domain:(id)arg3;
+ (id)ispSubscriptionURLLabelForDomain:(id)arg1;
+ (id)ispSubscriptionURLForDomain:(id)arg1;
+ (id)ispSupportURLLabelForDomain:(id)arg1;
+ (id)ispSupportURLForDomain:(id)arg1;
+ (id)ispBrandNameForDomain:(id)arg1;
+ (BOOL)ispAccountInformationAvailableForDomain:(id)arg1;
+ (id)_alwaysPersistedKeys;
+ (id)onlineDatabaseSettings;
+ (id)locallyInstalledSettings;
+ (void)initialize;
- (void).cxx_destruct;
- (void)emptyCache;
- (id)deliveryAccountsSettingsForDomain:(id)arg1;
- (id)_deliveryAccountsSettingsForDomain:(id)arg1 fetchIfNecessary:(BOOL)arg2;
- (id)receivingAccountSettingsForDomain:(id)arg1;
- (id)_receivingAccountSettingsForDomain:(id)arg1 fetchIfNecessary:(BOOL)arg2;
- (BOOL)_getAccountIsReceivingAccount:(char *)arg1 isDeliveryAccount:(char *)arg2 fromAccountSettings:(id)arg3;
- (BOOL)_persistISPPlist:(id)arg1;
- (id)_persistantISPAccountSettings:(id)arg1;
- (id)_persistantAccountSettings:(id)arg1;
- (BOOL)_shouldVerifyLoadedISPPlist;
- (void)_loadISPPlist:(id)arg1 bundle:(id)arg2 path:(id)arg3;
- (void)_loadISPPlistsAtPath:(id)arg1;
- (void)_unloadISPAccounts;
- (void)_loadISPAccountsIfNecessary;
- (id)_persistanceFolderName;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SUHelperDProtocol.h"

@class NSObject<OS_dispatch_queue>;

@interface SUHelperProxy : NSObject <SUHelperDProtocol>
{
    unsigned int _suhelperd_port;
    unsigned int _client_port;
    long long _currentRights;
    NSObject<OS_dispatch_queue> *_q;
}

+ (id)sharedHelperProxyIfAvailable;
+ (id)sharedHelperProxy;
- (BOOL)_launchDaemonMode;
- (id)lookupURLCredentialInSystemKeychainForHost:(id)arg1 port:(long long)arg2;
- (BOOL)configureProgressPhasesEnablingFLO:(BOOL)arg1 preLogoutCommit:(BOOL)arg2;
- (BOOL)commitLoginCredentialsDisablingFLO:(BOOL)arg1;
- (BOOL)stashLoginCredentialsEnablingFLO:(BOOL)arg1;
- (BOOL)unenrollFromSeedProgram;
- (BOOL)setOSXAutoUpdate:(BOOL)arg1;
- (BOOL)setAppStoreAutoUpdate:(BOOL)arg1;
- (BOOL)clearCriticalUpdateNotificationDate;
- (BOOL)removeUpdatesAvailableCookie;
- (BOOL)createUpdatesAvailableCookie;
- (BOOL)updateAnyUserPreferences;
- (BOOL)clearAnyUserPreference:(id)arg1;
- (BOOL)setObject:(id)arg1 forAnyUserPreference:(id)arg2;
- (BOOL)getDigest:(id *)arg1 forPackageAtURL:(id)arg2;
- (BOOL)removeProductDirectoryForKey:(id)arg1;
- (BOOL)removeDistForProductKey:(id)arg1 withFilename:(id)arg2;
- (BOOL)createDirectoryForProductKey:(id)arg1 Firmware:(BOOL)arg2;
- (id)readUpdatesIndex;
- (BOOL)writeUpdatesIndex:(id)arg1;
- (BOOL)removeIndexFromUpdates;
- (BOOL)movePPDVersionCacheToUpdatesFromPath:(id)arg1;
- (BOOL)moveMetadataCacheToUpdatesFromPath:(id)arg1;
- (BOOL)removeMetadataCacheFromUpdates;
- (BOOL)moveInstalledPrintersToLibraryFromPath:(id)arg1;
- (BOOL)makeQueues;
- (BOOL)registerProductFile:(id)arg1 forProductKey:(id)arg2 firmware:(BOOL)arg3 trustLevel:(int *)arg4 keepOriginal:(BOOL)arg5;
- (BOOL)prepareLoginWindowForPostLogoutInstallWithNoConsoleUser;
- (void)checkAndFixPermissionsAtPath:(id)arg1 owner:(unsigned int)arg2;
- (int)prepareForLogoutAndInstall:(BOOL)arg1;
- (void)authorizeWithEmptyAuthorizationForRights:(long long)arg1;
- (BOOL)disconnect;
- (void)authorizeTool:(struct AuthorizationOpaqueRef *)arg1 forRights:(long long)arg2;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (BOOL)isAuthorizedForRights:(long long)arg1;
- (BOOL)_isAuthorized;

@end


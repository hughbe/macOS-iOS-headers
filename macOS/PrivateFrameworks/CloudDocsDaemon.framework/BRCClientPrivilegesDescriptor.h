//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface BRCClientPrivilegesDescriptor : NSObject
{
    NSString *_debugIdentifier;
    BOOL _cloudEnabledStatusWithoutLogOutStatus;
    BOOL _canGetApplicationInfo;
    BOOL _isNonAppSandboxed;
    BOOL _isAllowedToAccessAnyCloudService;
    BOOL _isProxyEntitled;
    BOOL _isSharingProxyEntitled;
    BOOL _isSharingPrivateInterfaceEntitled;
    BOOL _isAutomationEntitled;
    BOOL _hasAuditToken;
    NSString *_applicationIdentifier;
    NSSet *_appLibraryIDs;
    NSString *_defaultAppLibraryID;
    CDStruct_4c969caf _auditToken;
}

+ (BOOL)_isNonSandboxedForAuditToken:(CDStruct_4c969caf)arg1;
@property(readonly, nonatomic) BOOL hasAuditToken; // @synthesize hasAuditToken=_hasAuditToken;
@property(readonly, nonatomic) NSString *defaultAppLibraryID; // @synthesize defaultAppLibraryID=_defaultAppLibraryID;
@property(readonly, nonatomic) NSSet *appLibraryIDs; // @synthesize appLibraryIDs=_appLibraryIDs;
@property(readonly, nonatomic) BOOL isAutomationEntitled; // @synthesize isAutomationEntitled=_isAutomationEntitled;
@property(readonly, nonatomic) BOOL isSharingPrivateInterfaceEntitled; // @synthesize isSharingPrivateInterfaceEntitled=_isSharingPrivateInterfaceEntitled;
@property(readonly, nonatomic) BOOL isSharingProxyEntitled; // @synthesize isSharingProxyEntitled=_isSharingProxyEntitled;
@property(readonly, nonatomic) BOOL isProxyEntitled; // @synthesize isProxyEntitled=_isProxyEntitled;
@property(readonly, nonatomic) BOOL isAllowedToAccessAnyCloudService; // @synthesize isAllowedToAccessAnyCloudService=_isAllowedToAccessAnyCloudService;
@property(readonly, nonatomic) BOOL isNonAppSandboxed; // @synthesize isNonAppSandboxed=_isNonAppSandboxed;
@property(readonly, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (void).cxx_destruct;
- (BOOL)_computeCloudEnabledStatusWithoutLogOutStatus;
- (BOOL)cloudEnabledStatusForSession:(id)arg1;
- (id)description;
@property(readonly, nonatomic) BOOL canFetchUserQuota;
- (void)_finishSetupWithClientContainerIDs:(id)arg1;
@property(readonly, nonatomic) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
- (int)pid;
- (BOOL)hasPid;
- (id)initWithNonSandboxedAppWithAppLibraryIDs:(id)arg1 bundleID:(id)arg2 auditToken:(CDStruct_4c969caf)arg3;
- (id)initWithPid:(int)arg1;
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1;

@end


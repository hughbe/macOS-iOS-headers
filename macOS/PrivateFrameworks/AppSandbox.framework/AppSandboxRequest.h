//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AppSandboxEntitlements, CodeIdentity, NSArray, NSString;

@interface AppSandboxRequest : NSObject
{
    CodeIdentity *_codeIdentity;
    AppSandboxEntitlements *_entitlements;
    NSString *_userAccountName;
    NSString *_userAccountHomeDirectoryPath;
    NSString *_userAccountHomeDirectoryRealPath;
    NSString *_mainExecutableBundlePath;
    NSArray *_systemProfileSnippetsInfoDicts;
    NSArray *_otherProfileSnippetPaths;
    NSArray *_otherImageBundles;
    BOOL _developerMode;
    BOOL _disableContainerRepair;
}

+ (id)appSandboxRequestForApplicationAtURL:(id)arg1 error:(id *)arg2;
+ (id)appSandboxRequestForPid:(int)arg1 error:(id *)arg2;
+ (id)implicitProfilePaths;
+ (id)_importedProfilePaths;
+ (id)profileSnippetFileName;
+ (BOOL)_setFatalError:(id *)arg1 forRequest:(id)arg2 withMessage:(id)arg3;
@property(nonatomic) BOOL disableContainerRepair; // @synthesize disableContainerRepair=_disableContainerRepair;
@property(nonatomic) BOOL developerMode; // @synthesize developerMode=_developerMode;
@property(retain, nonatomic) NSArray *otherImageBundles; // @synthesize otherImageBundles=_otherImageBundles;
@property(retain, nonatomic) NSArray *otherProfileSnippetPaths; // @synthesize otherProfileSnippetPaths=_otherProfileSnippetPaths;
@property(retain, nonatomic) NSArray *systemProfileSnippetsInfoDicts; // @synthesize systemProfileSnippetsInfoDicts=_systemProfileSnippetsInfoDicts;
@property(copy, nonatomic) NSString *mainExecutableBundlePath; // @synthesize mainExecutableBundlePath=_mainExecutableBundlePath;
@property(copy, nonatomic) NSString *userAccountHomeDirectoryRealPath; // @synthesize userAccountHomeDirectoryRealPath=_userAccountHomeDirectoryRealPath;
@property(copy, nonatomic) NSString *userAccountHomeDirectoryPath; // @synthesize userAccountHomeDirectoryPath=_userAccountHomeDirectoryPath;
@property(copy, nonatomic) NSString *userAccountName; // @synthesize userAccountName=_userAccountName;
- (void).cxx_destruct;
- (id)compileSandboxProfileAndReturnError:(id *)arg1;
- (id)_doCompileSandboxProfileAndReturnError:(id *)arg1;
- (BOOL)_setupContainer:(id)arg1 results:(id)arg2 error:(id *)arg3;
- (id)_preferenceDomainsToUnshare;
- (BOOL)_profileTimestampsAreValid;
- (id)_makeSandboxProfileWithValidationInfo:(id)arg1 error:(id *)arg2;
- (id)_makeSandboxProfileValidationInfoWithContainerId:(id)arg1 containerRootPath:(id)arg2 error:(id *)arg3;
- (void)_errorLog:(id)arg1;
- (void)_debugLog:(id)arg1;
- (id)initWithCodeIdentity:(id)arg1;
- (id)initWithCodeIdentity:(id)arg1 entitlements:(id)arg2;

@end


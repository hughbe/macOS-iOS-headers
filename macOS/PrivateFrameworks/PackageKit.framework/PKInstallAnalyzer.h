//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, PKInstallRequest;

@interface PKInstallAnalyzer : NSObject
{
    PKInstallRequest *_installRequest;
    NSMutableDictionary *_maskPathsByPackageSpecifier;
    NSMutableDictionary *_skipComponentsByPackageSpecifier;
    NSMutableSet *_obsoletedFiles;
    NSMutableSet *_potentiallyObsoleteDirectories;
    NSMutableSet *_atomicallyObsoleteBundles;
    NSMutableSet *_truncateBeforeObsoletingFiles;
    NSMutableArray *_deferredInstallPaths;
    NSMutableArray *_registrationPaths;
    NSMutableArray *_contentCachingPaths;
    long long _kextPathCount;
    long long _systemLibraryCount;
    long long _xpcCachePathCount;
    NSDictionary *_bundlePathToComponentMap;
    NSMutableDictionary *_bundleIdentToXATTRMap;
}

- (void)_findRegistrationPathsForPackageSpecifier:(id)arg1;
- (void)_findDeferredInstallPathsForPackageSpecifier:(id)arg1;
- (void)_findMaskPathsAndSkipComponentsForPackageSpecifier:(id)arg1;
- (BOOL)_shouldInstallPackageComponent:(id)arg1 forPackageSpecifier:(id)arg2;
- (id)_versionPreviouslyDeferredForComponentAtPath:(id *)arg1;
- (id)_buildBundlePathToComponentMapForRequest;
- (void)_findObsoleteOnDiskFilesForPackageSpecifier:(id)arg1;
- (BOOL)_shouldAllowReceiptBasedFileObsoletingForPackage:(id)arg1;
- (BOOL)_isUnsafeToObsoleteComponent:(id)arg1;
- (id)extendedAttributesForComponent:(id)arg1;
- (BOOL)installsXPCCacheContent;
- (BOOL)installsSystemLibraries;
- (BOOL)installsKexts;
- (id)bundlePathsForContentCaching;
- (id)bundlePathsForRegistration;
- (id)deferredInstallPaths;
- (id)atomicallyObsoletePaths;
- (id)potentiallyObsoleteDirectories;
- (id)truncateBeforeObsoletingFiles;
- (id)obsoletedFiles;
- (id)skipComponentsForPackageSpecifier:(id)arg1;
- (id)maskPathsForPackageSpecifier:(id)arg1;
- (void)_sanitizePackageDataForRequest;
- (void)_analyzeIncludingObsoletion:(BOOL)arg1;
- (void)dealloc;
- (id)initWithInstallRequest:(id)arg1 includeObsoletion:(BOOL)arg2;
- (id)initWithInstallRequest:(id)arg1;

@end


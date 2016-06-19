//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSBundle.h"

@interface NSBundle (SafariNSBundleExtras)
+ (id)safari_safariTechnologyPreviewBundleURL;
+ (BOOL)_safari_handlerIsSafariFamilyApplication:(id)arg1;
+ (BOOL)safari_isSafariFamilyApplicationDefaultHTTPHandler;
+ (void)safari_setSafariAsDefaultHTTPHandler;
+ (id)safari_safariFrameworkBundle;
+ (id)safari_defaultBrowserBundleForScheme:(id)arg1;
+ (id)safari_bundlesFromDirectory:(id)arg1 bundleType:(id)arg2;
+ (id)_safari_defaultApplicationNameForUserAgentFromBundle:(id)arg1;
+ (id)safari_defaultApplicationNameForUserAgent;
- (id)safari_localizedStringsForKey:(id)arg1;
- (BOOL)safari_isSafariServicesFrameworkBundle;
- (BOOL)safari_isSafariApplicationBundle;
- (RetainPtr_c27edd19)safari_loadPNG:(id)arg1;
- (BOOL)isSystemFramework;
- (id)localizedShortVersion;
- (id)shortVersion;
- (id)safari_version;
- (id)safari_displayName;
- (id)_safari_defaultApplicationNameForUserAgent;
@end


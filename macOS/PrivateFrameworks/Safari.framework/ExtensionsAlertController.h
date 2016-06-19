//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SecureAlert.h"

@class NSAlert, NSString, NSWindow;

__attribute__((visibility("hidden")))
@interface ExtensionsAlertController : NSObject <SecureAlert>
{
    BOOL hasReceivedUntrustedEvents;
    NSAlert *_alert;
}

+ (void)offerUpgradeForExtension:(id)arg1 toGalleryVersion:(id)arg2 orDeveloperVersion:(id)arg3 defaultToGalleryVersion:(BOOL)arg4 responseBlock:(CDUnknownBlockType)arg5;
+ (void)offerUpgradeForExtension:(id)arg1 toGalleryVersion:(id)arg2 defaultToGalleryVersion:(BOOL)arg3 responseBlock:(CDUnknownBlockType)arg4;
+ (void)confirmUserTrustsEnablingExtension:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
+ (void)offerInstallationOfExtension:(id)arg1 ofGalleryVersion:(id)arg2 orDeveloperVersion:(id)arg3 responseBlock:(CDUnknownBlockType)arg4;
+ (void)confirmUserIntendsToUseSafariExtensionBuilder:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
+ (void)confirmUserIntendsToInstallEphemeralExtension:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
+ (void)confirmUserTrustsInstallingExtension:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
+ (void)reportRefusalToInstallAppleSignedExtension:(id)arg1 withIdentifier:(id)arg2;
+ (void)reportInstallationErrorForExtension:(id)arg1;
+ (void)reportBlacklistedExtension:(id)arg1 withIcon:(id)arg2;
+ (void)reportExtensionsAreNotEnabled;
@property(readonly, nonatomic) NSAlert *alert; // @synthesize alert=_alert;
@property(nonatomic) BOOL hasReceivedUntrustedEvents; // @synthesize hasReceivedUntrustedEvents;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSWindow *window;
- (id)initWithAlert:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


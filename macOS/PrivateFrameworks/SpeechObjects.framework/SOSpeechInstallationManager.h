//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CustomizeVoicesWindowController, SOCustomizeSRLanguagesWindowController;

@interface SOSpeechInstallationManager : NSObject
{
    id _delegate;
    CustomizeVoicesWindowController *_voiceSelectionWindowController;
    SOCustomizeSRLanguagesWindowController *_srLanguagesSelectionWindowController;
    struct __CFMessagePort *_serverPortRef;
}

+ (id)sharedManager;
@property(retain) id delegate; // @synthesize delegate=_delegate;
- (BOOL)_clientHasRightsToCustomVoices;
- (id)_sendMessage:(int)arg1 withData:(void *)arg2 withReply:(BOOL)arg3;
- (struct __CFMessagePort *)_createLocalPort;
- (BOOL)_createServerPortIfNeeded;
- (BOOL)_serverIsRunning;
- (void)showProgressWindow;
- (BOOL)areBackgroundDownloadsAllowed;
- (BOOL)isRunningOnACPower;
- (id)installationLogEntryForTag:(id)arg1 preferenceDomain:(id)arg2;
- (id)installationLogEntryForTag:(id)arg1;
- (id)activeInstallations;
- (void)cancelAllInstallations;
- (BOOL)startInstallingDownloadableSpeechItems:(id)arg1 userInteractionMode:(unsigned int)arg2 initiator:(id)arg3;
- (BOOL)startInstallingDownloadableSpeechItems:(id)arg1 userInteractionMode:(unsigned int)arg2;
- (id)bundleForRemovableLanguage:(id)arg1 passingBackTagName:(id *)arg2;
- (id)downloadableSpeechItemUpgradeForExistingSpeechItem:(id)arg1 fromDownloadableItems:(id)arg2;
- (id)downloadableSRLanguageItems;
- (void)showSRLanguagesSelectionSheetForWindow:(id)arg1 networkSupportedLocaleIdentifiers:(id)arg2 requiredLocaleIdentifier:(id)arg3 supportDownloads:(BOOL)arg4 showOnlyNetworkSupportedItems:(BOOL)arg5;
@property(readonly, retain) SOCustomizeSRLanguagesWindowController *srLanguagesSelectionWindowController; // @dynamic srLanguagesSelectionWindowController;
- (void)resetAllVoiceDownloadAttemptsForInitiator:(id)arg1;
- (void)cancelPurgingByInitiator:(id)arg1;
- (void)cancelPurgingOfSpeechBundleIdentifiers:(id)arg1 initiator:(id)arg2;
- (BOOL)_startDownloadingHighestQualityIfNecessaryForVoiceIdentifier:(id)arg1 requireACPower:(BOOL)arg2 initiator:(id)arg3;
- (BOOL)doesLanguageDataNeedToBeDownloadedForLocaleIdentifier:(id)arg1;
- (id)highestQualityVoiceIdentifierForRootVoiceIdentifier:(id)arg1 startDownloading:(BOOL)arg2 requireACPower:(BOOL)arg3 initiator:(id)arg4;
- (id)_overriddenVoiceIdentifierDictionary;
- (id)highestQualityVoiceIdentifierForRootVoiceIdentifier:(id)arg1 startDownloading:(BOOL)arg2;
- (void)showVoiceSelectionSheetForWindow:(id)arg1 showIndividualVoiceQualities:(BOOL)arg2;
- (id)onDiskVersionForBundlePath:(id)arg1;
- (id)bundleForRemovableVoice:(id)arg1 passingBackTagName:(id *)arg2;
- (id)downloadableVoiceUpgradeForVoice:(id)arg1 fromDownloadableVoices:(id)arg2;
- (id)downloadableVoicesAllowCustomVoices:(BOOL)arg1;
- (id)downloadableVoices;
- (BOOL)isAutoDownloadProhibitedForDownloadableVoiceObject:(id)arg1;
- (void)markDownloadableVoiceObject:(id)arg1 withAutoDownloadProhibitFlag:(BOOL)arg2;
- (void)startRemovingDownloadedSpeechItems:(id)arg1 initiator:(id)arg2 immediately:(BOOL)arg3;
- (void)startRemovingDownloadedSpeechItems:(id)arg1;
- (void)startRemovingDownloadedSpeechBundleIdentifiers:(id)arg1 initiator:(id)arg2 immediately:(BOOL)arg3;
- (id)activeVoiceInstallations;
- (BOOL)startInstallingDownloadableVoices:(id)arg1 useRootNames:(BOOL)arg2 userInteractionMode:(unsigned int)arg3 initiator:(id)arg4;
- (BOOL)startInstallingDownloadableVoices:(id)arg1 useRootNames:(BOOL)arg2 userInteractionMode:(unsigned int)arg3;
@property(readonly, retain) CustomizeVoicesWindowController *voiceSelectionWindowController; // @dynamic voiceSelectionWindowController;
- (void)finalize;
- (void)dealloc;

@end


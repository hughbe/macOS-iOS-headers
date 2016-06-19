//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNNavigationAudioSession, NSDictionary, NSHashTable, NSString;

@interface MNVoiceController : NSObject
{
    NSString *_currentLanguage;
    BOOL _spokenLanguageIsUILanguage;
    NSDictionary *_localizableStrings;
    NSString *_languageLocale;
    NSString *_uiLanguage;
    BOOL _isPersistentConnectionOpen;
    long long _audioSessionState;
    MNNavigationAudioSession *_activeNavigationSession;
    NSHashTable *_observers;
    long long _currentLanguageSource;
}

+ (id)localizedStringForKey:(id)arg1 defaultValue:(id)arg2;
+ (id)sharedInstance;
@property(retain, nonatomic) MNNavigationAudioSession *activeNavigationSession; // @synthesize activeNavigationSession=_activeNavigationSession;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_setMaintainInactivePersistentConnection:(BOOL)arg1;
- (void)_setLoggingEnabled:(BOOL)arg1;
- (void)setAudioSessionProperties;
- (void)setVolume:(double)arg1;
- (void)endAnnounce;
- (void)prepareToAnnounce;
- (void)beepIfNecessaryForShortPromptType:(unsigned long long)arg1;
- (BOOL)isPlayingAudio;
- (BOOL)isSpeaking;
- (void)stop;
- (void)speak:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_setGender;
- (void)_defaultsDidChange;
@property(readonly, nonatomic) BOOL speechMuted;
- (void)_updateCurrentVoiceLanguage;
- (id)_defaultVoiceLanguageWithSource:(long long *)arg1;
- (double)durationToSpeak:(id)arg1;
- (id)_uiLanguage;
- (id)_localizedStringForKey:(id)arg1 defaultValue:(id)arg2;
@property(readonly, nonatomic) NSString *currentVoiceLanguage;
- (id)init;
- (void)dealloc;

@end


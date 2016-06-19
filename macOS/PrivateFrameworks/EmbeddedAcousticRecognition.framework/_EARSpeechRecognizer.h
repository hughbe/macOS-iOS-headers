//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSObject<OS_dispatch_queue>, NSString, _EARFormatter, _EARSpeechModelInfo;

@interface _EARSpeechRecognizer : NSObject
{
    struct unique_ptr<quasar::SpeechRecognizer, std::__1::default_delete<quasar::SpeechRecognizer>> _recognizer;
    _EARFormatter *_formatter;
    NSObject<OS_dispatch_queue> *_formatterQueue;
    NSObject<OS_dispatch_queue> *_recognitionQueue;
    NSString *_configPath;
    BOOL _detectUtterances;
    BOOL _concatenateUtterances;
    NSData *_userProfileData;
    double _maximumRecognitionDuration;
}

+ (id)rawTokenResultsFromRecognitionResults:(id)arg1;
+ (id)maximumSupportedConfigurationVersion;
+ (id)minimumSupportedConfigurationVersion;
+ (void)initialize;
@property(nonatomic) double maximumRecognitionDuration; // @synthesize maximumRecognitionDuration=_maximumRecognitionDuration;
@property(nonatomic) BOOL concatenateUtterances; // @synthesize concatenateUtterances=_concatenateUtterances;
@property(nonatomic) BOOL detectUtterances; // @synthesize detectUtterances=_detectUtterances;
@property(copy, nonatomic) NSData *userProfileData; // @synthesize userProfileData=_userProfileData;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancelRecognition;
- (id)recognitionResultsWithAudioData:(id)arg1 userProfileData:(id)arg2 language:(id)arg3 task:(id)arg4 samplingRate:(unsigned long long)arg5 extraLanguageModel:(id)arg6;
- (id)runRecognitionWithResultStream:(id)arg1 language:(id)arg2 task:(id)arg3 samplingRate:(unsigned long long)arg4;
- (shared_ptr_b7e28e4d)requestParametersWithUserProfileData:(id)arg1 task:(id)arg2 samplingRate:(unsigned long long)arg3 resultStream:(shared_ptr_5fd04aec)arg4 extraLanguageModel:(id)arg5 symbolTableList:(struct SymbolTableList *)arg6;
- (void)updateUserProfileData:(id)arg1;
- (id)runRecognitionWithResultStream:(id)arg1;
@property(readonly, nonatomic) _EARSpeechModelInfo *modelInfo;
- (id)initWithConfiguration:(id)arg1 useQuasarFormatter:(BOOL)arg2;
- (id)initWithConfiguration:(id)arg1 withGeneralVoc:(id)arg2 withLexiconEnh:(id)arg3 withItnEnh:(id)arg4;
- (id)initWithConfiguration:(id)arg1 withLanguage:(id)arg2 withSdapiConfig:(id)arg3;
- (id)initWithConfiguration:(id)arg1;

@end


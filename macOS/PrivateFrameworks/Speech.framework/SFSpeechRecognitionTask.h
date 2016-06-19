//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFDictationDelegate.h"
#import "SFSpeechRecognitionBufferDelegate.h"

@class AFDictationConnection, NSError, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, SFSpeechRecognitionRequest;

@interface SFSpeechRecognitionTask : NSObject <AFDictationDelegate, SFSpeechRecognitionBufferDelegate>
{
    AFDictationConnection *_dictationConnection;
    NSOperationQueue *_externalQueue;
    NSString *_languageCode;
    SFSpeechRecognitionRequest *_request;
    NSObject<OS_dispatch_queue> *_internalQueue;
    BOOL _completed;
    BOOL _running;
    BOOL _finishing;
    BOOL _cancelled;
    BOOL _powerAvailable;
    long long _taskHint;
    NSError *_error;
    NSString *_requestIdentifier;
}

+ (id)recognizedUtteranceFromSpeechPhrases:(id)arg1 final:(BOOL)arg2;
+ (id)transcriptionsWithTokens:(id)arg1;
@property(readonly, copy, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(readonly, nonatomic, getter=isPowerAvailable) BOOL powerAvailable; // @synthesize powerAvailable=_powerAvailable;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, nonatomic, getter=isFinishing) BOOL finishing; // @synthesize finishing=_finishing;
@property(readonly, nonatomic) long long _taskHint; // @synthesize _taskHint;
- (void).cxx_destruct;
- (void)stopSpeech;
- (void)addRecordedSpeechSampleData:(id)arg1;
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
@property(readonly, nonatomic) float averagePower;
@property(readonly, nonatomic) float peakPower;
- (void)cancel;
- (void)finish;
@property(readonly, nonatomic) long long state;
- (id)_initWithRequest:(id)arg1 queue:(id)arg2 languageCode:(id)arg3 taskHint:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


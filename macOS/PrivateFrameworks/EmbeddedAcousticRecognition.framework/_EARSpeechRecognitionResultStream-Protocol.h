//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, _EARSpeechRecognitionResult, _EARSpeechRecognizer;

@protocol _EARSpeechRecognitionResultStream <NSObject>
- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didRecognizeFinalResults:(NSArray *)arg2;
- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didFinishRecognitionWithError:(NSError *)arg2;
- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didRecognizePartialResult:(_EARSpeechRecognitionResult *)arg2;

@optional
- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didProcessAudioDuration:(double)arg2;
- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didRecognizeFinalResults:(NSArray *)arg2 tokenSausage:(NSArray *)arg3 nBestChoices:(NSArray *)arg4;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriCore/NSObject-Protocol.h>

@class AFSpeechPackage, AFSpeechRecognition, NSArray, NSDictionary, NSError;

@protocol AFSpeechServiceDelegate <NSObject>
- (oneway void)speechServiceDidFinishRecognitionWithStatistics:(NSDictionary *)arg1 error:(NSError *)arg2;
- (oneway void)speechServiceDidRecognizePackage:(AFSpeechPackage *)arg1;
- (oneway void)speechServiceDidRecognizeRawEagerRecognitionCandidate:(AFSpeechRecognition *)arg1;
- (oneway void)speechServiceDidProcessAudioDuration:(double)arg1;
- (oneway void)speechServiceDidRecognizeTokens:(NSArray *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class NSArray;

@protocol CSCoreSpeechServiceListenerDelegate <NSObject>
- (oneway void)getFirstPassRunningMode:(void (^)(long long))arg1;
- (oneway void)requestUpdatedSATAudio:(void (^)(BOOL))arg1;
- (oneway void)clearTriggerCount:(void (^)(void))arg1;
- (oneway void)getTriggerCount:(void (^)(unsigned long long))arg1;
- (oneway void)setDelayInterstitialSounds:(NSArray *)arg1 level:(long long)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)getCurrentVoiceTriggerLocale:(void (^)(NSString *))arg1;
- (oneway void)getTestResponse:(void (^)(NSString *))arg1;
@end


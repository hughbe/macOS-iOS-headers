//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriVOX/NSObject-Protocol.h>

@class AFAudioPlaybackRequest, AFConnection, AFRequestInfo, AceObject, INImage, INIntent, NSDictionary, NSError, NSString, NSURL;
@protocol SAAceCommand;

@protocol AFAssistantUIService <NSObject>

@optional
- (void)assistantConnection:(AFConnection *)arg1 audioSessionDidBecomeActive:(BOOL)arg2;
- (void)assistantConnection:(AFConnection *)arg1 audioSessionWillBecomeActive:(BOOL)arg2;
- (void)assistantConnection:(AFConnection *)arg1 startPlaybackDidFail:(long long)arg2;
- (void)assistantConnection:(AFConnection *)arg1 willProcessStartPlayback:(long long)arg2;
- (void)assistantConnection:(AFConnection *)arg1 willProcessStartPlayback:(long long)arg2 intent:(INIntent *)arg3 completion:(void (^)(BOOL, BOOL))arg4;
- (void)assistantConnection:(AFConnection *)arg1 didHandleQuickStopWithAction:(unsigned long long)arg2;
- (void)assistantConnection:(AFConnection *)arg1 didStopAudioPlaybackRequest:(AFAudioPlaybackRequest *)arg2 error:(NSError *)arg3;
- (void)assistantConnection:(AFConnection *)arg1 didStartAudioPlaybackRequest:(AFAudioPlaybackRequest *)arg2;
- (void)assistantConnection:(AFConnection *)arg1 willStartAudioPlaybackRequest:(AFAudioPlaybackRequest *)arg2;
- (void)assistantConnection:(AFConnection *)arg1 startUIRequestWithInfo:(AFRequestInfo *)arg2 completion:(void (^)(BOOL))arg3;
- (void)assistantConnection:(AFConnection *)arg1 startUIRequestWithText:(NSString *)arg2 completion:(void (^)(BOOL))arg3;
- (void)assistantConnection:(AFConnection *)arg1 extensionRequestFinishedForApplication:(NSString *)arg2 error:(NSError *)arg3;
- (void)assistantConnection:(AFConnection *)arg1 extensionRequestWillStartForApplication:(NSString *)arg2;
- (void)assistantConnection:(AFConnection *)arg1 wantsToCacheImage:(INImage *)arg2;
- (void)assistantConnectionInvalidateCurrentUserActivity:(AFConnection *)arg1;
- (void)assistantConnection:(AFConnection *)arg1 setUserActivtiyInfoAndMakeCurrent:(NSDictionary *)arg2 webpageURL:(NSURL *)arg3;
- (void)assistantConnection:(AFConnection *)arg1 didFinishAcousticIDRequestWithSuccess:(BOOL)arg2;
- (void)assistantConnectionDidDetectMusic:(AFConnection *)arg1;
- (void)assistantConnectionWillStartAcousticIDRequest:(AFConnection *)arg1;
- (void)assistantConnectionAudioSessionDidEndInterruption:(AFConnection *)arg1 shouldResume:(BOOL)arg2;
- (void)assistantConnectionAudioSessionDidBeginInterruption:(AFConnection *)arg1;
- (void)assistantConnection:(AFConnection *)arg1 shouldSpeak:(BOOL)arg2;
- (void)assistantConnection:(AFConnection *)arg1 openApplicationWithBundleID:(NSString *)arg2 URL:(NSURL *)arg3 completion:(void (^)(BOOL))arg4;
- (void)assistantConnection:(AFConnection *)arg1 openURL:(NSURL *)arg2 completion:(void (^)(BOOL))arg3;
- (void)assistantConnection:(AFConnection *)arg1 requestFailedWithError:(NSError *)arg2 requestClass:(NSString *)arg3;
- (void)assistantConnection:(AFConnection *)arg1 receivedCommand:(AceObject<SAAceCommand> *)arg2 completion:(void (^)(AceObject<SAAceCommand> *))arg3;
- (void)assistantConnectionRequestFinished:(AFConnection *)arg1;
- (void)assistantConnectionDismissAssistant:(AFConnection *)arg1;
- (void)assistantConnectionRequestWillStart:(AFConnection *)arg1;
@end


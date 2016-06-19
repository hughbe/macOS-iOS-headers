//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class AVCCaptionsResult, AVConference, NSData, NSDictionary, NSError, VideoAttributes;

@protocol AVConferenceDelegate
- (void)conference:(AVConference *)arg1 withCallID:(long long)arg2 networkHint:(BOOL)arg3;
- (void)conference:(AVConference *)arg1 videoQualityNotificationForCallID:(long long)arg2 isDegraded:(BOOL)arg3 isRemote:(BOOL)arg4;
- (void)conference:(AVConference *)arg1 cancelRelayRequest:(long long)arg2 requestDict:(NSDictionary *)arg3;
- (void)conference:(AVConference *)arg1 sendRelayUpdate:(long long)arg2 updateDict:(NSDictionary *)arg3;
- (void)conference:(AVConference *)arg1 inititiateRelayRequest:(long long)arg2 requestDict:(NSDictionary *)arg3;
- (void)serverDiedForConference:(AVConference *)arg1;
- (void)conference:(AVConference *)arg1 remoteVideoPaused:(BOOL)arg2 callID:(long long)arg3;
- (void)conference:(AVConference *)arg1 remoteAudioPaused:(BOOL)arg2 callID:(long long)arg3;
- (void)conference:(AVConference *)arg1 remoteVideoAttributesChanged:(VideoAttributes *)arg2 callID:(long long)arg3;
- (void)conference:(AVConference *)arg1 remoteScreenAttributesChanged:(VideoAttributes *)arg2 callID:(long long)arg3;
- (void)conference:(AVConference *)arg1 receivedFirstRemoteFrameForCallID:(long long)arg2;
- (void)conference:(AVConference *)arg1 updateOutputFrequencyLevel:(NSData *)arg2;
- (void)conference:(AVConference *)arg1 updateInputFrequencyLevel:(NSData *)arg2;
- (void)conference:(AVConference *)arg1 didStopWithCallID:(long long)arg2 error:(NSError *)arg3;
- (void)conference:(AVConference *)arg1 didStartSession:(BOOL)arg2 withUserInfo:(NSDictionary *)arg3;
- (void)conference:(AVConference *)arg1 withCallID:(long long)arg2 remoteMediaStalled:(BOOL)arg3;

@optional
- (void)conference:(AVConference *)arg1 didStopCaptioningWithReason:(unsigned char)arg2;
- (void)conference:(AVConference *)arg1 didStartCaptioningWithReason:(unsigned char)arg2;
- (void)conference:(AVConference *)arg1 didDisableCaptions:(BOOL)arg2 error:(NSError *)arg3;
- (void)conference:(AVConference *)arg1 didEnableCaptions:(BOOL)arg2 error:(NSError *)arg3;
- (void)conference:(AVConference *)arg1 didUpdateCaptions:(AVCCaptionsResult *)arg2;
- (void)conference:(AVConference *)arg1 isRemoteAudioBelowThreshold:(BOOL)arg2;
- (void)conference:(AVConference *)arg1 updateOutputMeterLevel:(float)arg2;
- (void)conference:(AVConference *)arg1 updateInputMeterLevel:(float)arg2;
- (void)conference:(AVConference *)arg1 closeConnectionForCallID:(long long)arg2;
- (void)conference:(AVConference *)arg1 reinitializeCallForCallID:(unsigned int)arg2;
- (void)conference:(AVConference *)arg1 remoteCallingModeChanged:(unsigned int)arg2 forCallID:(unsigned int)arg3;
- (void)conference:(AVConference *)arg1 localAudioEnabled:(BOOL)arg2 forCallID:(unsigned int)arg3 error:(NSError *)arg4;
- (void)conference:(AVConference *)arg1 remoteAudioEnabled:(BOOL)arg2 forCallID:(unsigned int)arg3;
- (void)conference:(AVConference *)arg1 didChangeLocalVariablesForCallID:(long long)arg2;
- (void)conference:(AVConference *)arg1 didReceiveData:(NSData *)arg2 forCallID:(long long)arg3;
- (void)conference:(AVConference *)arg1 didReceiveARPLData:(NSData *)arg2 withCallID:(long long)arg3;
- (void)conference:(AVConference *)arg1 withCallID:(long long)arg2 didPauseVideo:(BOOL)arg3 error:(NSError *)arg4;
- (void)conference:(AVConference *)arg1 withCallID:(long long)arg2 didPauseAudio:(BOOL)arg3 error:(NSError *)arg4;
- (void)conference:(AVConference *)arg1 didStopWithCallID:(long long)arg2 error:(NSError *)arg3 callMetadata:(NSDictionary *)arg4;
- (void)conference:(AVConference *)arg1 didStartSession:(BOOL)arg2 withCallID:(long long)arg3 error:(NSError *)arg4;
- (void)conference:(AVConference *)arg1 localIPChange:(NSData *)arg2 withCallID:(long long)arg3;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSObject<OS_xpc_object>;

@protocol VCMediaStreamProtocol <NSObject>
- (void)stop;
- (void)start;
- (BOOL)setStreamConfig:(NSDictionary *)arg1 withError:(id *)arg2;

@optional
- (void)setRtcpSendInterval:(double)arg1;
- (void)setRtcpTimeOutInterval:(double)arg1;
- (void)setRtpTimeOutInterval:(double)arg1;
- (void)setRtcpTimeOutEnabled:(BOOL)arg1;
- (void)setRtpTimeOutEnabled:(BOOL)arg1;
- (void)setRtcpEnabled:(BOOL)arg1;
- (long long)streamDirection;
- (void)setStreamDirection:(long long)arg1;
- (void)setPause:(BOOL)arg1;
- (NSDictionary *)setLocalParticipantInfo:(NSDictionary *)arg1 networkSockets:(NSObject<OS_xpc_object> *)arg2 withError:(id *)arg3;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSNumber, NSString, NSURL, NSUUID, W5DebugConfiguration, W5PerfConfiguration, W5WiFiChannel;

@protocol W5SystemXPCRequestDelegate
- (void)stopEventMonitoringAndReply:(void (^)(NSError *))arg1;
- (void)startEventMonitoringAndReply:(void (^)(NSError *))arg1;
- (void)stopPowerSourceEventMonitoringAndReply:(void (^)(NSError *))arg1;
- (void)startPowerSourceEventMonitoringAndReply:(void (^)(NSError *))arg1;
- (void)cancelPerfServerWithUUID:(NSUUID *)arg1 reply:(void (^)(NSError *))arg2;
- (void)runPerfServerWithConfiguration:(W5PerfConfiguration *)arg1 port:(NSNumber *)arg2 uuid:(NSUUID *)arg3 reply:(void (^)(NSError *))arg4;
- (void)cancelPerfClientWithUUID:(NSUUID *)arg1 reply:(void (^)(NSError *))arg2;
- (void)runPerfClientWithConfiguration:(W5PerfConfiguration *)arg1 address:(NSString *)arg2 port:(NSNumber *)arg3 uuid:(NSUUID *)arg4 reply:(void (^)(NSError *, W5PerfResult *))arg5;
- (void)relinquishPortsWithUUID:(NSUUID *)arg1 reply:(void (^)(NSError *))arg2;
- (void)reserveAvailablePorts:(unsigned long long)arg1 uuid:(NSUUID *)arg2 reply:(void (^)(NSError *, NSArray *))arg3;
- (void)reserveMatchingAvailablePort:(NSArray *)arg1 uuid:(NSUUID *)arg2 reply:(void (^)(NSError *, NSNumber *))arg3;
- (void)cancelWiFiSnifferWithUUID:(NSUUID *)arg1 reply:(void (^)(NSError *))arg2;
- (void)runWiFiSnifferOnChannel:(W5WiFiChannel *)arg1 duration:(double)arg2 outputFile:(NSURL *)arg3 uuid:(NSUUID *)arg4 reply:(void (^)(NSError *))arg5;
- (void)cancelCollectLogsWithUUID:(NSUUID *)arg1 reply:(void (^)(NSError *))arg2;
- (void)collectLogs:(NSArray *)arg1 outputFile:(NSURL *)arg2 uuid:(NSUUID *)arg3 reply:(void (^)(NSError *))arg4;
- (void)setDebugConfiguration:(W5DebugConfiguration *)arg1 reply:(void (^)(NSError *))arg2;
- (void)queryDebugConfigurationAndReply:(void (^)(NSError *, W5DebugConfiguration *))arg1;
- (void)cancelDiagnosticsWithUUID:(NSUUID *)arg1 reply:(void (^)(NSError *))arg2;
- (void)runDiagnosticsTests:(NSArray *)arg1 uuid:(NSUUID *)arg2 reply:(void (^)(NSError *, NSArray *))arg3;
- (void)queryPowerStatusAndReply:(void (^)(NSError *, W5PowerStatus *))arg1;
- (void)queryStatusAndReply:(void (^)(NSError *, W5Status *))arg1;
@end


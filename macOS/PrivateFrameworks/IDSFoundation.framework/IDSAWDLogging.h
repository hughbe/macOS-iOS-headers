//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AWDServerConnection;
@protocol OS_dispatch_queue;

@interface IDSAWDLogging : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    AWDServerConnection *_AWDServerConnection;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly) AWDServerConnection *AWDServerConnection; // @synthesize AWDServerConnection=_AWDServerConnection;
- (void)submitMetric:(id)arg1 withIdentifier:(unsigned int)arg2;
- (id)init;
- (BOOL)_shouldSubmit;
- (void)_submitAWDMetric:(id)arg1 withContainer:(id)arg2;
- (id)_metricContainerForMetricType:(unsigned int)arg1;
- (void)IDSCoreAnalyticsQuickRelayEventType:(id)arg1 eventSubType:(id)arg2 duration:(id)arg3 resultCode:(id)arg4 providerType:(id)arg5 transportType:(id)arg6 interfaceType:(id)arg7 skeEnabled:(id)arg8 isInitiator:(id)arg9 protocolVersion:(id)arg10 retryCount:(id)arg11 serviceName:(id)arg12 subServiceName:(id)arg13 participantCount:(id)arg14;
- (void)IDSQuickRelayEventType:(id)arg1 eventSubType:(id)arg2 duration:(id)arg3 resultCode:(id)arg4 providerType:(id)arg5 transportType:(id)arg6 interfaceType:(id)arg7 skeEnabled:(id)arg8 isInitiator:(id)arg9 protocolVersion:(id)arg10 retryCount:(id)arg11 serviceName:(id)arg12 subServiceName:(id)arg13 participantCount:(id)arg14;

@end


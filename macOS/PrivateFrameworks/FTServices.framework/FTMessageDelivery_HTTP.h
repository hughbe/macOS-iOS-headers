//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FTServices/FTMessageDelivery.h>

#import "FTMessageQueueDelegate.h"

@class IMRemoteURLConnection;

@interface FTMessageDelivery_HTTP : FTMessageDelivery <FTMessageQueueDelegate>
{
    IMRemoteURLConnection *_remoteConnection;
    BOOL _pendingRetryAfterAirplaneMode;
    double _retryTimeAfterAirplaneMode;
}

- (void)networkStateChanged;
- (void)_serverBagLoaded:(id)arg1;
- (BOOL)sendMessage:(id)arg1;
- (void)cancelMessage:(id)arg1;
- (void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2;
- (BOOL)_tryRetryMessageWithTimeInterval:(double)arg1;
- (BOOL)busy;
- (void)_cleanupURLConnection;
- (void)_dequeueIfNeeded;
- (BOOL)_sendMessageAsynchronously:(id)arg1 error:(id *)arg2;
- (void)invalidate;
- (void)_clearRetryTimer;
- (void)_notifyDelegateAboutError:(id)arg1 forMessage:(id)arg2;
- (void)_updateWiFiAssertions;
- (id)_processResultData:(id)arg1 forMessage:(id)arg2 error:(id *)arg3;
- (void)_urlRequestWithURL:(id)arg1 andData:(id)arg2 message:(id)arg3 missingAnisetteHeaders:(char *)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)init;

@end


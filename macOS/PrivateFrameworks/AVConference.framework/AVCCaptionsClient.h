//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVConferenceXPCClient;

@interface AVCCaptionsClient : NSObject
{
    long long _streamToken;
    id <AVCCaptionsClientDelegate> _delegate;
    AVConferenceXPCClient *_connection;
}

@property(readonly) long long streamToken; // @synthesize streamToken=_streamToken;
- (void)configureCaptions:(id)arg1;
- (void)enableCaptions:(BOOL)arg1;
@property(readonly) BOOL captionsSupported;
@property(readonly) BOOL captionsEnabled;
@property(readonly) id <AVCCaptionsClientDelegate> delegate;
- (void)deregisterBlocksForNotifications;
- (void)registerBlocksForNotifications;
- (void)disconnect;
- (BOOL)connect;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 streamToken:(long long)arg2;

@end


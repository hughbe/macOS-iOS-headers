//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebInspector/RWIServiceConnection.h>

#import "TCPConnectionDelegate.h"

@class NSString, TCPConnection;

__attribute__((visibility("hidden")))
@interface RWIServiceTCPConnection : RWIServiceConnection <TCPConnectionDelegate>
{
    TCPConnection *_connection;
}

- (void).cxx_destruct;
- (void)sendMessage:(id)arg1;
- (void)tcpConnection:(id)arg1 didReceiveMessage:(id)arg2;
- (void)tcpConnectionDidClose:(id)arg1;
- (BOOL)isConnected;
- (id)initWithDevice:(id)arg1 resolvedBonjourService:(id)arg2 delegate:(id)arg3;
- (id)initWithDevice:(id)arg1 port:(unsigned short)arg2 delegate:(id)arg3;
- (id)_initWithDevice:(id)arg1 tcpConnection:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


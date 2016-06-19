//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<LoopbackSocketTunnelDelegate>;

__attribute__((visibility("hidden")))
@interface LoopbackSocketTunnel : NSObject
{
    unsigned short _port;
    int sockFD;
    struct sockaddr_in sa;
    struct sockaddr_in vtpSA;
    NSObject *optionalArg;
    NSObject<LoopbackSocketTunnelDelegate> *_delegate;
    BOOL foundVTPIP;
}

@property NSObject *optionalArg; // @synthesize optionalArg;
- (int)serverLoopProc;
- (void)shutdownSocket;
- (void)setVTPIP:(struct tagIPPORT *)arg1;
- (void)getVTPIPPort:(struct tagIPPORT *)arg1;
- (void)getIPPort:(struct tagIPPORT *)arg1;
- (int)sendPacketToVTP:(id)arg1;
- (id)initWithPort:(unsigned short)arg1 delegate:(id)arg2 error:(id *)arg3;

@end


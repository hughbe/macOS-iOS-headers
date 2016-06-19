//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface GKAsyncSocket : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) id socketName;
@property(copy, nonatomic) CDUnknownBlockType connectedHandler;
@property(copy, nonatomic) CDUnknownBlockType receiveDataHandler;
@property(nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
- (void)setSyncQueue:(id)arg1;
- (id)syncQueue;
- (void)sendData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)tcpConnectSockAddr:(const struct sockaddr *)arg1 port:(unsigned short)arg2;
- (void)tcpAttachSocketDescriptor:(int)arg1;

@end


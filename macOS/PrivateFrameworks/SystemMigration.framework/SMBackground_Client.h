//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection, NSXPCInterface;

@interface SMBackground_Client : NSObject
{
    NSXPCInterface *_daemonInterface;
    NSXPCInterface *_exportedInterface;
    NSXPCConnection *_daemonConnection;
    id <SMDBackgroundProtocol> _daemonProxy;
}

@property(retain) id <SMDBackgroundProtocol> daemonProxy; // @synthesize daemonProxy=_daemonProxy;
@property(retain) NSXPCConnection *daemonConnection; // @synthesize daemonConnection=_daemonConnection;
@property(retain) NSXPCInterface *exportedInterface; // @synthesize exportedInterface=_exportedInterface;
@property(retain) NSXPCInterface *daemonInterface; // @synthesize daemonInterface=_daemonInterface;
- (void).cxx_destruct;
- (void)prioritizeMigratingPath:(id)arg1;
- (void)connectToDaemon;
- (id)init;

@end


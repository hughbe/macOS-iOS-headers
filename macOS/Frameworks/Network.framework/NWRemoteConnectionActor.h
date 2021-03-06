//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol NWRemoteConnectionActorDelegate;

@interface NWRemoteConnectionActor : NSObject
{
    NSObject<NWRemoteConnectionActorDelegate> *_delegate;
    NSMutableDictionary *_connections;
    NSMutableDictionary *_browsers;
}

- (void).cxx_destruct;
@property(retain) NSMutableDictionary *browsers; // @synthesize browsers=_browsers;
@property(retain) NSMutableDictionary *connections; // @synthesize connections=_connections;
@property __weak NSObject<NWRemoteConnectionActorDelegate> *delegate; // @synthesize delegate=_delegate;
- (BOOL)receiveRemoteCommand:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)scheduleReadsOnConnection:(id)arg1;
- (void)updateEndpointsForBrowser:(id)arg1;
- (void)sendData:(id)arg1 forConnection:(id)arg2;
- (void)updatePathForConnection:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RWIDebugger.h"

@class NSMutableDictionary, NSString, RWIDebuggable, RWIManager;

@interface RWIChannel : NSObject <RWIDebugger>
{
    id <RWIChannelDelegate> _delegate;
    NSString *_uuid;
    RWIDebuggable *_debuggable;
    RWIManager *_manager;
    unsigned long long _messageId;
    NSMutableDictionary *_callbackMap;
    CDUnknownBlockType _timelineCallback;
}

@property(retain, nonatomic) RWIManager *manager; // @synthesize manager=_manager;
@property(readonly, nonatomic) RWIDebuggable *debuggable; // @synthesize debuggable=_debuggable;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) __weak id <RWIChannelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)evalJavaScript:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)stopTimeline;
- (void)startTimeline:(CDUnknownBlockType)arg1;
- (void)reloadPage;
- (void)stop;
- (void)start;
- (void)sendMessageToFrontend:(id)arg1;
- (void)sendMessageToBackend:(id)arg1;
- (void)_callCallbacks:(id)arg1;
- (void)_sendSimpleMethod:(id)arg1;
- (void)_sendDictionaryMessage:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithManager:(id)arg1 debuggable:(id)arg2;

@end


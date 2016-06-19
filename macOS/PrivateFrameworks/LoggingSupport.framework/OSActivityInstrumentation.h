//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSObject<OS_xpc_object>;

@interface OSActivityInstrumentation : NSObject
{
    BOOL _receivedHeader;
    unsigned long long _eventFilter;
    unsigned long long _options;
    NSMutableData *_capturedData;
    id <OSActivityInstrumentationDelegate> _delegate;
    NSObject<OS_xpc_object> *_stream;
    NSObject<OS_xpc_object> *_daemon_conn;
    NSObject<OS_xpc_object> *_pidList;
    unsigned long long _state;
    unsigned long long _mode;
    long long _timeWindow;
}

+ (void)evaluateBuffer:(id)arg1 usingPredicate:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (BOOL)blessProcess:(int)arg1 processID:(unsigned long long)arg2;
@property long long timeWindow; // @synthesize timeWindow=_timeWindow;
@property unsigned long long mode; // @synthesize mode=_mode;
@property unsigned long long state; // @synthesize state=_state;
@property(retain) NSObject<OS_xpc_object> *pidList; // @synthesize pidList=_pidList;
@property BOOL receivedHeader; // @synthesize receivedHeader=_receivedHeader;
@property(retain) NSObject<OS_xpc_object> *daemon_conn; // @synthesize daemon_conn=_daemon_conn;
@property(retain) NSObject<OS_xpc_object> *stream; // @synthesize stream=_stream;
@property __weak id <OSActivityInstrumentationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSMutableData *capturedData; // @synthesize capturedData=_capturedData;
@property unsigned long long options; // @synthesize options=_options;
@property unsigned long long eventFilter; // @synthesize eventFilter=_eventFilter;
- (void).cxx_destruct;
- (void)endCapture;
- (void)startCapture;
- (id)createMessage;
- (BOOL)addProcess:(int)arg1 withProcessID:(unsigned long long)arg2;
- (id)initImmediateMode:(long long)arg1;
- (id)initWindowedMode:(long long)arg1;
- (id)initDeferredMode;
- (id)init;

@end


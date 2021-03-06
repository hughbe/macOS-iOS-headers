//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface CSVoiceIdXPCClient : NSObject
{
    NSObject<OS_xpc_object> *_xpcConnection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (id)_decodeError:(id)arg1;
- (void)_sendMessage:(id)arg1 connection:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)notifyImplicitUtterance:(id)arg1 audioDeviceType:(id)arg2 audioRecordType:(id)arg3 voiceTriggerEventInfo:(id)arg4 otherCtxt:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_handleListenerError:(id)arg1;
- (void)_handleListenerEvent:(id)arg1;
- (void)dealloc;
- (void)disconnect;
- (void)connect;
- (id)init;

@end


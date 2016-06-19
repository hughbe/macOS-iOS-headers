//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class DDActionContext, NSDictionary, NSMenuItem, NSObject<OS_xpc_object>, NSString, NSTextCheckingResult;

@protocol DDMiscActionProtocol
+ (BOOL)shallRunInAppProcess;

@optional
+ (NSMenuItem *)customRawMenuItemForContext:(DDActionContext *)arg1;
+ (BOOL)prepareMenuItem:(NSMenuItem *)arg1 result:(struct __DDResult *)arg2 url:(NSString *)arg3 textCheckingResult:(NSTextCheckingResult *)arg4 context:(DDActionContext *)arg5;
+ (NSString *)localizedDynamicName;
+ (BOOL)willNotifyXPCServiceWhenUIFinished;
+ (BOOL)actionValidForDataDetectorsResult:(struct __DDResult *)arg1 url:(NSString *)arg2 textCheckingResult:(NSTextCheckingResult *)arg3 context:(DDActionContext *)arg4;
+ (id)runXPCActionWithDictionary:(NSDictionary *)arg1 peerConnection:(NSObject<OS_xpc_object> *)arg2;
+ (NSDictionary *)dictionaryWithResult:(struct __DDResult *)arg1 url:(NSString *)arg2 textCheckingResult:(NSTextCheckingResult *)arg3 context:(DDActionContext *)arg4;
+ (id)runActionWithResult:(struct __DDResult *)arg1 url:(NSString *)arg2 textCheckingResult:(NSTextCheckingResult *)arg3 context:(DDActionContext *)arg4;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class DDActionContext, NSMenuItem, NSString, NSTextCheckingResult;

@protocol DDMiscActionProtocol
+ (id)runActionWithResult:(struct __DDResult *)arg1 url:(NSString *)arg2 textCheckingResult:(NSTextCheckingResult *)arg3 context:(DDActionContext *)arg4;
+ (BOOL)displaysNonModalUI;
+ (BOOL)requiresViewBridge;
+ (BOOL)requiresService;

@optional
+ (NSMenuItem *)customRawMenuItemForContext:(DDActionContext *)arg1;
+ (BOOL)prepareMenuItem:(NSMenuItem *)arg1 result:(struct __DDResult *)arg2 url:(NSString *)arg3 textCheckingResult:(NSTextCheckingResult *)arg4 context:(DDActionContext *)arg5;
+ (NSString *)localizedDynamicName;
+ (BOOL)actionValidForDataDetectorsResult:(struct __DDResult *)arg1 url:(NSString *)arg2 textCheckingResult:(NSTextCheckingResult *)arg3 context:(DDActionContext *)arg4;
@end


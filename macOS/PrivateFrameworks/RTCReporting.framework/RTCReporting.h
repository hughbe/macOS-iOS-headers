//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RTCReporting/RTCReportingDeallocNotifierDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSXPCConnection, RTCReportingDeallocNotifier;
@protocol OS_dispatch_queue, OS_dispatch_source, RTCReportingMessageSentNotifier;

@interface RTCReporting : NSObject <RTCReportingDeallocNotifierDelegate>
{
    NSObject<OS_dispatch_queue> *_reportingQueue;
    NSObject<OS_dispatch_queue> *_reportingPeriodicTasksQueue;
    CDUnknownBlockType _loggingBlock;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_timer;
    int _counter;
    NSMutableDictionary *_periodicServiceDict;
    NSArray *_enabledBackendNames;
    NSArray *_whitelistedEvents;
    NSArray *_blacklistedEvents;
    RTCReportingDeallocNotifier *_strongDeallocNotifier;
    id _weakDeallocNotifier;
    id _weakMessageSentDelegate;
}

+ (id)newSecureHierarchyTokenFromParentToken:(id)arg1;
+ (id)newHierarchyTokenFromParentToken:(id)arg1;
+ (BOOL)sendOneMessageWithSessionInfo:(id)arg1 userInfo:(id)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 payload:(id)arg5 error:(id *)arg6;
+ (id)getPersistentIdentifierForDNU:(BOOL)arg1;
+ (void)regeneratePersistentIdentifierForDNU:(BOOL)arg1;
@property(copy, nonatomic) CDUnknownBlockType messageLoggingBlock; // @synthesize messageLoggingBlock=_loggingBlock;
- (void)updateSharedDataForKey:(id)arg1 value:(id)arg2;
- (void)updateSharedDataWithDictionary:(id)arg1;
- (void)finishSession;
- (void)flushMessagesWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)flushMessages;
- (BOOL)sendMessageWithDictionary:(id)arg1 error:(id *)arg2;
- (BOOL)sendMessageWithCategory:(unsigned short)arg1 type:(unsigned short)arg2 payload:(id)arg3 error:(id *)arg4;
- (BOOL)isBlacklistedEvent:(unsigned short)arg1;
- (BOOL)isWhitelistedEvent:(unsigned short)arg1;
- (void)notifyMessageWasSent:(id)arg1;
- (void)fetchReportingStatesWithUserInfo:(id)arg1 fetchComplete:(CDUnknownBlockType)arg2;
- (void)startConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) id <RTCReportingMessageSentNotifier> messageSentDelegate;
- (void)dealloc;
- (oneway void)release;
- (id)retain;
- (void)aboutToDealloc;
- (id)initWithSessionInfo:(id)arg1 userInfo:(id)arg2 frameworksToCheck:(id)arg3;
- (id)initWithSessionInfo:(id)arg1 userInfo:(id)arg2 frameworksToCheck:(id)arg3 aggregationBlock:(CDUnknownBlockType)arg4;
- (BOOL)unregisterPeriodTaskForModule:(unsigned int)arg1;
- (BOOL)registerPeriodicTaskForModule:(unsigned int)arg1 needToUpdate:(BOOL)arg2 needToReport:(BOOL)arg3 serviceBlock:(CDUnknownBlockType)arg4;
- (void)stopLogTimer;
- (void)startLogTimerWithInterval:(int)arg1 reportingMultiplier:(int)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4;
- (void)_myPeriodicTask:(unsigned short)arg1 type:(unsigned short)arg2 intervalMultiplier:(int)arg3 updateTimeout:(unsigned long long)arg4;
- (BOOL)uploadDataArray:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)uploadFileWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)serverSupportsFileUpload;
- (BOOL)setDigestKey:(id)arg1 algorithm:(int)arg2;

@end


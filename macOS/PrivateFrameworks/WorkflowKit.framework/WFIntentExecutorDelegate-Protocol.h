//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class INInteraction, WFIntentExecutor;

@protocol WFIntentExecutorDelegate <NSObject>

@optional
- (void)intentExecutor:(WFIntentExecutor *)arg1 showConfirmationForInteraction:(INInteraction *)arg2 confirmationRequired:(BOOL)arg3 authenticationRequired:(BOOL)arg4 completionHandler:(void (^)(BOOL, NSError *))arg5;
- (void)intentExecutorRequestsContinueInApp:(WFIntentExecutor *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSObject, _DKQuery;
@protocol OS_dispatch_queue;

@protocol _DKKnowledgeQuerying
- (void)executeQuery:(_DKQuery *)arg1 responseQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)executeQuery:(_DKQuery *)arg1 responseQueue:(NSObject<OS_dispatch_queue> *)arg2 withCompletion:(void (^)(NSObject *, NSError *))arg3;
- (NSObject *)executeQuery:(_DKQuery *)arg1 error:(id *)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary;

@protocol WDXPCService
- (void)stopServerWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)startServerWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)configureServerWithOptions:(NSDictionary *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end


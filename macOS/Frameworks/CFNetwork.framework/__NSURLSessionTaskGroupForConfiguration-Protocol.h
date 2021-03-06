//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSObject-Protocol.h>

@class NSURLRequest, NSURLSession, NSURLSessionConfiguration, NSURLSessionDataTask, NSURLSessionUploadTask;

@protocol __NSURLSessionTaskGroupForConfiguration <NSObject>
@property(readonly) __weak NSURLSession *_groupSession;
@property(readonly) __weak NSURLSessionConfiguration *_groupConfiguration;
- (NSURLSessionUploadTask *)uploadTaskWithStreamedRequest:(NSURLRequest *)arg1;
- (NSURLSessionDataTask *)dataTaskWithRequest:(NSURLRequest *)arg1 completionHandler:(void (^)(NSData *, NSURLResponse *, NSError *))arg2;
- (NSURLSessionDataTask *)dataTaskWithRequest:(NSURLRequest *)arg1;
@end


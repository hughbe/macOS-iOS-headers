//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Social/SLRequest.h>

@class NSMutableArray;

@interface SLBatchRequest : SLRequest
{
    NSMutableArray *_requests;
}

- (void).cxx_destruct;
- (id)preparedURLRequest;
- (void)addRequest:(id)arg1;
- (id)initWithServiceType:(id)arg1 URL:(id)arg2 parameters:(id)arg3 requestMethod:(long long)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKDOperationMetrics, CKDURLRequest, NSDictionary;

@protocol CKDURLRequestMetricsDelegate <NSObject>
- (void)request:(CKDURLRequest *)arg1 didFinishWithMetrics:(CKDOperationMetrics *)arg2 w3cNavigationTiming:(NSDictionary *)arg3;
@end


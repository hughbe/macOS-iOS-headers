//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/NSObject-Protocol.h>

@class DMFPolicyRegistration, NSArray;

@protocol DMFPolicyRemoteInterface <NSObject>
- (void)requestPoliciesForTypes:(NSArray *)arg1 replyHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)addRegistration:(DMFPolicyRegistration *)arg1 replyHandler:(void (^)(NSDictionary *, NSError *))arg2;
@end


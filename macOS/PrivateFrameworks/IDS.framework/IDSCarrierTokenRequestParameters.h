//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSCarrierTokenRequestParameters : NSObject
{
    long long _subscriptionSource;
    NSString *_IMEI;
    NSString *_carrierNonce;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *carrierNonce; // @synthesize carrierNonce=_carrierNonce;
@property(readonly, nonatomic) NSString *IMEI; // @synthesize IMEI=_IMEI;
@property(readonly, nonatomic) long long subscriptionSource; // @synthesize subscriptionSource=_subscriptionSource;
- (id)initWithSubscriptionSource:(long long)arg1 IMEI:(id)arg2 carrierNonce:(id)arg3;

@end


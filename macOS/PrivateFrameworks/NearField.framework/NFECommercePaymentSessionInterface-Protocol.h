//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NearField/NFSessionInterface-Protocol.h>

@class NFECommercePaymentRequest, NSData;

@protocol NFECommercePaymentSessionInterface <NFSessionInterface>
- (oneway void)performECommercePayment:(NSData *)arg1 request:(NFECommercePaymentRequest *)arg2 callback:(void (^)(NFECommercePaymentResponse *, NSError *))arg3;
- (oneway void)getApplets:(void (^)(NSArray *, NSError *))arg1;
@end


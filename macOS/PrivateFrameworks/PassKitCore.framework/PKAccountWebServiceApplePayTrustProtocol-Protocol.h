//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NSArray, NSData, NSString, NSURL, PKApplePayTrustHashResponse;

@protocol PKAccountWebServiceApplePayTrustProtocol <NSObject>
@property(copy, nonatomic) NSData *publicKeyHash;
@property(retain, nonatomic) NSURL *baseURL;
@property(retain, nonatomic) PKApplePayTrustHashResponse *hashResponse;
- (NSData *)manifestHashWithReferenceIdentifier:(NSString *)arg1;
- (NSArray *)endpointComponents;
- (Class)signatureResponseClass;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CommerceKit/NSCopying-Protocol.h>
#import <CommerceKit/NSSecureCoding-Protocol.h>

@class CKStoreClient, CKStoreResponse, NSArray, NSDictionary, NSError;

@interface CKPurchaseResponse : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_downloads;
    CKStoreClient *_storeClient;
    CKStoreResponse *_storeResponse;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) CKStoreResponse *storeResponse; // @synthesize storeResponse=_storeResponse;
@property(retain) CKStoreClient *storeClient; // @synthesize storeClient=_storeClient;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) NSDictionary *metrics;
@property(readonly) NSArray *downloads;
@property(readonly) NSError *error;
- (id)_storeResponse;
- (id)_initWithStoreClient:(id)arg1 response:(id)arg2;

@end


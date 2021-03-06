//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKOperationResult.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@interface CKFetchUserQuotaOperationResult : CKOperationResult <NSSecureCoding>
{
    unsigned long long _quotaAvailable;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long quotaAvailable; // @synthesize quotaAvailable=_quotaAvailable;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccountPolicy/APPolicy.h>

#import <AccountPolicy/NSCopying-Protocol.h>
#import <AccountPolicy/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface APPolicyChangePasswordEveryNDays : APPolicy <NSCopying, NSSecureCoding>
{
    NSNumber *_days;
}

+ (BOOL)supportsSecureCoding;
+ (id)policyWithDays:(id)arg1;
+ (id)policyWithIdentifier:(id)arg1 andDays:(id)arg2;
- (void).cxx_destruct;
- (id)_parametersForDays:(id)arg1;
- (id)_contentForDays:(id)arg1;
@property(copy) NSNumber *days; // @synthesize days=_days;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 andDays:(id)arg2;
- (id)initWithDays:(id)arg1;

@end


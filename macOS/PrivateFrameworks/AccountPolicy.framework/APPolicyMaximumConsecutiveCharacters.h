//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AccountPolicy/APPolicyMaximum.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface APPolicyMaximumConsecutiveCharacters : APPolicyMaximum <NSCopying, NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
+ (id)policyWithIdentifier:(id)arg1 andMaximum:(id)arg2;
+ (id)policyWithMaximum:(id)arg1;
- (id)_parametersForMaximum:(id)arg1;
- (id)_contentDescriptionsForMaximum:(id)arg1;
- (id)_contentForMaximum:(id)arg1;
- (id)initWithIdentifier:(id)arg1 andMaximum:(id)arg2;
- (id)initWithMaximum:(id)arg1;

@end


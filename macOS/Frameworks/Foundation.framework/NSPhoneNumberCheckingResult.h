//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSTextCheckingResult.h>

@class NSString;

@interface NSPhoneNumberCheckingResult : NSTextCheckingResult
{
    struct _NSRange _range;
    NSString *_phoneNumber;
    id _underlyingResult;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) void *underlyingResult;
- (id)phoneNumber;
- (BOOL)_adjustRangesWithOffset:(long long)arg1;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;
- (struct _NSRange)range;
- (unsigned long long)resultType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithRange:(struct _NSRange)arg1 phoneNumber:(id)arg2;
- (id)initWithRange:(struct _NSRange)arg1 phoneNumber:(id)arg2 underlyingResult:(void *)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExpression.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSymbolicExpression : NSExpression
{
    NSString *_token;
}

+ (BOOL)supportsSecureCoding;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)constantValue;
- (id)predicateFormat;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;

@end


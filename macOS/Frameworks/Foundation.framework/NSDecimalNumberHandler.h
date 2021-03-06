//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCoding-Protocol.h>
#import <Foundation/NSDecimalNumberBehaviors-Protocol.h>

@interface NSDecimalNumberHandler : NSObject <NSDecimalNumberBehaviors, NSCoding>
{
    unsigned int _scale:16;
    unsigned int _roundingMode:3;
    unsigned int _raiseOnExactness:1;
    unsigned int _raiseOnOverflow:1;
    unsigned int _raiseOnUnderflow:1;
    unsigned int _raiseOnDivideByZero:1;
    unsigned int _unused:9;
    void *_reserved2;
    void *_reserved;
}

+ (id)decimalNumberHandlerWithRoundingMode:(unsigned long long)arg1 scale:(short)arg2 raiseOnExactness:(BOOL)arg3 raiseOnOverflow:(BOOL)arg4 raiseOnUnderflow:(BOOL)arg5 raiseOnDivideByZero:(BOOL)arg6;
+ (id)defaultDecimalNumberHandler;
- (id)exceptionDuringOperation:(SEL)arg1 error:(unsigned long long)arg2 leftOperand:(id)arg3 rightOperand:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (short)scale;
- (unsigned long long)roundingMode;
- (id)initWithRoundingMode:(unsigned long long)arg1 scale:(short)arg2 raiseOnExactness:(BOOL)arg3 raiseOnOverflow:(BOOL)arg4 raiseOnUnderflow:(BOOL)arg5 raiseOnDivideByZero:(BOOL)arg6;

@end


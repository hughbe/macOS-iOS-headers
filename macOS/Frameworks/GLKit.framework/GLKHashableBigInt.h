//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GLKit/NSCopying-Protocol.h>

@interface GLKHashableBigInt : NSObject <NSCopying>
{
    struct GLKBigInt_s _bigInt;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBigInt:(struct GLKBigInt_s *)arg1;

@end


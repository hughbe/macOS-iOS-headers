//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/NSSecureCoding-Protocol.h>

@interface ABRectObject : NSObject <NSSecureCoding>
{
    struct CGRect _rect;
}

+ (BOOL)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect)rectValue;
- (id)initWithRect:(struct CGRect)arg1;

@end


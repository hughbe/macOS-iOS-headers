//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INObject.h>

@class INCodable, INCodableDescription;

@interface INCustomObject : INObject
{
    INCodable *_backingStore;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setBackingStore:) INCodable *_backingStore; // @synthesize _backingStore;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)_isValidKey:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
@property(readonly, nonatomic) INCodableDescription *codableDescription;
- (id)initWithObject:(id)arg1 codableDescription:(id)arg2;
- (id)_initWithCodableDescription:(id)arg1;

@end


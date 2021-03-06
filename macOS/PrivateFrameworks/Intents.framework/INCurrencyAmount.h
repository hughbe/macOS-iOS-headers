//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCodableAttributeRelationComparing-Protocol.h>
#import <Intents/INCurrencyAmountExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSDecimalNumber, NSString;

@interface INCurrencyAmount : NSObject <INCodableAttributeRelationComparing, INCurrencyAmountExport, NSCopying, NSSecureCoding>
{
    NSDecimalNumber *_amount;
    NSString *_currencyCode;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(readonly, copy) NSDecimalNumber *amount; // @synthesize amount=_amount;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithAmount:(id)arg1 currencyCode:(id)arg2;
- (id)_intents_readableDescriptionWithLocalizer:(id)arg1 metadata:(id)arg2;
- (BOOL)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


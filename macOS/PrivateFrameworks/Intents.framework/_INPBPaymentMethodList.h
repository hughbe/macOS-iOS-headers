//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPaymentMethodList-Protocol.h>

@class NSArray, NSString, _INPBCondition;

@interface _INPBPaymentMethodList : PBCodable <_INPBPaymentMethodList, NSSecureCoding, NSCopying>
{
    struct _has;
    BOOL __encodeLegacyGloryData;
    _INPBCondition *_condition;
    NSArray *_paymentMethods;
}

+ (BOOL)supportsSecureCoding;
+ (Class)paymentMethodsType;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(copy, nonatomic) NSArray *paymentMethods; // @synthesize paymentMethods=_paymentMethods;
@property(retain, nonatomic) _INPBCondition *condition; // @synthesize condition=_condition;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)paymentMethodsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long paymentMethodsCount;
- (void)addPaymentMethods:(id)arg1;
- (void)clearPaymentMethods;
@property(readonly, nonatomic) BOOL hasCondition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/ABCardViewMultiValueConverter-Protocol.h>

@class NSArray, NSString;
@protocol ABCardViewMultiValueConverter;

@interface ABCardViewTransformingMultiValueConverter : NSObject <ABCardViewMultiValueConverter>
{
    id <ABCardViewMultiValueConverter> _basicConverter;
    NSArray *_multiValueTransformers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *multiValueTransformers; // @synthesize multiValueTransformers=_multiValueTransformers;
@property(retain, nonatomic) id <ABCardViewMultiValueConverter> basicConverter; // @synthesize basicConverter=_basicConverter;
- (id)multiValueFromValue:(id)arg1;
- (id)valueFromMultiValue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


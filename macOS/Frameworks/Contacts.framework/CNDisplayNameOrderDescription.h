//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNPropertyDescription.h>

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNDisplayNameOrderDescription : CNPropertyDescription <CNAbstractPropertyDescription>
{
}

- (BOOL)isValidValue:(id)arg1 error:(id *)arg2;
- (void)setCNValue:(id)arg1 onContact:(id)arg2;
- (id)CNValueForContact:(id)arg1;
- (id)nilValue;
- (Class)valueClass;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (BOOL)isEqualForContact:(id)arg1 other:(id)arg2;
- (id)init;
- (id)flagsWithFlags:(id)arg1 nameOrder:(id)arg2;
- (id)nameOrderFromFlags:(id)arg1;
- (void)setValue:(id)arg1 onCoreDataContact:(id)arg2;
- (id)valueFromCoreDataContact:(id)arg1;
- (id)coreDataBitMaskedValuesMap;
- (long long)coreDataBitMask;
- (id)coreDataKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


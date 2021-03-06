//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PKPaymentSetupFieldFooter;

@interface PKPaymentSetupFieldsModel : NSObject
{
    NSMutableArray *_paymentSetupFields;
    PKPaymentSetupFieldFooter *_footerField;
}

+ (id)fakePaymentSetupProvisioningFields;
+ (id)defaultPaymentSetupProvisioningFields;
- (void).cxx_destruct;
- (void)prefillDefaultValues;
- (void)resetAllPaymentSetupFieldValues;
- (id)secureSubmissionValuesForDestination:(id)arg1;
- (BOOL)hasFooterPaymentSetupField;
- (id)footerPaymentSetupField;
- (id)submissionValuesForDestination:(id)arg1;
- (BOOL)hasIncompletePaymentSetupFields;
- (id)incompletePaymentSetupFields;
- (id)paymentSetupFieldWithIdentifier:(id)arg1;
- (unsigned long long)numberOfPaymentSetupFields;
- (id)paymentSetupFieldAtIndex:(unsigned long long)arg1;
- (id)paymentSetupFieldIdentifiers;
- (id)paymentSetupFields;
- (void)updateWithPaymentSetupFields:(id)arg1;
- (void)replaceAllPaymentSetupFieldsPreservingCurrentValues:(id)arg1;
- (void)replaceAllPaymentSetupFields:(id)arg1;
- (id)initWithPaymentSetupFields:(id)arg1;

@end


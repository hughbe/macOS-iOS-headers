//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class PKPaymentSetupField;

@interface PKPaymentSetupFieldFormatter : NSFormatter
{
    PKPaymentSetupField *_paymentSetupField;
}

- (void).cxx_destruct;
@property(nonatomic) __weak PKPaymentSetupField *paymentSetupField; // @synthesize paymentSetupField=_paymentSetupField;
- (BOOL)isPartialStringValid:(id *)arg1 proposedSelectedRange:(struct _NSRange *)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange)arg4 errorDescription:(id *)arg5;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)stringForObjectValue:(id)arg1;

@end


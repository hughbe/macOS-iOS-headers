//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPaymentDataItem.h>

@class NSString;

@interface PKPaymentShippingContactDataItem : PKPaymentDataItem
{
}

+ (long long)dataType;
- (BOOL)isValidWithError:(id *)arg1;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *phone;
@property(readonly, nonatomic) NSString *email;

@end


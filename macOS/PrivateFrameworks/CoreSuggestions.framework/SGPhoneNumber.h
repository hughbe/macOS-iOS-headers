//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSuggestions/SGLabeledObject.h>

@class NSString;

@interface SGPhoneNumber : SGLabeledObject
{
    NSString *_phoneNumber;
}

+ (id)phoneNumber:(id)arg1 label:(id)arg2 extractionType:(unsigned long long)arg3 recordId:(id)arg4 origin:(id)arg5;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqualToPhoneNumber:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhoneNumber:(id)arg1 label:(id)arg2 extractionType:(unsigned long long)arg3 recordId:(id)arg4 origin:(id)arg5;

@end


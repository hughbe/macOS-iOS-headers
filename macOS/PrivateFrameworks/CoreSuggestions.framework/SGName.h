//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSuggestions/SGObject.h>

@class NSString;

@interface SGName : SGObject
{
    NSString *_fullName;
    NSString *_firstName;
    NSString *_middleName;
    NSString *_lastName;
    NSString *_prefix;
    NSString *_suffix;
}

+ (id)nameWithFirstName:(id)arg1 withRecordId:(id)arg2 origin:(id)arg3;
+ (id)nameWithFirstName:(id)arg1 lastName:(id)arg2 withRecordId:(id)arg3 origin:(id)arg4;
+ (id)nameWithFirstName:(id)arg1 lastName:(id)arg2 middleName:(id)arg3 fullName:(id)arg4 prefix:(id)arg5 suffix:(id)arg6 withRecordId:(id)arg7 origin:(id)arg8;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *suffix; // @synthesize suffix=_suffix;
@property(readonly, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(readonly, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(readonly, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqualToName:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (id)initWithFirstName:(id)arg1 middleName:(id)arg2 lastName:(id)arg3 fullName:(id)arg4 prefix:(id)arg5 suffix:(id)arg6 recordId:(id)arg7 origin:(id)arg8;

@end


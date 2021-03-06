//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/NSSecureCoding-Protocol.h>

@class EAEmailAddressSet, NSString;

@interface EMVIP : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_name;
    NSString *_displayName;
    EAEmailAddressSet *_emailAddresses;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) EAEmailAddressSet *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (BOOL)_isEqualToVIP:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)_commonInitWithIdentifier:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 displayName:(id)arg4;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3;

@end


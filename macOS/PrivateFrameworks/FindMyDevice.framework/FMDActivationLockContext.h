//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FindMyDevice/NSSecureCoding-Protocol.h>

@class NSLocale, NSString;

@interface FMDActivationLockContext : NSObject <NSSecureCoding>
{
    NSString *_username;
    NSString *_password;
    NSLocale *_locale;
    unsigned long long _activationLockAuthType;
    unsigned long long _activationLockOperationType;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long activationLockOperationType; // @synthesize activationLockOperationType=_activationLockOperationType;
@property(nonatomic) unsigned long long activationLockAuthType; // @synthesize activationLockAuthType=_activationLockAuthType;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (id)description;
- (id)validateContext;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


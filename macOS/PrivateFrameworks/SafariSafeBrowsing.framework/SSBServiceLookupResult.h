//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariSafeBrowsing/NSCopying-Protocol.h>
#import <SafariSafeBrowsing/NSSecureCoding-Protocol.h>

@class NSString;

@interface SSBServiceLookupResult : NSObject <NSCopying, NSSecureCoding>
{
    struct LookupResult _lookupResult;
}

+ (BOOL)supportsSecureCoding;
- (id).cxx_construct;
@property(readonly, nonatomic) NSString *provider;
@property(readonly, nonatomic, getter=isKnownToBeUnsafe) BOOL knownToBeUnsafe;
@property(readonly, nonatomic, getter=isUnwantedSoftware) BOOL unwantedSoftware;
@property(readonly, nonatomic, getter=isPhishing) BOOL phishing;
@property(readonly, nonatomic, getter=isMalware) BOOL malware;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithLookupResult:(struct LookupResult)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreWiFi/NSCopying-Protocol.h>
#import <CoreWiFi/NSSecureCoding-Protocol.h>

@class NSString;

@interface CWFAWDLPeerContext : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_MACAddress;
    NSString *_interfaceName;
}

+ (BOOL)supportsSecureCoding;
+ (id)AWDLPeerContextWithMACAddress:(id)arg1 interfaceName:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
@property(copy, nonatomic) NSString *MACAddress; // @synthesize MACAddress=_MACAddress;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAWDLPeerContext:(id)arg1;

@end


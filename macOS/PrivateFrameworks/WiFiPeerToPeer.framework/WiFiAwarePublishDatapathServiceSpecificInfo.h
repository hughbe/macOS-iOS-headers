//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WiFiPeerToPeer/NSCopying-Protocol.h>
#import <WiFiPeerToPeer/NSSecureCoding-Protocol.h>

@class NSString;

@interface WiFiAwarePublishDatapathServiceSpecificInfo : NSObject <NSSecureCoding, NSCopying>
{
    unsigned short _servicePort;
    long long _protocolType;
    NSString *_hostname;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(readonly, nonatomic) unsigned short servicePort; // @synthesize servicePort=_servicePort;
@property(readonly, nonatomic) long long protocolType; // @synthesize protocolType=_protocolType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)hostnameEquals:(id)arg1;
- (id)initWithProtocolType:(long long)arg1 servicePort:(unsigned short)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end


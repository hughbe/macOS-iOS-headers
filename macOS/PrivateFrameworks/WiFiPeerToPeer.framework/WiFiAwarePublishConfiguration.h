//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WiFiPeerToPeer/NSCopying-Protocol.h>
#import <WiFiPeerToPeer/NSSecureCoding-Protocol.h>

@class NSString, WiFiAwarePublishDatapathConfiguration, WiFiAwarePublishServiceSpecificInfo;

@interface WiFiAwarePublishConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _furtherServiceDiscoveryRequired;
    BOOL _jumboServiceDiscoveryMessages;
    NSString *_serviceName;
    WiFiAwarePublishServiceSpecificInfo *_serviceSpecificInfo;
    WiFiAwarePublishDatapathConfiguration *_datapathConfiguration;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) WiFiAwarePublishDatapathConfiguration *datapathConfiguration; // @synthesize datapathConfiguration=_datapathConfiguration;
@property(nonatomic) BOOL jumboServiceDiscoveryMessages; // @synthesize jumboServiceDiscoveryMessages=_jumboServiceDiscoveryMessages;
@property(nonatomic) BOOL furtherServiceDiscoveryRequired; // @synthesize furtherServiceDiscoveryRequired=_furtherServiceDiscoveryRequired;
@property(copy, nonatomic) WiFiAwarePublishServiceSpecificInfo *serviceSpecificInfo; // @synthesize serviceSpecificInfo=_serviceSpecificInfo;
@property(readonly, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)datapathConfigurationEqual:(id)arg1;
- (BOOL)serviceSpecificInfoEqual:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end


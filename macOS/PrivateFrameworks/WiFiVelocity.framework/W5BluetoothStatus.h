//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WiFiVelocity/NSCopying-Protocol.h>
#import <WiFiVelocity/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface W5BluetoothStatus : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _powerOn;
    BOOL _isDiscoverable;
    BOOL _isConnectable;
    BOOL _isScanning;
    NSString *_address;
    NSArray *_devices;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(nonatomic) BOOL isScanning; // @synthesize isScanning=_isScanning;
@property(nonatomic) BOOL isConnectable; // @synthesize isConnectable=_isConnectable;
@property(nonatomic) BOOL isDiscoverable; // @synthesize isDiscoverable=_isDiscoverable;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(nonatomic) BOOL powerOn; // @synthesize powerOn=_powerOn;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToBluetoothStatus:(id)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)description;
- (void)dealloc;

@end


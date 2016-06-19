//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary;

@interface W5WiFiScanResult : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_scanRecord;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDictionary *scanRecord; // @synthesize scanRecord=_scanRecord;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToScanResult:(id)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)description;
- (long long)beaconInterval;
- (id)channel;
- (id)countryCode;
- (BOOL)isAirPortBaseStation:(id *)arg1 modelID:(char *)arg2;
- (id)__appleProductNameForProductID:(unsigned char)arg1;
- (BOOL)isAppleSWAP;
- (BOOL)isPersonalHotspot;
- (BOOL)isPasspoint;
- (BOOL)isIBSS;
- (long long)noise;
- (long long)rssi;
- (id)bssid;
- (id)__correctEthernetAddressFormat:(id)arg1;
- (id)ssid;
- (id)ssidString;
- (int)fastestSupportedPHYMode;
- (BOOL)supportsPHYMode:(int)arg1;
- (BOOL)supportsSecurity:(long long)arg1;
- (long long)strongestSupportedSecurity;
- (BOOL)__supportsWPA2Enterprise;
- (BOOL)__supportsWPAEnterprise;
- (BOOL)__supportsWPA2Personal;
- (BOOL)__supportsWPAPersonal;
- (BOOL)__supportsWEP;
- (void)dealloc;
- (id)init;
- (id)initWithScanRecord:(id)arg1;

@end


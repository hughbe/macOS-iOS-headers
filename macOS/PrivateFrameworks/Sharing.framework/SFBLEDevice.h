//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSDictionary, NSString, NSUUID;

@interface SFBLEDevice : NSObject <NSSecureCoding>
{
    char _rssiHistory[3];
    unsigned char _rssiIndex;
    BOOL _paired;
    NSData *_advertisementData;
    NSDictionary *_advertisementFields;
    long long _distance;
    NSUUID *_identifier;
    NSString *_name;
    long long _rssi;
    long long _smoothedRSSI;
    double _lastSeen;
    double _pairCheckTime;
}

+ (BOOL)supportsSecureCoding;
+ (void)setRSSIFilterType:(unsigned int)arg1;
@property(nonatomic) BOOL paired; // @synthesize paired=_paired;
@property(nonatomic) double pairCheckTime; // @synthesize pairCheckTime=_pairCheckTime;
@property(nonatomic) double lastSeen; // @synthesize lastSeen=_lastSeen;
@property(readonly, nonatomic) long long smoothedRSSI; // @synthesize smoothedRSSI=_smoothedRSSI;
@property(readonly, nonatomic) long long rssi; // @synthesize rssi=_rssi;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long distance; // @synthesize distance=_distance;
@property(copy, nonatomic) NSDictionary *advertisementFields; // @synthesize advertisementFields=_advertisementFields;
@property(copy, nonatomic) NSData *advertisementData; // @synthesize advertisementData=_advertisementData;
- (void).cxx_destruct;
- (BOOL)_rssiFilterRaw:(long long)arg1;
- (BOOL)_rssiFilterMedian:(long long)arg1;
- (BOOL)_rssiFilterFloor:(long long)arg1;
- (BOOL)updateRSSI:(long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


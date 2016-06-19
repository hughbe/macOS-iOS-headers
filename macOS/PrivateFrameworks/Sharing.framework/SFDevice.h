//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSString, NSUUID, SFBLEDevice;

@interface SFDevice : NSObject <NSSecureCoding>
{
    BOOL _autoUnlockEnabled;
    BOOL _autoUnlockWatch;
    BOOL _hasProblem;
    BOOL _needsKeyboard;
    BOOL _needsSetup;
    BOOL _supportsAirPlayReceiver;
    BOOL _paired;
    NSArray *_batteryInfo;
    SFBLEDevice *_bleDevice;
    long long _deviceType;
    long long _distance;
    NSUUID *_identifier;
    NSString *_model;
    NSString *_name;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL paired; // @synthesize paired=_paired;
@property(nonatomic) BOOL supportsAirPlayReceiver; // @synthesize supportsAirPlayReceiver=_supportsAirPlayReceiver;
@property(nonatomic) BOOL needsSetup; // @synthesize needsSetup=_needsSetup;
@property(readonly, nonatomic) BOOL needsKeyboard; // @synthesize needsKeyboard=_needsKeyboard;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) BOOL hasProblem; // @synthesize hasProblem=_hasProblem;
@property(nonatomic) long long distance; // @synthesize distance=_distance;
@property(readonly, nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
@property(retain, nonatomic) SFBLEDevice *bleDevice; // @synthesize bleDevice=_bleDevice;
@property(readonly, copy, nonatomic) NSArray *batteryInfo; // @synthesize batteryInfo=_batteryInfo;
@property(nonatomic) BOOL autoUnlockWatch; // @synthesize autoUnlockWatch=_autoUnlockWatch;
@property(nonatomic) BOOL autoUnlockEnabled; // @synthesize autoUnlockEnabled=_autoUnlockEnabled;
- (void).cxx_destruct;
- (void)updateWithBLEDevice:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end


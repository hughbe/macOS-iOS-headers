//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDateComponents, NSString;

@interface _TtC8FMClient19ClientConfiguration : NSObject
{
    MISSING_TYPE *nearbyScanDuration;
    MISSING_TYPE *nearbyScanEnabled;
    MISSING_TYPE *nearbyScanWhileAuthenticated;
    MISSING_TYPE *deviceNameSyncInterval;
    MISSING_TYPE *deviceNameSyncEnabled;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithNearbyScanDuration:(double)arg1 nearbyScanEnabled:(BOOL)arg2 nearbyScanWhileAuthenticated:(BOOL)arg3 deviceNameSyncInterval:(id)arg4 deviceNameSyncEnabled:(BOOL)arg5;
@property(nonatomic, readonly) BOOL deviceNameSyncEnabled; // @synthesize deviceNameSyncEnabled;
@property(nonatomic, readonly) NSDateComponents *deviceNameSyncInterval;
@property(nonatomic, readonly) BOOL nearbyScanWhileAuthenticated; // @synthesize nearbyScanWhileAuthenticated;
@property(nonatomic, readonly) BOOL nearbyScanEnabled; // @synthesize nearbyScanEnabled;
@property(nonatomic, readonly) double nearbyScanDuration; // @synthesize nearbyScanDuration;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@interface DMFSetBluetoothEnabledRequest : DMFTaskRequest
{
    BOOL _enabled;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


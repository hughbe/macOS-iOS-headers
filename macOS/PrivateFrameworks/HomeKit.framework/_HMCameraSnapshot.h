//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/_HMCameraSource.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface _HMCameraSnapshot : _HMCameraSource
{
    NSDate *_captureDate;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDate *captureDate; // @synthesize captureDate=_captureDate;
- (void)_releaseSlotIdentifier;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 slotIdentifier:(id)arg2 context:(id)arg3 profileUniqueIdentifier:(id)arg4 aspectRatio:(id)arg5 captureDate:(id)arg6;

@end


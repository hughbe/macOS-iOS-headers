//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMCameraSource.h>

@class NSDate, _HMCameraSnapshot;

@interface HMCameraSnapshot : HMCameraSource
{
    _HMCameraSnapshot *_snapshot;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _HMCameraSnapshot *snapshot; // @synthesize snapshot=_snapshot;
@property(readonly, copy, nonatomic) NSDate *captureDate;
- (id)initWithSnapshot:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMMediaObjectDelegate-Protocol.h>

@class HMAccessorySettings, HMMediaProfile, HMMediaSession;

@protocol HMMediaProfileDelegate <HMMediaObjectDelegate>

@optional
- (void)mediaProfile:(HMMediaProfile *)arg1 didUpdateSettings:(HMAccessorySettings *)arg2;
- (void)mediaProfile:(HMMediaProfile *)arg1 didUpdateMediaSession:(HMMediaSession *)arg2;
@end


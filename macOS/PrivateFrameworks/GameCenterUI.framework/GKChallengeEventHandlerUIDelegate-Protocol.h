//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKChallenge, GKPlayer;

@protocol GKChallengeEventHandlerUIDelegate <NSObject>

@optional
- (void)showLocallyCompletedBannerForIssuingPlayer:(GKPlayer *)arg1 challenge:(GKChallenge *)arg2 handler:(void (^)(void))arg3;
- (void)showRemotelyCompletedBannerForReceivingPlayer:(GKPlayer *)arg1 challenge:(GKChallenge *)arg2 handler:(void (^)(void))arg3;
- (void)showReceivedBannerForIssuingPlayer:(GKPlayer *)arg1 challenge:(GKChallenge *)arg2 handler:(void (^)(void))arg3;
@end


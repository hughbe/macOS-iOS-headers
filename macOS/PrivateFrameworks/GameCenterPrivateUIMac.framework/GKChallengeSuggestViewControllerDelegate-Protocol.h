//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKChallenge, GKChallengeSuggestViewController;

@protocol GKChallengeSuggestViewControllerDelegate <NSObject>
- (void)challengeSuggestViewController:(GKChallengeSuggestViewController *)arg1 didSelectChallenge:(GKChallenge *)arg2;
- (void)challengeSuggestViewControllerWasCancelled:(GKChallengeSuggestViewController *)arg1;
@end


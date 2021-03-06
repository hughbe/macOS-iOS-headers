//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKRectShadowCell.h>

@class GKAchievement, GKAchievementIconView, GKResizingLabel, NSTextField, NSView;

@interface GKDashboardAchievementCell : GKRectShadowCell
{
    GKAchievement *_achievement;
    GKAchievement *_localAchievement;
    GKAchievementIconView *_iconView;
    GKResizingLabel *_titleLabel;
    GKResizingLabel *_descriptionLabel;
    NSTextField *_pointsLabel;
    NSTextField *_pointsTextLabel;
}

@property(nonatomic) NSTextField *pointsTextLabel; // @synthesize pointsTextLabel=_pointsTextLabel;
@property(nonatomic) NSTextField *pointsLabel; // @synthesize pointsLabel=_pointsLabel;
@property(nonatomic) GKResizingLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) GKResizingLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) GKAchievementIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) GKAchievement *localAchievement; // @synthesize localAchievement=_localAchievement;
@property(retain, nonatomic) GKAchievement *achievement; // @synthesize achievement=_achievement;
- (void)setupForAchievement:(id)arg1 localAchievement:(id)arg2;
@property(readonly, nonatomic) NSView *popoverSourceView;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/GKCollectionViewController.h>

#import "GKAchievementDetailDelegate.h"
#import "GKChallengeDetailDelegate.h"
#import "GKChallengeSuggestViewControllerDelegate.h"
#import "GKComposeControllerDelegate.h"
#import "GKGamePlayerDetailViewControllerDelegate.h"
#import "GKScoreDetailDelegate.h"
#import "NSPopoverDelegate.h"

@class GKAchievementsDataSource, GKChallengesDataSource, GKCollectionViewAggregateDataSource, GKCollectionViewDataSource, GKComposeController, GKFriendPlayersDataSource, GKGameRecentPlayersDataSource, GKGameRecommendationInternal, GKGameRecord, GKLeaderboardHeaderView, GKLeaderboardScoresDataSource, GKSegmentedSectionDataSource, GKSupplementaryViewMetrics, NSString, NSUICollectionReusableView, NSViewController;

@interface GKGameDetailViewController : GKCollectionViewController <NSPopoverDelegate, GKComposeControllerDelegate, GKScoreDetailDelegate, GKAchievementDetailDelegate, GKChallengeDetailDelegate, GKGamePlayerDetailViewControllerDelegate, GKChallengeSuggestViewControllerDelegate>
{
    BOOL _purchasableGame;
    BOOL _challengesShouldShowPlay;
    BOOL _shouldHideHeader;
    BOOL _shouldHideSegment;
    BOOL _shouldUpdateShowcaseRowInUpdateMetrics;
    BOOL _firstAppearance;
    id <GKGameDetailViewControllerServiceDelegate> _serviceDelegateWeak;
    GKGameRecord *_game;
    GKGameRecommendationInternal *_recommendation;
    long long _viewState;
    NSString *_leaderboardIdentifier;
    long long _leaderboardTimeScope;
    GKSegmentedSectionDataSource *_segmentedDataSource;
    GKAchievementsDataSource *_achievementsDataSource;
    GKChallengesDataSource *_challengesDataSource;
    GKCollectionViewDataSource *_leaderboardDataSource;
    NSUICollectionReusableView *_headerView;
    GKSupplementaryViewMetrics *_segmentedControlMetrics;
    GKLeaderboardScoresDataSource *_globalLeaderboardDataSource;
    GKLeaderboardScoresDataSource *_friendsLeaderboardDataSource;
    GKLeaderboardHeaderView *_leaderboardHeader;
    GKCollectionViewAggregateDataSource *_playersDataSource;
    GKFriendPlayersDataSource *_friendPlayersDataSource;
    GKGameRecentPlayersDataSource *_recentPlayersDataSource;
    long long _numberOfLeaderboardColumnsPortrait;
    long long _numberOfLeaderboardColumnsLandscape;
    NSViewController *_detailViewController;
    GKComposeController *_composeController;
}

@property(retain) GKComposeController *composeController; // @synthesize composeController=_composeController;
@property(retain) NSViewController *detailViewController; // @synthesize detailViewController=_detailViewController;
@property BOOL firstAppearance; // @synthesize firstAppearance=_firstAppearance;
@property long long numberOfLeaderboardColumnsLandscape; // @synthesize numberOfLeaderboardColumnsLandscape=_numberOfLeaderboardColumnsLandscape;
@property long long numberOfLeaderboardColumnsPortrait; // @synthesize numberOfLeaderboardColumnsPortrait=_numberOfLeaderboardColumnsPortrait;
@property(retain) GKGameRecentPlayersDataSource *recentPlayersDataSource; // @synthesize recentPlayersDataSource=_recentPlayersDataSource;
@property(retain) GKFriendPlayersDataSource *friendPlayersDataSource; // @synthesize friendPlayersDataSource=_friendPlayersDataSource;
@property(retain) GKCollectionViewAggregateDataSource *playersDataSource; // @synthesize playersDataSource=_playersDataSource;
@property(retain) GKLeaderboardHeaderView *leaderboardHeader; // @synthesize leaderboardHeader=_leaderboardHeader;
@property(retain) GKLeaderboardScoresDataSource *friendsLeaderboardDataSource; // @synthesize friendsLeaderboardDataSource=_friendsLeaderboardDataSource;
@property(retain, nonatomic) GKLeaderboardScoresDataSource *globalLeaderboardDataSource; // @synthesize globalLeaderboardDataSource=_globalLeaderboardDataSource;
@property(retain) GKSupplementaryViewMetrics *segmentedControlMetrics; // @synthesize segmentedControlMetrics=_segmentedControlMetrics;
@property BOOL shouldUpdateShowcaseRowInUpdateMetrics; // @synthesize shouldUpdateShowcaseRowInUpdateMetrics=_shouldUpdateShowcaseRowInUpdateMetrics;
@property(retain) NSUICollectionReusableView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) BOOL shouldHideSegment; // @synthesize shouldHideSegment=_shouldHideSegment;
@property(nonatomic) BOOL shouldHideHeader; // @synthesize shouldHideHeader=_shouldHideHeader;
@property(retain, nonatomic) GKCollectionViewDataSource *leaderboardDataSource; // @synthesize leaderboardDataSource=_leaderboardDataSource;
@property(retain, nonatomic) GKChallengesDataSource *challengesDataSource; // @synthesize challengesDataSource=_challengesDataSource;
@property(retain, nonatomic) GKAchievementsDataSource *achievementsDataSource; // @synthesize achievementsDataSource=_achievementsDataSource;
@property(retain, nonatomic) GKSegmentedSectionDataSource *segmentedDataSource; // @synthesize segmentedDataSource=_segmentedDataSource;
@property(nonatomic) BOOL challengesShouldShowPlay; // @synthesize challengesShouldShowPlay=_challengesShouldShowPlay;
@property(nonatomic) long long leaderboardTimeScope; // @synthesize leaderboardTimeScope=_leaderboardTimeScope;
@property(retain, nonatomic) NSString *leaderboardIdentifier; // @synthesize leaderboardIdentifier=_leaderboardIdentifier;
@property(nonatomic) long long viewState; // @synthesize viewState=_viewState;
@property(retain, nonatomic) GKGameRecommendationInternal *recommendation; // @synthesize recommendation=_recommendation;
@property(getter=isPurchasableGame) BOOL purchasableGame; // @synthesize purchasableGame=_purchasableGame;
@property(retain, nonatomic) GKGameRecord *game; // @synthesize game=_game;
- (id)_gkPresentationIdentifier;
- (void)donePressed;
- (void)dismissDetailViewControllerAndRelease:(BOOL)arg1;
- (void)dismissDetailViewController;
- (void)showDetailViewController:(id)arg1 inPopoverFromView:(id)arg2 rect:(struct CGRect)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)composeControllerWasCancelled:(id)arg1;
- (void)composeController:(id)arg1 didFinishWithMessage:(id)arg2;
- (void)scoreDetailViewController:(id)arg1 sendFriendRequestToPlayer:(id)arg2;
- (void)scoreDetailViewController:(id)arg1 reportProblemWithPlayer:(id)arg2;
- (void)showComposeControllerForChallenge:(id)arg1 players:(id)arg2;
- (void)challengeDetailViewController:(id)arg1 playChallenge:(id)arg2;
- (void)challengeDetailViewController:(id)arg1 declinedChallenge:(id)arg2;
- (void)showChallenge:(id)arg1 fromIndexPath:(id)arg2;
- (void)challengeSuggestViewController:(id)arg1 didSelectChallenge:(id)arg2;
- (void)challengeSuggestViewControllerWasCancelled:(id)arg1;
- (void)gamePlayerDetailViewController:(id)arg1 showChallengeSuggestionsForPlayer:(id)arg2;
- (void)gamePlayerDetailViewController:(id)arg1 showInfoForPlayer:(id)arg2;
- (void)showPlayer:(id)arg1 fromIndexPath:(id)arg2;
- (void)scoreDetailViewController:(id)arg1 sendChallenge:(id)arg2 toPlayer:(id)arg3;
- (void)showScore:(id)arg1 fromCell:(id)arg2 leaderboard:(id)arg3 animated:(BOOL)arg4;
- (void)showScore:(id)arg1 fromIndexPath:(id)arg2;
- (void)didTouchShowcaseGlobal:(id)arg1;
- (void)didTouchShowcaseFriends:(id)arg1;
- (void)achievementDetailViewController:(id)arg1 sendChallenge:(id)arg2 toPlayer:(id)arg3;
- (void)showAchievementDetails:(id)arg1 fromIndexPath:(id)arg2 animated:(BOOL)arg3;
- (void)sendChallenge:(id)arg1 toPlayer:(id)arg2;
- (void)playGame;
- (void)uninstallGame;
- (void)buyGame;
- (void)didExitRefreshingState;
- (void)timeScopeChanged:(id)arg1;
- (void)leaderboardPressed;
- (void)selectDataSource:(id)arg1;
- (void)selectSegmentAtIndex:(long long)arg1;
- (void)setupSegmentedPlaceholderView;
- (void)segmentedSectionDataSource:(id)arg1 inSection:(unsigned long long)arg2 didSelectDataSourceWithIndex:(long long)arg3;
- (void)applyViewState;
- (void)updateMetrics;
- (double)headerHeight;
- (void)configureViewFactories;
- (void)configureLeaderboardHeader:(id)arg1;
- (void)configureAchievementsSectionHeader:(id)arg1;
- (void)configureLeaderboardSetsSectionHeader:(id)arg1;
- (void)configureLeaderboardCategoriesSectionHeader:(id)arg1;
- (void)configureRecentPlayersSectionHeader:(id)arg1;
- (void)configureFriendPlayersSectionHeader:(id)arg1;
- (void)configureChallengesSectionHeader:(id)arg1;
- (void)configureGameDetailHeaderView:(id)arg1;
- (void)headerViewDidLoad;
- (void)configureDataSource;
- (Class)cellClassForLeaderboardDataSource;
- (void)didEnterNoContentState;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)configureLeaderboardDataSource;
- (void)setLeaderboard:(id)arg1;
- (void)didTouchShowMoreGlobal:(id)arg1;
- (void)didTouchShowMoreFriends:(id)arg1;
- (void)addShowcaseCellToMetrics:(id)arg1;
- (void)updateShowcaseRowVisibility;
- (id)segmentedDataSourceForGame:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)loadView;
@property(nonatomic) id <GKGameDetailViewControllerServiceDelegate> serviceDelegate; // @synthesize serviceDelegate=_serviceDelegateWeak;
- (void)dealloc;
- (id)initWithGame:(id)arg1 viewState:(long long)arg2 purchasableGame:(BOOL)arg3;
- (id)initWithGame:(id)arg1 purchasableGame:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


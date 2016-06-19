//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/GKBasicCollectionViewController.h>

@class GKGameRecord, GKLeaderboardSet, GKPlayer;

@interface GKLeaderboardSetListViewController : GKBasicCollectionViewController
{
    GKLeaderboardSet *_leaderboardSet;
    GKGameRecord *_game;
    GKPlayer *_player;
}

@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) GKGameRecord *game; // @synthesize game=_game;
@property(retain, nonatomic) GKLeaderboardSet *leaderboardSet; // @synthesize leaderboardSet=_leaderboardSet;
- (id)itemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)configureDataSource;
- (void)dealloc;
- (id)initWithGame:(id)arg1 player:(id)arg2;

@end


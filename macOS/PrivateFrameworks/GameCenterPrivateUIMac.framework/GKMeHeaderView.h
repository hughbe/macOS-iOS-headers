//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/NSUICollectionReusableView.h>

@class LocalPlayerHeaderView, LocalPlayerSignInView, NSTabView;

@interface GKMeHeaderView : NSUICollectionReusableView
{
    NSTabView *_tabView;
    LocalPlayerHeaderView *_headerView;
    LocalPlayerSignInView *_signinView;
}

@property(nonatomic) LocalPlayerSignInView *signinView; // @synthesize signinView=_signinView;
@property(nonatomic) LocalPlayerHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) NSTabView *tabView; // @synthesize tabView=_tabView;

@end


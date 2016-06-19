//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSAnimationDelegate.h"

@class Animation, Banner, NSMapTable, NSStackView, NSString;

__attribute__((visibility("hidden")))
@interface BannerContainerView : NSView <NSAnimationDelegate>
{
    NSStackView *_bannerStackView;
    NSMapTable *_clipViewsToConstraints;
    Animation *_animation;
    BOOL _animatingIntoPlace;
    Banner *_bannerBeingAnimated;
    struct SearchableWebContentViewController *_contentViewController;
}

@property(readonly, nonatomic) struct SearchableWebContentViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void).cxx_destruct;
- (void)_moveBannerIntoPlace:(id)arg1 bannerIsAppearing:(BOOL)arg2 withAnimation:(BOOL)arg3;
- (void)uninstallBanner:(id)arg1 withAnimation:(BOOL)arg2;
- (void)installBanner:(id)arg1 withAnimation:(BOOL)arg2;
- (void)animationDidStop:(id)arg1;
- (void)animationDidEnd:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)invalidate;
- (id)initWithFrame:(struct CGRect)arg1 contentViewController:(struct SearchableWebContentViewController *)arg2;
- (void)removeFromSuperview;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


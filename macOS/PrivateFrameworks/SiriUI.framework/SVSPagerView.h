//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSScrollViewDelegate.h"

@class NSString, SVSPagingScrollView;

__attribute__((visibility("hidden")))
@interface SVSPagerView : NSView <NSScrollViewDelegate>
{
    SVSPagingScrollView *_scrollView;
    BOOL _scrollViewIsDragging;
    BOOL _scrollViewIsScrollingBetweenPages;
    NSView *_activePageView;
    unsigned long long _transitionState;
    id <SVSPagerViewDataSource> _dataSource;
    id <SVSPagerViewDelegate> _delegate;
}

@property(nonatomic, getter=_scrollViewIsScrollingBetweenPages, setter=_setScrollViewIsScrollingBetweenPages:) BOOL scrollViewIsScrollingBetweenPages; // @synthesize scrollViewIsScrollingBetweenPages=_scrollViewIsScrollingBetweenPages;
@property(nonatomic, getter=_scrollViewIsDragging, setter=_setScrollViewIsDragging:) BOOL scrollViewIsDragging; // @synthesize scrollViewIsDragging=_scrollViewIsDragging;
@property(nonatomic) __weak id <SVSPagerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SVSPagerViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) unsigned long long transitionState; // @synthesize transitionState=_transitionState;
@property(retain, nonatomic) NSView *activePageView; // @synthesize activePageView=_activePageView;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (void)_scrollingDidEnd;
- (id)_activePageViewBasedOnScrollViewPosition;
- (BOOL)_multiplePageViewsAreVisible;
- (BOOL)_containsPageView:(id)arg1;
- (id)_pageViews;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_updateTransitionState;
@property(nonatomic, getter=isPagingEnabled) BOOL pagingEnabled;
- (void)removePageView:(id)arg1;
- (void)addPageView:(id)arg1;
- (void)insertPageView:(id)arg1 atIndex:(long long)arg2;
- (void)reloadData;
- (void)layout;
- (void)viewDidMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


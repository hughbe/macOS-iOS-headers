//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Shortcut/SCTGRL.h>

@interface SCTCustomSearchResultGRL : SCTGRL
{
    id <NSUserInterfaceItemSearching><NSUserInterfaceItemSearching_Private> mSearchHandler;
    id mUserInterfaceItem;
    BOOL mHasHideItem;
    BOOL mHasIconForItem;
    BOOL mHasLocalizedCategoryForItem;
    BOOL mHasPerformActionForItem;
    BOOL mHasShowItem;
    BOOL mHasShowAllHelpTopicsForSearchString;
    BOOL isShowAllHelpTopicsItem;
}

@property BOOL isShowAllHelpTopicsItem; // @synthesize isShowAllHelpTopicsItem;
@property(readonly) id <NSUserInterfaceItemSearching> searchHandler;
- (struct CGRect)screenRectForResource;
- (id)localizedCategory;
- (id)fullTitle;
- (id)titlePathToString:(id)arg1;
- (id)representativeIcon;
- (void)show;
- (void)hide:(id)arg1;
- (void)perform;
- (void)dealloc;
- (id)initWithItem:(id)arg1 searchHandler:(id)arg2;

@end


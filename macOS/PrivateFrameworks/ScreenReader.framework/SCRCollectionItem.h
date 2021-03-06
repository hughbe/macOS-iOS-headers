//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReader/SCRGroup.h>

__attribute__((visibility("hidden")))
@interface SCRCollectionItem : SCRGroup
{
}

- (BOOL)moveOutWithEvent:(id)arg1 request:(id)arg2;
- (void)autoDrillAddBorderCrossIfNecessary:(long long)arg1 request:(id)arg2 oldFocusedElement:(id)arg3;
- (BOOL)allowFocusThroughSingleChild;
- (BOOL)shouldAutoFocusOnChildren;
- (BOOL)toggleMultipleSelectionWithRequest:(id)arg1;
- (BOOL)toggleSingleSelectionWithRequest:(id)arg1;
- (BOOL)setSingleSelectionWithRequest:(id)arg1;
- (BOOL)moveToLastVisibleElementWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)moveToFirstVisibleElementWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)moveToLastElementWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)moveToFirstElementWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)moveDownWithEvent:(id)arg1 request:(id)arg2 allowFullWrapping:(BOOL)arg3;
- (BOOL)moveUpWithEvent:(id)arg1 request:(id)arg2 allowFullWrapping:(BOOL)arg3;
- (BOOL)moveLeftWithEvent:(id)arg1 request:(id)arg2 allowFullWrapping:(BOOL)arg3;
- (BOOL)moveRightWithEvent:(id)arg1 request:(id)arg2 allowFullWrapping:(BOOL)arg3;
- (id)_collectionItemSection;
- (BOOL)_collectionItemShouldDeferMovementToSection;
- (id)roleDescription;
- (id)onlyChild;
- (BOOL)isCollectionItem;

@end


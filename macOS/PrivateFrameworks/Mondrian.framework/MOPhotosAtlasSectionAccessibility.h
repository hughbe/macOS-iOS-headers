//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UXKit/UXCollectionViewLayoutSectionAccessibility.h>

@class MOPhotosAtlasLayoutAccessibility, NSArray;

@interface MOPhotosAtlasSectionAccessibility : UXCollectionViewLayoutSectionAccessibility
{
    NSArray *_accessibilityChildren;
}

- (void).cxx_destruct;
- (void)setAccessibilityChildren:(id)arg1;
- (BOOL)accessibilityPerformScrollToVisible;
- (id)_supplementaryViewForIndex:(unsigned long long)arg1;
- (id)siblingBelowItem:(id)arg1;
- (id)siblingAboveItem:(id)arg1;
- (id)siblingAfterItem:(id)arg1;
- (id)siblingBeforeItem:(id)arg1;
- (void)accessibilityDidEndScrolling;
- (id)accessibilityTitleUIElement;
- (long long)accessibilityOrientation;
- (id)accessibilityVisibleChildren;
- (id)accessibilityChildren;
- (id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (unsigned long long)accessibilityArrayAttributeCount:(id)arg1;
- (unsigned long long)accessibilityIndexOfChild:(id)arg1;
- (long long)accessibilityRowCount;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)initWithLayoutAccessibility:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) __weak MOPhotosAtlasLayoutAccessibility *layoutAccessibility; // @dynamic layoutAccessibility;

@end


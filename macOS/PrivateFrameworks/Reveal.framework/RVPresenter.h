//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LUPresenter, RVPopoverPresenter;
@protocol NSObject, RVPresenterViewControllerProvider;

@interface RVPresenter : NSObject
{
    id <NSObject> _observer;
    LUPresenter *_lookupPresenter;
    RVPopoverPresenter *_popoverPresenter;
    id <RVPresenterViewControllerProvider> _viewControllerProvider;
}

+ (id)sharedPresenter;
- (void).cxx_destruct;
@property(nonatomic) __weak id <RVPresenterViewControllerProvider> viewControllerProvider; // @synthesize viewControllerProvider=_viewControllerProvider;
- (void)contentMoved;
- (void)contentChanged;
- (BOOL)tryCloseAllPopoverForDDContext:(id)arg1;
- (BOOL)revealItem:(id)arg1 documentContext:(id)arg2 presentingContext:(id)arg3 options:(id)arg4;
- (id)menuItemsForItem:(id)arg1 documentContext:(id)arg2 presentingContext:(id)arg3 options:(id)arg4;
- (id)lookupMenuItemTitleForText:(id)arg1;
- (id)lookupTextForText:(id)arg1;
- (id)taggedItems:(id)arg1;
- (id)animationControllerForItem:(id)arg1 documentContext:(id)arg2 presentingContext:(id)arg3 options:(id)arg4;
- (BOOL)ddActionAvailableForUrl:(id)arg1 ddResult:(struct __DDResult *)arg2 ddContext:(id)arg3;
- (id)revealOptionsFromClientOptions:(id)arg1 withItem:(id)arg2 triggerType:(unsigned long long)arg3;
- (id)ddActionContextFromDocumentContext:(id)arg1 presentingContext:(id)arg2 item:(id)arg3 ddResult:(struct __DDResult *)arg4;

@end


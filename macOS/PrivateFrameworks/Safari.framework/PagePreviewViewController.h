//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSPopoverDelegate.h"

@class NSClickGestureRecognizer, NSProgressIndicator, NSString, NSTextField, NSURL, PagePreviewAnimationController, SearchableWKView, WKView;

__attribute__((visibility("hidden")))
@interface PagePreviewViewController : NSViewController <NSPopoverDelegate>
{
    struct CGSize _mainViewSize;
    NSTextField *_titleTextField;
    NSClickGestureRecognizer *_clickRecognizer;
    NSProgressIndicator *_spinner;
    double _popoverToViewScale;
    BOOL _isPreviewingImage;
    BOOL _loading;
    NSString *_previewTitle;
    NSURL *_URL;
    PagePreviewAnimationController *_animationController;
    WKView *_previewView;
    SearchableWKView *_parentView;
}

+ (struct CGSize)previewPadding;
@property(nonatomic) __weak SearchableWKView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) WKView *previewView; // @synthesize previewView=_previewView;
@property(nonatomic) __weak PagePreviewAnimationController *animationController; // @synthesize animationController=_animationController;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(copy, nonatomic) NSString *previewTitle; // @synthesize previewTitle=_previewTitle;
- (void).cxx_destruct;
- (void)popoverDidClose:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)_addToReadingListButtonClicked:(id)arg1;
- (void)_cleanUpAfterClickInPreviewView;
- (void)_handleClickInPreviewView;
- (void)_clickRecognized:(id)arg1;
- (id)_buildTitleViewWithContainerFrame:(struct CGRect)arg1;
- (id)_previewTitle;
- (void)close;
- (void)replacePreviewWithImage:(id)arg1 atSize:(struct CGSize)arg2;
- (void)loadView;
- (void)dealloc;
- (id)initWithMainViewSize:(struct CGSize)arg1 popoverToViewScale:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


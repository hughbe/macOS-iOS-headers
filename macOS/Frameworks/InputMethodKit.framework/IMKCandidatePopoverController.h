//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <InputMethodKit/WebFrameLoadDelegate-Protocol.h>

@class IMKCandidateController, IMKCandidateUnitView, NSPopover, NSString, NSTimer, NSURL, WebView;

@interface IMKCandidatePopoverController : NSObject <WebFrameLoadDelegate>
{
    IMKCandidateController *_controller;
    NSPopover *_popover;
    WebView *_webView;
    IMKCandidateUnitView *_descriptionTargetView;
    struct CGSize _minimumSize;
    NSURL *_stylesheetURL;
    NSTimer *_popoverTimer;
}

@property(retain, nonatomic) NSTimer *popoverTimer; // @synthesize popoverTimer=_popoverTimer;
@property(retain, nonatomic) NSURL *stylesheetURL; // @synthesize stylesheetURL=_stylesheetURL;
@property(nonatomic) struct CGSize minimumSize; // @synthesize minimumSize=_minimumSize;
@property(retain, nonatomic) IMKCandidateUnitView *descriptionTargetView; // @synthesize descriptionTargetView=_descriptionTargetView;
@property(nonatomic) IMKCandidateController *controller; // @synthesize controller=_controller;
- (void)hide;
- (void)_setupWebview;
- (void)_setupPopover;
- (void)_hidePopover;
- (void)_showPopoverWithAccessibilityPid;
- (void)_showPopover;
- (void)stopPopoverShowTimer;
- (void)startPopoverShowTimerWithDuration:(double)arg1;
- (void)dealloc;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


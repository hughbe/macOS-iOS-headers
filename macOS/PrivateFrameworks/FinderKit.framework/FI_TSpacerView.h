//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TView.h>

@class FI_TLayoutBinder, NSView;

__attribute__((visibility("hidden")))
@interface FI_TSpacerView : FI_TView
{
    FI_TLayoutBinder *_layoutBinder;
    NSView *_masterView;
    struct CGRect _masterViewFrame;
    struct CGSize _spacerSize;
    _Bool _listenForHeightChanges;
    struct TNotificationCenterObserver _masterViewFrameChangedObserver;
}

@property(nonatomic) _Bool listenForHeightChanges; // @synthesize listenForHeightChanges=_listenForHeightChanges;
@property(retain, nonatomic) NSView *masterView; // @synthesize masterView=_masterView;
@property(readonly, retain, nonatomic) FI_TLayoutBinder *layoutBinder; // @synthesize layoutBinder=_layoutBinder;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)masterViewFrameChanged;
- (void)aboutToTearDown;
- (void)initCommon;

@end


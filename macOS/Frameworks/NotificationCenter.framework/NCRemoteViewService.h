//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ViewBridge/NSServiceViewController.h>

@class NCRemoteViewServiceWindow, NSExtensionContext;

__attribute__((visibility("hidden")))
@interface NCRemoteViewService : NSServiceViewController
{
    BOOL _registeredObservers;
    NCRemoteViewServiceWindow *_ncServiceWindow;
    NSExtensionContext *_extensionContext;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSExtensionContext *extensionContext; // @synthesize extensionContext=_extensionContext;
@property(readonly, nonatomic) NCRemoteViewServiceWindow *serviceWindow; // @synthesize serviceWindow=_ncServiceWindow;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (unsigned long long)awakeFromRemoteView;
- (BOOL)remoteViewSizeChanged:(struct CGSize)arg1 transaction:(id)arg2;
- (BOOL)allowsImplicitResizeRequests;
- (void)invalidate;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end


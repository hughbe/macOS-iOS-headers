//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class SVSErrorMessageView;

__attribute__((visibility("hidden")))
@interface SVSErrorMessageViewController : NSViewController
{
}

- (double)contentHeight;
- (void)showEmptyView;
- (void)showMicrophoneUnavailableWithExplanation:(id)arg1;
- (void)showNetworkUnavailable;
- (void)loadView;

// Remaining properties
@property(retain) SVSErrorMessageView *view; // @dynamic view;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ViewBridge/NSRemoteViewController.h>

@class NSPopover;
@protocol SFSafariExtensionRemoteViewControllerDelegate;

@interface SFSafariExtensionRemoteViewController : NSRemoteViewController
{
    id <SFSafariExtensionRemoteViewControllerDelegate> _delegate;
    NSPopover *_popover;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSPopover *popover; // @synthesize popover=_popover;
@property(nonatomic) __weak id <SFSafariExtensionRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (id)serviceViewControllerInterface;

@end


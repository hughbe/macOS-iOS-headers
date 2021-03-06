//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ViewBridge/NSRemoteViewController.h>

#import <Safari/HomepageHostViewController-Protocol.h>

@protocol HomepageHostViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface HomepageHostViewController : NSRemoteViewController <HomepageHostViewController>
{
    id <HomepageHostViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <HomepageHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scheduleBlock:(CDUnknownBlockType)arg1;
- (void)tryApplyingHomepageURL:(id)arg1 sandboxExtensionToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;

@end


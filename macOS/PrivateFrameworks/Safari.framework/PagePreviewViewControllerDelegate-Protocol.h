//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class BrowserViewController, NSURL, PagePreviewViewController;

@protocol PagePreviewViewControllerDelegate <NSObject>
- (void)dismissPagePreviewViewController:(PagePreviewViewController *)arg1;
- (void)pagePreviewViewController:(PagePreviewViewController *)arg1 addURLToReadingList:(NSURL *)arg2;
- (void)pagePreviewViewController:(PagePreviewViewController *)arg1 handleClickInPreviewBrowserViewController:(BrowserViewController *)arg2;
- (void)pagePreviewViewController:(PagePreviewViewController *)arg1 didFinishPreviewWithBrowserViewController:(BrowserViewController *)arg2;
- (BrowserViewController *)makePreviewBrowserViewControllerForPagePreviewViewController:(PagePreviewViewController *)arg1;
@end


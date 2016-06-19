//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/Banner.h>

@class NSButton, NSTextField;

__attribute__((visibility("hidden")))
@interface WebClipBanner : Banner
{
    NSTextField *prompt;
    NSButton *cancelButton;
    NSButton *commitButton;
}

+ (BOOL)bannerHasBottomBorder;
+ (int)bannerSortOrder;
+ (id)bannerBackgroundImage;
- (void).cxx_destruct;
- (void)firstResponderMightHaveChanged;
- (void)createWebClipWithSize:(struct CGSize)arg1 rect:(struct CGRect)arg2 signature:(const struct Dictionary *)arg3;
- (void)confirmCropMode:(id)arg1;
- (void)cancelCropMode:(id)arg1;
- (id)bannerControlTextAttributes;
- (void)willUninstallBannerView;
- (void)didInstallBannerView;
- (void)willInstallBannerView;
- (id)bannerNibName;
- (void)_updateCommitButtonKeyEquivalent;
- (void)_setPromptString:(id)arg1;

@end


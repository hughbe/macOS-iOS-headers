//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SocialUI/SODebugMenu.h>

@interface SOGlobalDebugMenu : SODebugMenu
{
}

+ (id)sharedInstance;
+ (void)__setSingleton__im:(id)arg1;
+ (id)__singleton__im;
- (void)update;
- (void)installMenu;
@property(readonly) BOOL isInstalled;
- (id)init;

@end


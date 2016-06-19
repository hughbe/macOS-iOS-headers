//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CoreUI : NSObject
{
}

+ (void)_determineCompatibilityMode;
+ (long long)lookCongruencyForObject:(id)arg1;
+ (struct _themelook *)currentSystemThemeLook;
+ (void)changeToLook:(struct _themelook *)arg1;
+ (void)_invalidateVisibleWindows;
+ (BOOL)_isCurrentLook:(struct _themelook *)arg1;
+ (void)_setCurrentSystemThemeLook:(struct _themelook *)arg1;
+ (void)_updateMenuBarDrawingStyleForLook:(struct _themelook *)arg1;
+ (BOOL)_hasDarkMenuBarForLook:(struct _themelook *)arg1;
+ (void)_setThemeLookDelegate:(id)arg1;
+ (id)_themeLookDelegate;
+ (long long)maximumLookGradation;
+ (long long)currentLookGradation;

@end


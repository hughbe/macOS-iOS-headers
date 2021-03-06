//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSAppearanceCustomization-Protocol.h>
#import <AppKit/NSAppearanceCustomizationInternal-Protocol.h>

@class NSAppearance, NSString;
@protocol NSAppearanceCustomization;

__attribute__((visibility("hidden")))
@interface NSSystemAppearanceProxy : NSObject <NSAppearanceCustomizationInternal, NSAppearanceCustomization>
{
    NSAppearance *_appearance;
    NSObject<NSAppearanceCustomization> *_menuBarProxy;
}

+ (id)keyPathsForValuesAffectingEffectiveAppearance;
+ (id)systemProxy;
@property(readonly) NSObject<NSAppearanceCustomization> *menuBarProxy; // @synthesize menuBarProxy=_menuBarProxy;
@property(retain) NSAppearance *appearance; // @synthesize appearance=_appearance;
- (void)_menuBarAppearanceChanged:(id)arg1;
- (void)_increaseContrastChanged:(id)arg1;
- (void)_controlTintChanged:(id)arg1;
- (void)_menuBarAppearanceDidChange;
- (void)_systemAppearanceDidChange;
@property(readonly) NSAppearance *effectiveAppearance;
- (void)dealloc;
- (id)init;
- (id)_kitAppearance;
@property(readonly) id <NSAppearanceCustomization> _effectiveAppearanceParent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


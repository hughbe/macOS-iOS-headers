//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSButtonCell.h>

__attribute__((visibility("hidden")))
@interface NSVisualTabPickerButtonCell : NSButtonCell
{
    BOOL _useExternalHitTesting;
}

@property(nonatomic) BOOL useExternalHitTesting; // @synthesize useExternalHitTesting=_useExternalHitTesting;
- (BOOL)_useHitTestInTrackMouse;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;

@end


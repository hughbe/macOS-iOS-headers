//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IOBluetoothUI/AudioOptionsViewController.h>

@class NSPopUpButton;

@interface AudioOptionsViewMicSwitching : AudioOptionsViewController
{
    NSPopUpButton *_microphoneButton;
}

+ (_Bool)deviceHasViews:(id)arg1;
@property NSPopUpButton *microphoneButton; // @synthesize microphoneButton=_microphoneButton;
- (void)handleMenu:(id)arg1;
- (void)loadPrefs;
- (id)viewsToAlign;
- (void)viewDidLoad;
- (id)init;

@end


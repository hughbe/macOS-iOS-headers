//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConsoleKit/CSKHeaderViewController.h>

#import <ConsoleKit/CSKExtendedTextFieldDelegate-Protocol.h>

@class CSKActivity, NSString;

@interface CSKActivityHeaderViewController : CSKHeaderViewController <CSKExtendedTextFieldDelegate>
{
    CSKActivity *_activity;
}

- (void).cxx_destruct;
@property(nonatomic) __weak CSKActivity *activity; // @synthesize activity=_activity;
- (void)extendedTextFieldDidSwitch:(id)arg1 showsAlternate:(BOOL)arg2;
- (void)_updateHeaderViewsWithActivity:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSPopover.h>

#import <ScreenTimeUI/STLockoutPinViewDelegate-Protocol.h>

@class NSArray, NSStackView, NSString, STLockoutPolicyController;

__attribute__((visibility("hidden")))
@interface STLockoutAlertController : NSPopover <STLockoutPinViewDelegate>
{
    NSStackView *_stackView;
    NSArray *_actions;
    STLockoutPolicyController *_policyController;
    long long _style;
}

- (void).cxx_destruct;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(readonly) STLockoutPolicyController *policyController; // @synthesize policyController=_policyController;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void)pinFieldViewTextDidComplete:(id)arg1;
- (void)pinFieldViewTextDidChange:(id)arg1;
- (void)dismissControllerAnimated:(BOOL)arg1;
- (void)_addPinViewWithAction:(id)arg1;
- (long long)indexOfPinView;
- (void)_addButtonWithAction:(id)arg1;
- (void)addAction:(id)arg1;
- (id)_newStackView;
- (void)performClose:(id)arg1;
- (id)initWithPolicyController:(id)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


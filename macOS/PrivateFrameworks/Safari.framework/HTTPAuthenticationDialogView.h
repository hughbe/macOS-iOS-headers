//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

#import <Safari/TabDialogView-Protocol.h>

@class ButtonPlus, NSButton, NSString, NSTextField;
@protocol HTTPAuthenticationDialogViewDelegate;

__attribute__((visibility("hidden")))
@interface HTTPAuthenticationDialogView : NSView <TabDialogView>
{
    id <HTTPAuthenticationDialogViewDelegate> _delegate;
    NSTextField *_userNameTextField;
    NSTextField *_passwordTextField;
    NSButton *_rememberThisPasswordCheckbox;
    ButtonPlus *_logInButton;
    ButtonPlus *_cancelButton;
    NSTextField *_title;
    NSTextField *_securityLabel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSTextField *securityLabel; // @synthesize securityLabel=_securityLabel;
@property(nonatomic) __weak NSTextField *title; // @synthesize title=_title;
@property(nonatomic) __weak ButtonPlus *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak ButtonPlus *logInButton; // @synthesize logInButton=_logInButton;
@property(nonatomic) __weak NSButton *rememberThisPasswordCheckbox; // @synthesize rememberThisPasswordCheckbox=_rememberThisPasswordCheckbox;
@property(nonatomic) __weak NSTextField *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property(nonatomic) __weak NSTextField *userNameTextField; // @synthesize userNameTextField=_userNameTextField;
@property(retain, nonatomic) id <HTTPAuthenticationDialogViewDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)isAccessibilityElement;
- (id)accessibilityRoleDescription;
- (id)accessibilityRole;
- (void)updateWithNewConfiguration:(id)arg1;
- (void)fadeOutWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fadeInWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)logInButtonPressed:(id)arg1;
- (void)_setUpButtons;
- (void)setUpUsingConfiguration:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


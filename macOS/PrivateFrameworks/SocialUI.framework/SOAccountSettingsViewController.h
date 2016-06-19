//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSTabViewDelegate.h"

@class IMAccount, NSButton, NSLayoutConstraint, NSSecureTextField, NSString, NSTabView, NSTextField;

@interface SOAccountSettingsViewController : NSViewController <NSTabViewDelegate>
{
    NSTabView *_tabView;
    NSTextField *_accountTypeLabel;
    NSButton *_enableAccountCheckbox;
    NSButton *_configureInInternetAccountsButton;
    NSTextField *_accountUsernameLabel;
    NSSecureTextField *_accountPasswordField;
    NSTextField *_accountDescriptionField;
    NSLayoutConstraint *_topMarginConstraint;
}

@property(retain) NSLayoutConstraint *topMarginConstraint; // @synthesize topMarginConstraint=_topMarginConstraint;
@property(retain) NSTextField *accountDescriptionField; // @synthesize accountDescriptionField=_accountDescriptionField;
@property(retain) NSSecureTextField *accountPasswordField; // @synthesize accountPasswordField=_accountPasswordField;
@property(retain) NSTextField *accountUsernameLabel; // @synthesize accountUsernameLabel=_accountUsernameLabel;
@property(retain) NSButton *configureInInternetAccountsButton; // @synthesize configureInInternetAccountsButton=_configureInInternetAccountsButton;
@property(retain) NSButton *enableAccountCheckbox; // @synthesize enableAccountCheckbox=_enableAccountCheckbox;
@property(retain) NSTextField *accountTypeLabel; // @synthesize accountTypeLabel=_accountTypeLabel;
@property(retain) NSTabView *tabView; // @synthesize tabView=_tabView;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setRepresentedObject:(id)arg1;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (void)tabViewDidChangeNumberOfTabViewItems:(id)arg1;
- (void)_accountLoginStatusDidChange:(id)arg1;
- (void)_accountSettingsDidChange:(id)arg1;
- (void)_accountActivationStateDidChange:(id)arg1;
- (void)updateACAccount:(id)arg1;
- (void)updateLoginStatusUI;
- (void)updateSettingsUI;
- (void)updateActivationUI;
- (void)resetPanelDisplay;
- (id)currentHelpTag;
- (void)accountDidChange;
- (void)accountWillChange;
- (void)accountPasswordFieldDidEndEditing:(id)arg1;
- (void)accountDescriptionFieldDidEndEditing:(id)arg1;
- (void)configureInInternetAccounts:(id)arg1;
- (void)toggleEnableAccount:(id)arg1;
@property(readonly) NSString *accountType; // @dynamic accountType;
@property(readonly) BOOL userMayModifyAccountDescription; // @dynamic userMayModifyAccountDescription;
@property(readonly) BOOL userMayModifyAccountPassword; // @dynamic userMayModifyAccountPassword;
@property(readonly) IMAccount *account; // @dynamic account;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


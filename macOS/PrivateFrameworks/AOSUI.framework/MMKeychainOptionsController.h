//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "MMCSCSetupControllerDelegate.h"

@class MMPhoneNumberFormatter, NSBox, NSButton, NSImageView, NSPopUpButton, NSString, NSTextField, NSWindow;

@interface MMKeychainOptionsController : NSViewController <MMCSCSetupControllerDelegate>
{
    id _delegate;
    NSString *_accountID;
    BOOL _didModifySecurityCode;
    NSWindow *_sheet;
    NSTextField *_statusString;
    NSButton *_detailsButton;
    NSBox *_pendingApprovalDivider;
    NSTextField *_iCloudSecurityCodeLabel;
    NSButton *_iCloudSecurityCodeButton;
    NSTextField *_allowKeyChainRecoveryInfoLabel;
    NSButton *_cancelButton;
    NSButton *_OKButton;
    NSButton *_allowKeyChainRecovery;
    NSPopUpButton *_countryCodePopupMenu;
    NSTextField *_phoneNumberTF;
    NSTextField *_phoneNumberLabel;
    NSTextField *_phoneNumberInfoLabel;
    NSImageView *_keychainImageView;
    NSImageView *_cautionImageView;
    NSWindow *_parentWindow;
    NSString *_fullName;
    NSString *_emailAddress;
    NSString *_description;
    NSString *_smsCountryCode;
    NSString *_smsCountryPrefix;
    NSString *_smsTarget;
    NSString *_passPhrase;
    BOOL _usingComplexPassphrase;
    BOOL _isSecurePassphrase;
    BOOL _usingNumericPassphrase;
    int _numericPassphraseLength;
    BOOL _initialState;
    NSString *_initialSMSCountryCode;
    NSString *_initialSMSTarget;
    MMPhoneNumberFormatter *_smsTargetFormatter;
    CDUnknownBlockType _completionHandler;
}

@property int numericPassphraseLength; // @synthesize numericPassphraseLength=_numericPassphraseLength;
@property BOOL usingNumericPassphrase; // @synthesize usingNumericPassphrase=_usingNumericPassphrase;
@property BOOL didModifySecurityCode; // @synthesize didModifySecurityCode=_didModifySecurityCode;
@property(readonly, retain) NSWindow *sheet; // @synthesize sheet=_sheet;
@property(retain) MMPhoneNumberFormatter *smsTargetFormatter; // @synthesize smsTargetFormatter=_smsTargetFormatter;
@property(copy) NSString *initialSMSTarget; // @synthesize initialSMSTarget=_initialSMSTarget;
@property(copy) NSString *initialSMSCountryCode; // @synthesize initialSMSCountryCode=_initialSMSCountryCode;
@property BOOL initialState; // @synthesize initialState=_initialState;
@property BOOL isSecurePassphrase; // @synthesize isSecurePassphrase=_isSecurePassphrase;
@property BOOL usingComplexPassphrase; // @synthesize usingComplexPassphrase=_usingComplexPassphrase;
@property(copy) NSString *passPhrase; // @synthesize passPhrase=_passPhrase;
@property(copy) NSString *smsTarget; // @synthesize smsTarget=_smsTarget;
@property(copy) NSString *smsCountryPrefix; // @synthesize smsCountryPrefix=_smsCountryPrefix;
@property(copy) NSString *smsCountryCode; // @synthesize smsCountryCode=_smsCountryCode;
@property(copy) NSString *description; // @synthesize description=_description;
@property(copy) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(copy) NSString *fullName; // @synthesize fullName=_fullName;
@property NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
@property(retain) NSString *accountID; // @synthesize accountID=_accountID;
@property id delegate; // @synthesize delegate=_delegate;
- (void)mmCSCSetupControllerDidCancel:(id)arg1;
- (void)mmCSCSetupControllerDidOptOut:(id)arg1;
- (void)mmCSCSetupControllerDidEnd:(id)arg1;
- (void)updateApprovalUI;
- (void)_handleSetupKeychainSyncError;
- (id)_targetFromPhoneNumberTF;
- (id)_countryPrefixFromPopupMenu;
- (id)_countryCodeFromPopupMenu;
- (void)_selectCountryCodeInPopUpMenu:(id)arg1;
- (void)popUpMenuItemSelected:(id)arg1;
- (void)setSMSTargetEnabled:(BOOL)arg1 clearTarget:(BOOL)arg2;
- (void)setAllowKeychainRecovery:(BOOL)arg1;
- (void)detailsPressed:(id)arg1;
- (void)allowKeyChainRecoveryPressed:(id)arg1;
- (void)changeSecurityCodePressed:(id)arg1;
- (void)cancel:(id)arg1;
- (void)_finishSavingAccountDetails;
- (void)done:(id)arg1;
- (BOOL)_shouldSave;
- (BOOL)_isHighSecurityEnabled;
- (BOOL)_isBackupEnabled;
- (id)_getKeychainBackupDictionary;
- (id)_getKeychainBackupStatus;
- (BOOL)_isDeviceInCircle;
- (void)showInWindow:(id)arg1 deviceInCircle:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithAccountID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


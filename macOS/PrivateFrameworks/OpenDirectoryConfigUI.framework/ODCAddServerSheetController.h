//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSTextFieldDelegate.h"

@class NSButton, NSData, NSPanel, NSProgressIndicator, NSString, NSTabView, NSTextField, NSTimer, NSWindow, ODCAction, ODCGetODServerInfoAction, ODCServerComboBox, ODCViewControllerBase, SFAuthorizationView, XSDisablingTextField;

@interface ODCAddServerSheetController : NSObject <NSTextFieldDelegate>
{
    NSPanel *_sheet;
    NSTabView *_serverTypeTabView;
    ODCServerComboBox *_odServerNameCombo;
    NSTabView *_odAuthOrNotTabView;
    NSTextField *_odclientIDTextField;
    NSTextField *_odUserNameTextField;
    NSTextField *_odPassTextField;
    NSTextField *_odMessageTextField;
    NSTextField *_odServerTypeInstructionsLabel;
    NSTextField *_adClientIDTextField;
    NSTextField *_adAdminNameTextField;
    NSTextField *_adAdminPassTextField;
    NSTextField *_adMessageTextField;
    XSDisablingTextField *_adRequiredLabel;
    NSProgressIndicator *_spinner;
    NSTextField *_progressLabel;
    NSButton *_okButton;
    NSButton *_cancelButton;
    NSButton *_overwriteButton;
    NSButton *_openDirectoryUtilityButton;
    SFAuthorizationView *_authView;
    NSWindow *_docWindow;
    BOOL _allowADBinding;
    ODCViewControllerBase *_parentViewController;
    NSTimer *_addressChangedTimer;
    BOOL _joinAfterInfoReceived;
    ODCAction *_action;
    ODCGetODServerInfoAction *_getInfoAction;
    BOOL _authBindingAllowed;
    BOOL _authBindingRequired;
    NSString *_serverNameForMostRecentInfo;
    NSString *_mostRecentInfoActiveDirectoryDomainName;
    NSString *_userForForcedJoin;
    BOOL _isForcedJoin;
    BOOL _showODInstructionsLabel;
    NSData *_certificateData;
    NSString *_addressOfServerAskedAboutCATrust;
    BOOL _trustCACert;
    NSString *_addressOfServerWarnedAboutNoSSL;
}

+ (void)alertDidEnd:(id)arg1 returnCode:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
@property(retain) NSString *addressOfServerWarnedAboutNoSSL; // @synthesize addressOfServerWarnedAboutNoSSL=_addressOfServerWarnedAboutNoSSL;
@property(retain) NSString *addressOfServerAskedAboutCATrust; // @synthesize addressOfServerAskedAboutCATrust=_addressOfServerAskedAboutCATrust;
@property BOOL trustCACert; // @synthesize trustCACert=_trustCACert;
@property(retain) NSData *certificateData; // @synthesize certificateData=_certificateData;
@property ODCGetODServerInfoAction *getInfoAction; // @synthesize getInfoAction=_getInfoAction;
@property ODCAction *action; // @synthesize action=_action;
@property BOOL showODInstructionsLabel; // @synthesize showODInstructionsLabel=_showODInstructionsLabel;
@property BOOL isForcedJoin; // @synthesize isForcedJoin=_isForcedJoin;
@property(copy) NSString *userForForcedJoin; // @synthesize userForForcedJoin=_userForForcedJoin;
@property(copy) NSString *mostRecentInfoActiveDirectoryDomainName; // @synthesize mostRecentInfoActiveDirectoryDomainName=_mostRecentInfoActiveDirectoryDomainName;
@property(copy) NSString *serverNameForMostRecentInfo; // @synthesize serverNameForMostRecentInfo=_serverNameForMostRecentInfo;
- (id)odClientCompID;
- (void)closeSheetAndPrepareForRelease;
- (void)buttonHit:(id)arg1;
- (void)comboBoxSelectionDidChange:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (void)finalize;
- (id)initWithMainWindow:(id)arg1 authView:(id)arg2 allowADBinding:(BOOL)arg3 parentController:(id)arg4;
- (id)dhcpLDAPServerName;
- (BOOL)allRequiredFieldsFilled;
- (void)getInfoForEnteredServer:(BOOL)arg1;
- (void)getInfoForEnteredServerTimer:(id)arg1;
- (void)setComputerIDIfEmpty:(id)arg1;
- (void)threadedSuggestComputerID:(id)arg1;
- (void)showErrorAlertAndReleaseSelf:(id)arg1;
- (void)handleOtherActionError:(id)arg1;
- (void)actionDidFinish:(id)arg1;
- (void)didFinishGettingServerInfo:(id)arg1;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (void)setControlsEnabled:(BOOL)arg1;
- (void)adjustSheet:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class IAAccount, NSButton, NSDictionary, NSImage, NSImageView, NSProgressIndicator, NSSecureTextField, NSString, NSTextField;

@interface IAPasswordUIController : NSWindowController
{
    NSTextField *_alertTitleField;
    NSTextField *_alertMessageField;
    NSSecureTextField *_passwordField;
    NSButton *_okButton;
    NSImageView *_icon;
    NSTextField *_statusText;
    NSProgressIndicator *_spinner;
    CDUnknownBlockType _completion;
    IAAccount *_parentAccount;
    NSDictionary *_settings;
    NSString *_bundleID;
    NSString *_aListPluginID;
    NSString *_aListProviderID;
    NSString *_accountDescription;
    NSString *_userName;
    NSString *_password;
    NSString *_prepopulatedPassword;
    NSString *_customAppName;
    NSImage *_customIcon;
    BOOL _isSheet;
    BOOL _accountSettingsValidForCompare;
    BOOL _doCoalesce;
    long long _result;
    id _strongSelf;
    NSString *_uid;
}

@property(retain) NSString *uid; // @synthesize uid=_uid;
@property BOOL doCoalesce; // @synthesize doCoalesce=_doCoalesce;
@property long long result; // @synthesize result=_result;
@property(retain) NSImage *customIcon; // @synthesize customIcon=_customIcon;
@property(retain) NSString *customAppName; // @synthesize customAppName=_customAppName;
@property(retain) NSString *prepopulatedPassword; // @synthesize prepopulatedPassword=_prepopulatedPassword;
@property(readonly) NSString *password; // @synthesize password=_password;
@property(retain) NSDictionary *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (void)_configureUI;
- (void)_passwordDidChange:(id)arg1;
- (void)_notifyPlugins;
- (BOOL)_getAccountInfo;
- (BOOL)_settingsAreSame:(id)arg1;
- (void)help:(id)arg1;
- (void)done:(id)arg1;
- (void)authFailed:(id)arg1;
- (void)abort;
- (void)dismiss;
- (void)displayForWindow:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)close;
- (void)_displayForWindow:(id)arg1;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "MMCSCProgressIndicatorProtocol.h"
#import "MMLinkTextFieldDelegate.h"
#import "MMPinFieldViewDelegate.h"

@class MMLinkTextField, MMPinFieldView, NSButton, NSImageView, NSLayoutConstraint, NSProgressIndicator, NSString, NSTextField, NSView;

@interface MMCSCSMSTargetRecoveryViewController : NSViewController <MMPinFieldViewDelegate, MMLinkTextFieldDelegate, MMCSCProgressIndicatorProtocol>
{
    id <MMCSCSMSTargetRecoveryViewControllerDelegate> _delegate;
    NSImageView *_smsTargetImageView;
    NSTextField *_smsTargetTitle;
    NSView *_smsTargetPinFieldPlaceholder;
    NSLayoutConstraint *_smsTargetPinFieldWidthConstraint;
    MMPinFieldView *_smsTargetPinFieldView;
    MMLinkTextField *_smsTargetMessage;
    NSButton *_smsTargetConfirmButton;
    NSButton *_smsTargetCancelButton;
    NSButton *_smsTargetHelpButton;
    NSProgressIndicator *_smsTargetProgressIndicator;
    NSString *_smsTargetCountryCode;
    NSString *_smsTarget;
    NSString *_smsVerificationToken;
}

@property(copy) NSString *smsVerificationToken; // @synthesize smsVerificationToken=_smsVerificationToken;
@property(copy) NSString *smsTarget; // @synthesize smsTarget=_smsTarget;
@property(copy) NSString *smsTargetCountryCode; // @synthesize smsTargetCountryCode=_smsTargetCountryCode;
@property NSProgressIndicator *smsTargetProgressIndicator; // @synthesize smsTargetProgressIndicator=_smsTargetProgressIndicator;
@property NSButton *smsTargetHelpButton; // @synthesize smsTargetHelpButton=_smsTargetHelpButton;
@property NSButton *smsTargetCancelButton; // @synthesize smsTargetCancelButton=_smsTargetCancelButton;
@property NSButton *smsTargetConfirmButton; // @synthesize smsTargetConfirmButton=_smsTargetConfirmButton;
@property(retain) MMPinFieldView *smsTargetPinFieldView; // @synthesize smsTargetPinFieldView=_smsTargetPinFieldView;
@property NSLayoutConstraint *smsTargetPinFieldWidthConstraint; // @synthesize smsTargetPinFieldWidthConstraint=_smsTargetPinFieldWidthConstraint;
@property NSView *smsTargetPinFieldPlaceholder; // @synthesize smsTargetPinFieldPlaceholder=_smsTargetPinFieldPlaceholder;
@property MMLinkTextField *smsTargetMessage; // @synthesize smsTargetMessage=_smsTargetMessage;
@property NSTextField *smsTargetTitle; // @synthesize smsTargetTitle=_smsTargetTitle;
@property NSImageView *smsTargetImageView; // @synthesize smsTargetImageView=_smsTargetImageView;
@property id <MMCSCSMSTargetRecoveryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clickedOnLink:(id)arg1;
- (void)pinFieldViewTextDidChange:(id)arg1;
- (id)_countryPrefixForCountryCode:(id)arg1;
- (id)_passphraseFromSecureEntryView;
- (void)clearSecureEntryView;
- (void)stopCSCProgressIndicator:(id)arg1;
- (void)startCSCProgressIndicator:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (void)confirmButtonClicked:(id)arg1;
- (void)setupViewWithPinLength:(long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


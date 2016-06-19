//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitUI/PKPaymentAuthorizationChildViewController.h>

#import "PKPaymentAuthorizationDataControllerDelegate.h"
#import "PKPaymentAuthorizationItemsViewDelegate.h"

@class NSButton, NSImageView, NSLayoutConstraint, NSString, NSView, PKPaymentAuthorizationDataController, PKPaymentAuthorizationFooterViewController, PKPaymentAuthorizationItemsView;

@interface PKPaymentAuthorizationMainViewController : PKPaymentAuthorizationChildViewController <PKPaymentAuthorizationDataControllerDelegate, PKPaymentAuthorizationItemsViewDelegate>
{
    id <PKPaymentAuthorizationMainViewControllerDelegate> _delegate;
    PKPaymentAuthorizationDataController *_dataController;
    PKPaymentAuthorizationFooterViewController *_footerViewController;
    NSImageView *_logoImageView;
    NSButton *_cancelButton;
    NSView *_separatorView;
    PKPaymentAuthorizationItemsView *_paymentItemsView;
    NSLayoutConstraint *_viewBottomConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *viewBottomConstraint; // @synthesize viewBottomConstraint=_viewBottomConstraint;
@property(retain, nonatomic) PKPaymentAuthorizationItemsView *paymentItemsView; // @synthesize paymentItemsView=_paymentItemsView;
@property(retain, nonatomic) NSView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) NSImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) PKPaymentAuthorizationFooterViewController *footerViewController; // @synthesize footerViewController=_footerViewController;
@property(retain, nonatomic) PKPaymentAuthorizationDataController *dataController; // @synthesize dataController=_dataController;
@property(nonatomic) __weak id <PKPaymentAuthorizationMainViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_prepareConstraints;
- (void)_createSubviews;
- (void)paymentAuthorizationItemsView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (void)paymentAuthorizationItemsView:(id)arg1 willUnhighlightItemAtIndex:(unsigned long long)arg2;
- (void)paymentAuthorizationItemsView:(id)arg1 willHighlightItemAtIndex:(unsigned long long)arg2;
- (void)paymentAuthorizationDataController:(id)arg1 willAddNewShippingContactWithCompletion:(CDUnknownBlockType)arg2;
- (void)paymentAuthorizationDataController:(id)arg1 didSelectShippingContact:(id)arg2;
- (void)paymentAuthorizationDataController:(id)arg1 willAddNewShippingAddressWithCompletion:(CDUnknownBlockType)arg2;
- (void)paymentAuthorizationDataController:(id)arg1 didSelectShippingAddress:(id)arg2;
- (void)paymentAuthorizationDataController:(id)arg1 didSelectShippingMethod:(id)arg2;
- (void)paymentAuthorizationDataController:(id)arg1 didSelectRemotePaymentInstrument:(id)arg2;
- (void)paymentAuthorizationDataController:(id)arg1 didSelectPaymentPass:(id)arg2;
- (BOOL)handleTransitionToSuccessFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)handleTransitionToFatalErrorFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)handleTransitionToErrorFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)handleTransitionToCancelFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)handleTransitionToNonceFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)handleTransitionToClientCallbackFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)handleTransitionToInactiveFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)handleTransitionToAuthenticateFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)handleTransitionToContinuitySendFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)handleTransitionToInvalidDataFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)paymentAuthorizationStateMachine:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 withParam:(id)arg4;
- (void)dataModelDidUpdate;
- (void)preflight;
- (void)didPressCancelButton:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


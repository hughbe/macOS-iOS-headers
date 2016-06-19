//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "PKContactEditorViewControllerDelegate.h"
#import "PKPaymentAuthorizationErrorViewControllerDelegate.h"
#import "PKPaymentAuthorizationHostProtocol.h"
#import "PKPaymentAuthorizationMainViewControllerDelegate.h"
#import "PKPaymentAuthorizationServiceProtocol.h"
#import "PKPaymentAuthorizationStateMachineDelegate.h"
#import "PKPostalAddressEditorViewControllerDelegate.h"

@class NSArray, NSString, NSWindow, PKContactEditorViewController, PKPaymentAuthorizationChildViewController, PKPaymentAuthorizationDataModel, PKPaymentAuthorizationErrorViewController, PKPaymentAuthorizationLayout, PKPaymentAuthorizationMainViewController, PKPaymentAuthorizationStateMachine, PKPostalAddressEditorViewController;

@interface PKPaymentAuthorizationCoreViewController : NSViewController <PKPaymentAuthorizationMainViewControllerDelegate, PKPostalAddressEditorViewControllerDelegate, PKContactEditorViewControllerDelegate, PKPaymentAuthorizationErrorViewControllerDelegate, PKPaymentAuthorizationStateMachineDelegate, PKPaymentAuthorizationHostProtocol, PKPaymentAuthorizationServiceProtocol>
{
    CDUnknownBlockType block;
    long long _paymentAuthorizationStyle;
    PKPaymentAuthorizationLayout *_paymentAuthorizationLayout;
    PKPaymentAuthorizationStateMachine *_stateMachine;
    id <PKPaymentAuthorizationHostProtocol> _delegate;
    long long _state;
    PKPaymentAuthorizationChildViewController *_activeViewController;
    NSArray *_activeViewConstraints;
    PKPaymentAuthorizationMainViewController *_mainViewController;
    PKPostalAddressEditorViewController *_postalAddressEditorViewController;
    PKPaymentAuthorizationErrorViewController *_errorViewController;
    PKContactEditorViewController *_contactEditorViewController;
    NSWindow *_contactEditorWindow;
    CDUnknownBlockType _pendingPrepareCompletionBlock;
    CDUnknownBlockType _pendingAddNewAddressCompletionBlock;
    CDUnknownBlockType _pendingAddNewContactCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType pendingAddNewContactCompletionBlock; // @synthesize pendingAddNewContactCompletionBlock=_pendingAddNewContactCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType pendingAddNewAddressCompletionBlock; // @synthesize pendingAddNewAddressCompletionBlock=_pendingAddNewAddressCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType pendingPrepareCompletionBlock; // @synthesize pendingPrepareCompletionBlock=_pendingPrepareCompletionBlock;
@property(retain, nonatomic) NSWindow *contactEditorWindow; // @synthesize contactEditorWindow=_contactEditorWindow;
@property(retain, nonatomic) PKContactEditorViewController *contactEditorViewController; // @synthesize contactEditorViewController=_contactEditorViewController;
@property(retain, nonatomic) PKPaymentAuthorizationErrorViewController *errorViewController; // @synthesize errorViewController=_errorViewController;
@property(retain, nonatomic) PKPostalAddressEditorViewController *postalAddressEditorViewController; // @synthesize postalAddressEditorViewController=_postalAddressEditorViewController;
@property(retain, nonatomic) PKPaymentAuthorizationMainViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
@property(retain, nonatomic) NSArray *activeViewConstraints; // @synthesize activeViewConstraints=_activeViewConstraints;
@property(retain, nonatomic) PKPaymentAuthorizationChildViewController *activeViewController; // @synthesize activeViewController=_activeViewController;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <PKPaymentAuthorizationHostProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKPaymentAuthorizationStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) PKPaymentAuthorizationLayout *paymentAuthorizationLayout; // @synthesize paymentAuthorizationLayout=_paymentAuthorizationLayout;
@property(nonatomic) long long paymentAuthorizationStyle; // @synthesize paymentAuthorizationStyle=_paymentAuthorizationStyle;
- (void).cxx_destruct;
- (id)hostContextWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)hostContext;
- (id)_hostApplicationIdentifier;
- (id)_hostApplicationName;
- (void)handleDismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleHostApplicationDidCancel;
- (void)authorizationDidSelectPaymentMethodCompleteWithPaymentSummaryItems:(id)arg1;
- (void)authorizationDidSelectShippingAddressCompleteWithStatus:(long long)arg1 shippingMethods:(id)arg2 paymentSummaryItems:(id)arg3;
- (void)authorizationDidSelectShippingMethodCompleteWithStatus:(long long)arg1 paymentSummaryItems:(id)arg2;
- (void)authorizationDidAuthorizePaymentCompleteWithStatus:(long long)arg1;
- (void)authorizationDidRequestMerchantSessionCompleteWithSession:(id)arg1 error:(id)arg2;
- (void)handleHostApplicationDidBecomeActive;
- (void)handleHostApplicationWillResignActive:(BOOL)arg1;
- (void)prepareWithPaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)authorizationDidPresent;
- (void)authorizationDidSelectPaymentMethod:(id)arg1;
- (void)authorizationDidSelectShippingAddress:(id)arg1;
- (void)authorizationDidSelectShippingMethod:(id)arg1;
- (void)authorizationDidAuthorizePayment:(id)arg1;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationDidFinishWithError:(id)arg1;
- (void)authorizationWillStart;
- (BOOL)handleTransitionToSuccessFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)handleTransitionToFatalErrorFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)handleTransitionToErrorFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)handleTransitionToCancelFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)handleTransitionToClientCallbackFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)handleTransitionToContinuitySendFromState:(unsigned long long)arg1 withParam:(id)arg2;
- (BOOL)paymentAuthorizationStateMachine:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 withParam:(id)arg4;
- (void)paymentAuthorizationErrorViewControllerDidFinish:(id)arg1;
- (void)contactEditorViewController:(id)arg1 didFinishEditingContact:(id)arg2;
- (void)contactEditorViewControllerDidCancel:(id)arg1;
- (void)postalAddressEditorViewController:(id)arg1 didFinishEditingContact:(id)arg2;
- (void)postalAddressEditorViewControllerDidCancel:(id)arg1;
- (void)paymentAuthorizationMainViewController:(id)arg1 willAddNewShippingContactWithCompletion:(CDUnknownBlockType)arg2;
- (void)paymentAuthorizationMainViewController:(id)arg1 willAddNewShippingAddressWithCompletion:(CDUnknownBlockType)arg2;
- (void)paymentAuthorizationMainViewControllerDidCancel:(id)arg1;
- (id)layoutConstraintsForChildView:(id)arg1;
- (void)setActiveViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setActiveViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setState:(long long)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) PKPaymentAuthorizationDataModel *dataModel;
- (id)childViewControllerForState:(long long)arg1;
- (void)viewDidAppear;
- (void)_notifyApplicationDidBecomeActive:(id)arg1;
- (void)_notifyApplicationDidResignActive:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


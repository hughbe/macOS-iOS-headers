//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AKICAUIDelegate.h"
#import "AKICAWebKitViewControllerDelegate.h"
#import "AKMBICAUIDelegate.h"
#import "AKWebViewButtonBarDelegate.h"
#import "AuthWebViewDelegate.h"

@class ADMChangePasswordController, AKAppleIDServerResourceLoadDelegate, AKICAWebKitViewController, AKWebViewButtonBar, JSValue, NSImage, NSLayoutConstraint, NSProgressIndicator, NSString, NSTextField, NSTimer, NSURLRequest, NSView, NSWindow;

@interface AKAuthWebTabView : NSObject <AKICAUIDelegate, AKICAWebKitViewControllerDelegate, AuthWebViewDelegate, AKWebViewButtonBarDelegate, AKMBICAUIDelegate>
{
    id <AuthWebViewDelegate> _delegate;
    id <MBUIDelegate> _mbUIDelegate;
    id <MBWebKitViewControllerDelegate> _mbWebKitViewControllerDelegate;
    NSView *_containerView;
    NSView *_webViewContainer;
    NSView *_webView;
    NSView *_loadingView;
    NSView *_loadingViewCancelButton;
    NSView *_unavailibleView;
    NSView *_unavailibleViewCancelButton;
    NSTextField *_unavailableTextField;
    NSView *_addiCloudMemberViewContainer;
    NSView *_addiCloudMemberView;
    NSProgressIndicator *_loadingSpinner;
    NSWindow *_sheet;
    NSView *_sheetContent;
    NSView *_buttonBarView;
    NSLayoutConstraint *_buttonBarHeight;
    NSLayoutConstraint *_buttonBarWidth;
    AKICAWebKitViewController *webViewVC;
    NSURLRequest *_urlRequest;
    NSString *_viewName;
    NSString *_url;
    NSString *_content;
    NSString *_parentURL;
    NSString *_accountID;
    NSWindow *_parentWindow;
    AKAuthWebTabView *nestedWebView;
    unsigned long long _webViewType;
    JSValue *_callback;
    BOOL _isShowingNestedSheet;
    struct CGSize _contentSize;
    AKWebViewButtonBar *buttonBar;
    BOOL _isButtonBarShown;
    BOOL _isResizeAvailible;
    BOOL _isWebClientIsReadyCalled;
    BOOL _isWebClientHasLoadedCalled;
    BOOL _isAddMemberCompleted;
    NSTimer *_waitTimer;
    AKAppleIDServerResourceLoadDelegate *_resourceLoadDelegate;
    CDUnknownBlockType _defaultAction;
    NSImage *_displayImage;
    ADMChangePasswordController *mChangePasswordController;
    struct {
        unsigned int delegateSetWindowTitle:1;
        unsigned int delegateSetWindowMessage:1;
        unsigned int delegateSetLeftButtonTitle:1;
        unsigned int delegateSetLeftButtonEnabled:1;
        unsigned int delegateSetRightButtonTitle:1;
        unsigned int delegateSetRightButtonEnabled:1;
        unsigned int delegateSetAlternateButtonTitle:1;
        unsigned int delegateSetAlternateButtonEnabled:1;
        unsigned int delegateSaveFile:1;
        unsigned int delegateSaveFileWithName:1;
        unsigned int delegateShowTerms:1;
        unsigned int delegateAppleIDOptOut:1;
        unsigned int delegateDidCancel:1;
        unsigned int delegateDidDismiss:1;
        unsigned int delegateDidSucceed:1;
        unsigned int delegateDidFinishLoading:1;
        unsigned int delegateDidFail:1;
        unsigned int delegateSkipSignIn:1;
        unsigned int delegateModifyURLRequest:1;
        unsigned int padding:1;
    } _flags;
    JSValue *_leftButtonCallback;
    JSValue *_rightButtonCallback;
    JSValue *_alternateButtonCallback;
}

@property(nonatomic) unsigned long long webViewType; // @synthesize webViewType=_webViewType;
@property(retain, nonatomic) NSWindow *sheet; // @synthesize sheet=_sheet;
@property(retain) NSImage *displayImage; // @synthesize displayImage=_displayImage;
@property(retain, nonatomic) JSValue *alternateButtonCallback; // @synthesize alternateButtonCallback=_alternateButtonCallback;
@property(retain, nonatomic) JSValue *rightButtonCallback; // @synthesize rightButtonCallback=_rightButtonCallback;
@property(retain, nonatomic) JSValue *leftButtonCallback; // @synthesize leftButtonCallback=_leftButtonCallback;
@property(copy) CDUnknownBlockType defaultAction; // @synthesize defaultAction=_defaultAction;
@property(retain) AKAppleIDServerResourceLoadDelegate *resourceLoadDelegate; // @synthesize resourceLoadDelegate=_resourceLoadDelegate;
@property BOOL isWebClientIsReadyCalled; // @synthesize isWebClientIsReadyCalled=_isWebClientIsReadyCalled;
@property BOOL isWebClientHasLoadedCalled; // @synthesize isWebClientHasLoadedCalled=_isWebClientHasLoadedCalled;
@property(retain) NSTimer *waitTimer; // @synthesize waitTimer=_waitTimer;
@property BOOL isResizeAvailible; // @synthesize isResizeAvailible=_isResizeAvailible;
@property BOOL isButtonBarShown; // @synthesize isButtonBarShown=_isButtonBarShown;
@property(retain) NSLayoutConstraint *buttonBarWidth; // @synthesize buttonBarWidth=_buttonBarWidth;
@property(retain) NSLayoutConstraint *buttonBarHeight; // @synthesize buttonBarHeight=_buttonBarHeight;
@property(retain) NSView *buttonBarView; // @synthesize buttonBarView=_buttonBarView;
@property(retain) NSView *sheetContent; // @synthesize sheetContent=_sheetContent;
@property(retain) NSProgressIndicator *loadingSpinner; // @synthesize loadingSpinner=_loadingSpinner;
@property(retain) NSView *addiCloudMemberView; // @synthesize addiCloudMemberView=_addiCloudMemberView;
@property(retain) NSView *addiCloudMemberViewContainer; // @synthesize addiCloudMemberViewContainer=_addiCloudMemberViewContainer;
@property(retain) NSTextField *unavailableTextField; // @synthesize unavailableTextField=_unavailableTextField;
@property(retain) NSView *unavailibleViewCancelButton; // @synthesize unavailibleViewCancelButton=_unavailibleViewCancelButton;
@property(retain) NSView *unavailibleView; // @synthesize unavailibleView=_unavailibleView;
@property(retain) NSView *loadingViewCancelButton; // @synthesize loadingViewCancelButton=_loadingViewCancelButton;
@property(retain) NSView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain) NSView *webView; // @synthesize webView=_webView;
@property(retain) NSView *containerView; // @synthesize containerView=_containerView;
@property struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain) NSView *webViewContainer; // @synthesize webViewContainer=_webViewContainer;
@property(retain) JSValue *callback; // @synthesize callback=_callback;
@property NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
@property(copy) NSString *accountID; // @synthesize accountID=_accountID;
@property(nonatomic) id <MBWebKitViewControllerDelegate> mbWebKitViewControllerDelegate; // @synthesize mbWebKitViewControllerDelegate=_mbWebKitViewControllerDelegate;
@property(nonatomic) id <MBUIDelegate> mbUIDelegate; // @synthesize mbUIDelegate=_mbUIDelegate;
@property id <AuthWebViewDelegate> delegate; // @synthesize delegate=_delegate;
@property NSString *content; // @synthesize content=_content;
@property NSString *parentURL; // @synthesize parentURL=_parentURL;
@property(retain) NSURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
@property NSString *url; // @synthesize url=_url;
@property NSString *viewName; // @synthesize viewName=_viewName;
- (id)getAuthKitData:(id)arg1;
- (void)wasNotifiedOfDataChange:(id)arg1;
- (BOOL)shouldSelectToLocation:(id)arg1 toSection:(id)arg2;
- (void)didChangetoLocation:(id)arg1 toSection:(id)arg2 withContext:(id)arg3;
- (BOOL)willChangetoLocation:(id)arg1 toSection:(id)arg2 withContext:(id)arg3;
- (void)icaWebKitViewControllerSendFinalResponse:(id)arg1;
- (BOOL)icaWebKitViewControllerIsFinalResponse:(id)arg1;
- (void)icaWebKitViewControllerSignRequest:(id)arg1;
- (void)icaWebKitViewControllerDidFail:(id)arg1 error:(id)arg2;
- (void)icaWebKitViewControllerDidFinishLoading:(id)arg1;
- (void)icaWebKitViewControllerSheetDidEnd:(id)arg1 withData:(id)arg2;
- (void)icaWebKitViewControllerDidSucceed:(id)arg1;
- (void)icaWebKitViewControllerDidCancel:(id)arg1;
- (void)updateContinueButton:(BOOL)arg1;
- (void)alternateNavigationButtonClicked:(id)arg1;
- (void)rightNavigationButtonClicked:(id)arg1;
- (void)leftNavigationButtonClicked:(id)arg1;
- (void)runAppleIDOptOut:(id)arg1;
- (void)skipSignIn;
- (void)dismiss:(id)arg1;
- (void)showTermsAndConditions:(id)arg1 callback:(id)arg2;
- (void)resetCompleted:(id)arg1 password:(id)arg2;
- (void)saveTOS:(id)arg1 localizedName:(id)arg2 content:(id)arg3;
- (void)saveTOS:(id)arg1 content:(id)arg2;
- (void)setAlternateNavButton:(id)arg1 callback:(id)arg2;
- (void)setRightNavButton:(id)arg1 callback:(id)arg2;
- (void)setLeftNavButton:(id)arg1 callback:(id)arg2;
- (void)setPageSubTitle:(id)arg1;
- (void)setNavTitle:(id)arg1;
- (id)clientInfo;
- (void)skipAndContinueSignIn;
- (void)icaSetButtonBar:(id)arg1;
- (void)resizeToWidth:(unsigned long long)arg1 heigth:(unsigned long long)arg2 callback:(id)arg3;
- (void)exitWebView:(id)arg1;
- (void)endSheet:(id)arg1;
- (void)beginSheetWithURL:(id)arg1 initialWidth:(unsigned long long)arg2 initialHeight:(unsigned long long)arg3 callback:(id)arg4 optionalContext:(id)arg5;
- (void)beginSheetWithContent:(id)arg1 initialWidth:(unsigned long long)arg2 initialHeight:(unsigned long long)arg3 callback:(id)arg4 optionalContext:(id)arg5;
- (id)webViewWindow;
- (void)icaWebKitViewHasLoaded;
- (void)icaWebKitViewIsAvailable;
- (void)sizeChangedFrom:(struct CGSize)arg1 toSize:(struct CGSize)arg2 webViewName:(id)arg3 callback:(id)arg4;
- (void)loadFailed:(id)arg1;
- (void)endWebView:(id)arg1;
- (void)showUnavailable:(id)arg1;
- (void)_fireWaitTimer:(id)arg1;
- (void)_destroyWaitTimer;
- (void)_createWaitTimer;
- (void)_createWaitTimerWithTimeInternval:(double)arg1;
- (void)cancelPressed:(id)arg1;
- (void)OKPressed:(id)arg1;
- (id)urlRequestFromInfo:(id)arg1;
- (void)resizeModalSheet:(struct CGSize)arg1;
- (void)closeModalSheet;
- (void)beginModalSheetWithInitialWidth:(unsigned long long)arg1 initialHeight:(unsigned long long)arg2 callback:(id)arg3 optionalContext:(id)arg4;
- (void)beginModalSheetWithInviteDict:(id)arg1;
- (void)beginModalSheet;
- (void)refreshWithURLRequest:(id)arg1;
- (id)webViewWithInviteDict:(id)arg1;
- (id)webViewWithWorkflowDict:(id)arg1;
- (void)refreshNotification:(id)arg1;
- (void)cleanUp;
- (void)dealloc;
- (id)initWithURLRequest:(id)arg1 parentWindow:(id)arg2;
- (id)initWithContent:(id)arg1 andAccountID:(id)arg2 parentWindow:(id)arg3;
- (id)initWithURL:(id)arg1 andAccountID:(id)arg2 parentWindow:(id)arg3;
- (id)initWithName:(id)arg1 andAccountID:(id)arg2 parentWindow:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


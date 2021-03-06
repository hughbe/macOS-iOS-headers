/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
 */

@interface AXUISettingsInstructionsView : UITableViewHeaderFooterView <PSHeaderFooterView, UITextViewDelegate> {
    NSMutableArray * _contentLabels;
    UILabel * _headerLabel;
    NSMutableArray * _marginConstraints;
    OBWelcomeController * _moreInfoController;
    PSSpecifier * _specifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) OBWelcomeController *moreInfoController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_initializeContent;
- (void)doneButtonTapped:(id)arg1;
- (id)initWithSpecifier:(id)arg1;
- (id)moreInfoController;
- (double)preferredHeightForWidth:(double)arg1;
- (void)setMoreInfoController:(id)arg1;
- (void)setNeedsLayout;
- (id)settingsLocString:(id)arg1 table:(id)arg2;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;

@end

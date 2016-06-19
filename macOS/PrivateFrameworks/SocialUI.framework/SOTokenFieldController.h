//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SocialUI/SOAddRecipientFieldViewController.h>

#import "NSTokenFieldDelegate.h"
#import "SOTokenAttachmentCellDelegate.h"
#import "SOTokenFieldCellDragDelegate.h"

@class NSHashTable, NSMutableDictionary, NSObject<OS_os_activity>, NSString, SOHandleMenuController, SOTokenField;

@interface SOTokenFieldController : SOAddRecipientFieldViewController <SOTokenAttachmentCellDelegate, SOTokenFieldCellDragDelegate, NSTokenFieldDelegate>
{
    BOOL _wroteToPasteboard;
    BOOL _addTokensFromDrag;
    SOTokenField *_layoutTestTokenField;
    NSMutableDictionary *_cachedTokenFieldHeights;
    NSHashTable *_tokenAttachmentCells;
    NSObject<OS_os_activity> *_tokenizerActivityID;
    BOOL _changingFirstResponder;
    BOOL _suppressErrorDisplay;
    SOHandleMenuController *_handleMenuController;
}

@property(retain) SOHandleMenuController *handleMenuController; // @synthesize handleMenuController=_handleMenuController;
@property BOOL suppressErrorDisplay; // @synthesize suppressErrorDisplay=_suppressErrorDisplay;
@property(getter=isChangingFirstResponder) BOOL changingFirstResponder; // @synthesize changingFirstResponder=_changingFirstResponder;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLoad;
- (void)selectedResult:(id)arg1;
- (void)didSelectResult:(id)arg1;
- (struct _NSRange)rangeForUserCompletionInFieldEditor:(id)arg1;
- (id)autocompleteStringForFieldEditor:(id)arg1;
- (void)chatDisplayControllerDidChange:(id)arg1;
- (void)chatDisplayControllerWillChange:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)updateRecipients;
- (BOOL)control:(id)arg1 textShouldEndEditing:(id)arg2;
- (id)tokenField:(id)arg1 menuForRepresentedObject:(id)arg2;
- (BOOL)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2;
- (BOOL)tokenField:(id)arg1 writeRepresentedObjects:(id)arg2 toPasteboard:(id)arg3;
- (id)tokenField:(id)arg1 readFromPasteboard:(id)arg2;
- (id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 setUpTokenAttachmentCell:(id)arg2 forRepresentedObject:(id)arg3;
- (void)_registerTokenAttachmentCell:(id)arg1;
- (void)_updateHandleTokenFromNotification:(id)arg1;
- (unsigned long long)tokenField:(id)arg1 styleForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)tokenField:(id)arg1 representedObjectForEditingString:(id)arg2;
- (void)tokenFieldCellDidEndDropOperation:(id)arg1;
- (void)tokenFieldCellDidBeginDropOperation:(id)arg1;
- (BOOL)tokenAttachmentCellHasErrorState:(id)arg1;
- (BOOL)tokenAttachmentCell:(id)arg1 doubleClickedInRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)tokenAttachmentCell:(id)arg1 willBeDestroyedWithRepresentedObject:(id)arg2;
- (BOOL)tokenAttachmentCellShouldShowDedicingBackground:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_showErrorMessageForHandle:(id)arg1;
- (BOOL)_showContactCardForIMHandle:(id)arg1;
- (void)_setRecipientTokens:(id)arg1;
- (id)_strippedPboardString:(id)arg1;
- (void)_tokenFormatDidChange:(id)arg1;
- (void)_updatePlaceholderAttributedString;
- (void)_newChatDisplayControllerIDSValidationDidChange:(id)arg1;
- (void)_chatDisplayControllerRecipientsDidChange:(id)arg1;
- (unsigned long long)visibleTokenCountForLineCount:(unsigned long long)arg1 width:(double)arg2;
- (void)appendIMHandles:(id)arg1;
- (void)showContactCard:(id)arg1;
@property(nonatomic) double tokenFontSize; // @dynamic tokenFontSize;
@property(readonly, nonatomic) SOTokenField *tokenField; // @dynamic tokenField;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


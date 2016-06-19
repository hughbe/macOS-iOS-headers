//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CompletionUIPresentationControllerDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface FormAutoFillCompletionControllerObjCAdapter : NSObject <NSTableViewDataSource, NSTableViewDelegate, CompletionUIPresentationControllerDelegate>
{
    struct FormAutoFillCompletionController *_completionController;
    NSMutableSet *_completionAbortingNotificationNames;
}

- (void).cxx_destruct;
- (void)_registerForCompletionAbortingNotificationNamed:(id)arg1 object:(id)arg2;
- (void)_unregisterForCompletionAbortingNotifications;
- (void)_registerForCompletionAbortingNotifications;
- (BOOL)shouldAbortCompletionFromNotification:(id)arg1;
- (void)_abortCompletionFromNotification:(id)arg1;
- (id)attributedStringForTableColumn:(id)arg1 row:(long long)arg2;
- (void)prepareForReloadOfCompletionList;
- (void)completionWindowDidHide;
- (void)completionWindowDidShow;
- (void)invalidate;
- (struct FormAutoFillCompletionController *)completionController;
- (id)initWithCompletionController:(struct FormAutoFillCompletionController *)arg1;
- (void)completionUIPresentationControllerDidFinishPresentationAnimation:(id)arg1;
- (void)completionUIPresentationControllerWillStartPresentationAnimation:(id)arg1;
- (void)completionListTableView:(id)arg1 mouseUpInRow:(long long)arg2;
- (long long)completionListTableViewUserInterfaceLayoutDirection:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3;
- (void)_updateSeparatorStateForItem:(struct CompletionListItem *)arg1 tableView:(id)arg2 rowView:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)tableViewSelectionIsChanging:(id)arg1;
- (BOOL)completionListTableView:(id)arg1 rowSpansAllColumns:(long long)arg2;
- (BOOL)completionListTableView:(id)arg1 rowIsChecked:(long long)arg2;
- (BOOL)completionListTableView:(id)arg1 rowIsSeparator:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


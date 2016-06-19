//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class NSButton, NSMutableArray, NSProgressIndicator, NSString, NSTableView, NSTextField, NSWindow;

@interface MMSignoutSheetController : NSObject <NSTableViewDataSource, NSTableViewDelegate>
{
    NSWindow *_signoutSheet;
    NSTableView *_serviceTable;
    NSTextField *_messageText;
    NSButton *_continueButton;
    NSButton *_cancelButton;
    NSProgressIndicator *_progressSpinner;
    NSMutableArray *_serviceInfoList;
    NSWindow *_parentWindow;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
@property(retain) NSMutableArray *serviceInfoList; // @synthesize serviceInfoList=_serviceInfoList;
@property(retain) NSProgressIndicator *progressSpinner; // @synthesize progressSpinner=_progressSpinner;
@property(retain) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain) NSButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain) NSTextField *messageText; // @synthesize messageText=_messageText;
@property(retain) NSTableView *serviceTable; // @synthesize serviceTable=_serviceTable;
@property(retain) NSWindow *signoutSheet; // @synthesize signoutSheet=_signoutSheet;
- (long long)countOfEnabledCheckboxes;
- (id)enabledServices;
- (void)hideProgress;
- (void)showProgress;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)checkboxClicked:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)continueButtonPressed:(id)arg1;
- (void)dismissSignoutSheet;
- (void)showSignoutSheetForServices:(id)arg1 usingWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


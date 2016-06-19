//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "PKServiceClientProtocol.h"

@class NSArray, NSButton, NSProgressIndicator, NSString, NSTextField, NSView, NSXPCConnection, PKPrinter;

@interface PKQueueCreationController : NSWindowController <PKServiceClientProtocol>
{
    NSView *_progressView;
    NSButton *_cancelButton;
    NSTextField *_progressTextField;
    NSProgressIndicator *_progressIndicator;
    NSArray *_topLevelNibObjects;
    PKPrinter *_printer;
    NSString *_queueID;
    id <PKServerQueueCreationDelegate> _delegate;
    BOOL _isCancelled;
    NSXPCConnection *_xpcConnection;
}

@property(retain) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property id <PKServerQueueCreationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSString *queueID; // @synthesize queueID=_queueID;
@property(retain) PKPrinter *printer; // @synthesize printer=_printer;
@property(retain) NSArray *topLevelNibObjects; // @synthesize topLevelNibObjects=_topLevelNibObjects;
@property NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property NSTextField *progressTextField; // @synthesize progressTextField=_progressTextField;
@property NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property NSView *progressView; // @synthesize progressView=_progressView;
- (void)queueCreated:(id)arg1 queueID:(id)arg2 error:(int)arg3;
- (void)startQueueCreation;
- (void)presentErrorWithMessageText:(id)arg1 informativeTextWithFormat:(id)arg2;
- (void)switchPanelTo:(id)arg1;
- (void)tearDownXPCConnection;
- (id)setupXPCConnection;
- (void)notifyQueueCompleted:(long long)arg1;
- (void)cancelErrorAlert:(id)arg1;
- (void)cancel:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithPrinter:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


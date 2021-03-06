//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class ABClickableTextView, ABSuggestedValueViewControllerSnippetHelper, CNLabeledValue, NSButton, NSDateFormatter, NSScrollView, NSStackView, NSTextField, NSView;
@protocol ABSuggestedValueViewControllerDelegate, CNCancelable;

@interface ABSuggestedValueViewController : NSViewController
{
    BOOL _showsActionButtons;
    NSStackView *_verticalHeaderStackView;
    NSTextField *_subjectField;
    NSView *_subjectContainer;
    NSTextField *_senderField;
    NSView *_senderContainer;
    NSTextField *_dateField;
    NSTextField *_sourceItemView;
    ABClickableTextView *_relatedTextView;
    NSScrollView *_relatedTextViewScrollView;
    ABSuggestedValueViewControllerSnippetHelper *_snippetHelper;
    NSButton *_confirmButton;
    NSButton *_rejectButton;
    id <ABSuggestedValueViewControllerDelegate> _delegate;
    CNLabeledValue *_labeledValue;
    NSDateFormatter *_dateFormatter;
    id <CNCancelable> _mouseDownObserver;
}

- (void).cxx_destruct;
@property(retain) id <CNCancelable> mouseDownObserver; // @synthesize mouseDownObserver=_mouseDownObserver;
@property(retain) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain) CNLabeledValue *labeledValue; // @synthesize labeledValue=_labeledValue;
@property id <ABSuggestedValueViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSButton *rejectButton; // @synthesize rejectButton=_rejectButton;
@property(retain, nonatomic) NSButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) BOOL showsActionButtons; // @synthesize showsActionButtons=_showsActionButtons;
@property(retain, nonatomic) ABSuggestedValueViewControllerSnippetHelper *snippetHelper; // @synthesize snippetHelper=_snippetHelper;
@property(retain, nonatomic) NSScrollView *relatedTextViewScrollView; // @synthesize relatedTextViewScrollView=_relatedTextViewScrollView;
@property(retain, nonatomic) ABClickableTextView *relatedTextView; // @synthesize relatedTextView=_relatedTextView;
@property(retain, nonatomic) NSTextField *sourceItemView; // @synthesize sourceItemView=_sourceItemView;
@property(retain, nonatomic) NSTextField *dateField; // @synthesize dateField=_dateField;
@property(retain, nonatomic) NSView *senderContainer; // @synthesize senderContainer=_senderContainer;
@property(retain, nonatomic) NSTextField *senderField; // @synthesize senderField=_senderField;
@property(retain, nonatomic) NSView *subjectContainer; // @synthesize subjectContainer=_subjectContainer;
@property(retain, nonatomic) NSTextField *subjectField; // @synthesize subjectField=_subjectField;
@property(retain, nonatomic) NSStackView *verticalHeaderStackView; // @synthesize verticalHeaderStackView=_verticalHeaderStackView;
- (void)rejectSuggestedValue:(id)arg1;
- (void)confirmSuggestedValue:(id)arg1;
- (void)setSnippet:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)setUpMouseDownObserverWithURL:(id)arg1;
- (void)setOriginURL:(id)arg1;
- (void)removeEmptyFields;
- (void)configureView;
- (void)setDateReceived:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setFoundInAppName:(id)arg1;
- (void)setSenderName:(id)arg1;
- (void)invalidateMouseDownObserver;
- (void)dealloc;
- (void)viewWillAppear;
- (void)viewDidLayout;
- (void)awakeFromNib;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKit/WKWebView.h>

@class NoteHTMLEditorView;

@interface NoteWKWebView : WKWebView
{
    NoteHTMLEditorView *_noteHTMLEditorView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NoteHTMLEditorView *noteHTMLEditorView; // @synthesize noteHTMLEditorView=_noteHTMLEditorView;
- (id)ic_evaluateJavaScriptAndWait:(id)arg1 error:(id *)arg2;
- (void)ic_evaluateJavaScript:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)pasteAsPlainText:(id)arg1;
- (void)paste:(id)arg1;
- (void)strikethrough:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InputMethodKit/IMKInputController.h>

@class IMKAppleSpellCandidateEngine, IMKKeyboard, IMKKeyboardService, IMKTextDocumentTextInputAdaptor;

@interface IMKKeyboardInputController : IMKInputController
{
    IMKTextDocumentTextInputAdaptor *_textDocument;
    BOOL _deactivating;
    BOOL _useMarkedText;
    IMKAppleSpellCandidateEngine *_candidateEngine;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IMKAppleSpellCandidateEngine *candidateEngine; // @synthesize candidateEngine=_candidateEngine;
@property(nonatomic) BOOL useMarkedText; // @synthesize useMarkedText=_useMarkedText;
@property(retain, nonatomic) IMKTextDocumentTextInputAdaptor *textDocument; // @synthesize textDocument=_textDocument;
@property(nonatomic, getter=isDeactivating) BOOL deactivating; // @synthesize deactivating=_deactivating;
- (id)candidateControllerForTouchBar;
- (void)handleIMKCandidateSelection:(id)arg1;
- (void)commitComposition:(id)arg1;
- (BOOL)handleEvent:(id)arg1 client:(id)arg2;
- (void)setValue:(id)arg1 forTag:(long long)arg2 client:(id)arg3;
- (id)menu;
- (id)functionRowItemTextInputViewController;
- (void)deactivateServer:(id)arg1;
- (void)activateServer:(id)arg1;
- (void)setupCandidateEngineForSender:(id)arg1;
- (void)setupDocumentForSender:(id)arg1;
- (void)setRemotePropertyAccess:(BOOL)arg1;
- (void)setupForSender:(id)arg1 onlyForNewSenders:(BOOL)arg2;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly, nonatomic) IMKKeyboard *keyboard;
@property(readonly, nonatomic) IMKKeyboardService *keyboardService;

@end


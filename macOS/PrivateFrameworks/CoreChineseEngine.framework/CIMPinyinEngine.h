//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreChineseEngine/CIMBaseEngine.h>

@class CIMCandidate, CIMMecabraEngine, NSArray, NSViewController;

@interface CIMPinyinEngine : CIMBaseEngine
{
    BOOL _capsLockEnabled;
    BOOL _lastCharacterWasNumber;
    BOOL _leftSingleQuotationMarkInserted;
    BOOL _leftDoubleQuotationMarkInserted;
    CIMMecabraEngine *_mecabraEngine;
    CIMCandidate *_selectedCandidate;
    NSViewController *_strokeInformationViewController;
    BOOL _previousInputSelectedTone;
}

@property(nonatomic) BOOL previousInputSelectedTone; // @synthesize previousInputSelectedTone=_previousInputSelectedTone;
@property(retain, nonatomic) NSViewController *strokeInformationViewController; // @synthesize strokeInformationViewController=_strokeInformationViewController;
@property(retain, nonatomic) CIMCandidate *selectedCandidate; // @synthesize selectedCandidate=_selectedCandidate;
@property(retain, nonatomic) CIMMecabraEngine *mecabraEngine; // @synthesize mecabraEngine=_mecabraEngine;
@property(nonatomic) BOOL leftDoubleQuotationMarkInserted; // @synthesize leftDoubleQuotationMarkInserted=_leftDoubleQuotationMarkInserted;
@property(nonatomic) BOOL leftSingleQuotationMarkInserted; // @synthesize leftSingleQuotationMarkInserted=_leftSingleQuotationMarkInserted;
@property(nonatomic) BOOL lastCharacterWasNumber; // @synthesize lastCharacterWasNumber=_lastCharacterWasNumber;
@property(nonatomic) BOOL capsLockEnabled; // @synthesize capsLockEnabled=_capsLockEnabled;
- (void).cxx_destruct;
- (void)updateTextReplacementEntries;
- (id)mecabraEnvironment;
- (id)currentInlineText;
- (long long)windowType;
- (BOOL)shouldUpdateExistingCandidates;
- (id)higherOrderDataProvider;
- (int)mecabraInputMethodType;
@property(readonly, nonatomic) CIMCandidate *selectedMecabraCandidate;
- (id)inputString;
@property(readonly, nonatomic) NSArray *sortingMethods;
- (id)informationView;
- (id)candidatesForSortingMethod:(id)arg1;
- (id)attributedAnnotationSurfaceWithSyllablesAndAnnotations:(id)arg1;
- (id)insertApostrophesForPinyinString:(void *)arg1;
- (BOOL)shouldShowStrokeInformationWindow;
- (BOOL)shouldShowStrokeInformationWindowForCandidates:(id)arg1;
- (void)enterStrokeSequence;
- (void)forgetSelectedWord;
- (void)selectNextTone;
- (void)selectPreviousTone;
- (void)showPunctationCandidates;
- (void)updateMarkedText;
- (BOOL)handleEventDynamic;
- (void)showCandidateWindowIfNeeded;
- (id)convertedPunctuationFromString:(id)arg1;
- (BOOL)handleITABCEvent;
- (BOOL)handleKeyEvent;
- (void)didHandleCandidateSelectionChanged:(id)arg1;
- (void)didHandleCandidateSelected:(id)arg1;
- (void)commitInlineForSpecialWindow;
- (id)composedText;
- (void)reset;
- (BOOL)isInlineEmpty;
- (void)endSession;
- (void)endSessionAbandoningInlineText;
- (void)endSessionConfirmingInlineText;
- (BOOL)commitInlineTextCandidate;
- (BOOL)commitSelectedCandidate;
- (BOOL)commitCandidateWithSelection:(id)arg1;
- (BOOL)commitCandidate:(id)arg1;
- (void)handleMecabraSettings;
- (void)updateSettings;
- (void)checkSettings:(id)arg1 withClient:(id)arg2;
- (id)helpAnchorName;
- (void)preflightSpellChecker;

@end


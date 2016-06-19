//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRTextElement.h>

@class SCRWebArea;

__attribute__((visibility("hidden")))
@interface SCRWebText : SCRTextElement
{
    SCRWebArea *__webAreaRepresentation;
}

@property(retain, nonatomic, setter=_setWebAreaRepresentation:) SCRWebArea *_webAreaRepresentation; // @synthesize _webAreaRepresentation=__webAreaRepresentation;
- (void)handleNewlineFeedback:(id)arg1 position:(id)arg2 prevLength:(unsigned long long)arg3 length:(unsigned long long)arg4;
- (id)rangeForStartMarker:(id)arg1 withOffset:(unsigned long long)arg2 length:(unsigned long long)arg3;
- (struct _NSRange)currentLineLocalNSRangeForAbsoluteMarkerRange:(id)arg1;
- (BOOL)_containsLineBreaker:(id)arg1;
- (BOOL)allowsDragForUIElement:(id)arg1;
- (void)addLineInfoSummaryToRequest:(id)arg1;
- (BOOL)hasVisitedLinkAtPosition:(id)arg1;
- (id)adjustedPreviousSearchPositionForPosition:(id)arg1;
- (id)nextStyleRangeForPosition:(id)arg1;
- (id)styleRangeForPosition:(id)arg1;
- (void)echoDataInRange:(id)arg1 request:(id)arg2 showOnScreen:(BOOL)arg3 feedbackType:(long long)arg4 withScrolling:(BOOL)arg5;
- (id)textMarkerForString:(id)arg1 startingAtUIElement:(id)arg2 searchOptions:(unsigned long long)arg3;
- (id)paragraphRangeForPosition:(id)arg1;
- (id)paragraphEndMarkerAfterPosition:(id)arg1;
- (id)paragraphStartMarkerBeforePosition:(id)arg1;
- (id)sentenceEndMarkerAfterPosition:(id)arg1;
- (id)sentenceRangeForPosition:(id)arg1;
- (id)lineEndMarkerAfterPosition:(id)arg1;
- (id)leftLineRangeForPosition:(id)arg1;
- (id)lineRangeForPosition:(id)arg1;
- (id)rangeForLine:(unsigned long long)arg1;
- (unsigned long long)lineForPosition:(id)arg1;
- (id)wordRangeForPosition:(id)arg1;
- (BOOL)_isLineStartPosition:(id)arg1 forLineRange:(id)arg2;
- (BOOL)_isLineEndPosition:(id)arg1 forLineRange:(id)arg2;
- (id)wordRangeAfterPosition:(id)arg1;
- (id)wordRangeBeforePosition:(id)arg1;
- (id)characterMarkerAfterPosition:(id)arg1;
- (id)characterMarkerBeforePosition:(id)arg1;
- (id)_characterMarkerFromPosition:(id)arg1 next:(BOOL)arg2;
- (BOOL)synchKeyboardToVOCursor:(id)arg1;
- (BOOL)focusInto:(id)arg1;
- (void)_registerForSelectionChangedNotification;
- (BOOL)performBrailleRouterActionWithIndex:(unsigned long long)arg1 outputRequest:(id)arg2;
- (BOOL)_openContextualMenu;
- (BOOL)openContextualMenu;
- (void)readCurrentParagraph:(id)arg1;
- (void)readCurrentSentence:(id)arg1;
- (BOOL)readPreviousParagraph:(id)arg1;
- (BOOL)readNextParagraph:(id)arg1;
- (BOOL)readPreviousSentence:(id)arg1;
- (BOOL)readNextSentence:(id)arg1;
- (BOOL)readPreviousLine:(id)arg1;
- (BOOL)readNextLine:(id)arg1;
- (struct CGRect)boundsForRange:(id)arg1;
- (id)currentBrailleLineWithEchoRange:(id)arg1;
- (id)attributedStringForRange:(id)arg1;
- (id)stringForRange:(id)arg1;
- (id)valueDescription;
- (id)attributedValueDescription;
- (id)markerForScreenPoint:(struct CGPoint)arg1;
- (id)previousSelectionRange;
- (id)axVisibleCharacterRange;
- (id)visibleCharacterRange;
- (void)setSelectedTextRange:(id)arg1;
- (id)selectedTextRange;
- (BOOL)isSelectionSettable;
- (id)lastPosition;
- (id)firstPosition;
- (BOOL)isContainerElement;
- (BOOL)isWebElement;
- (BOOL)tabOrDrillInShouldTempDisableQuickNav;
- (BOOL)handleEvent:(id)arg1 request:(id)arg2;
- (void)handleTextSelectionChange;
- (Class)classForChildUIElement:(id)arg1 parent:(id)arg2;
- (void)dealloc;

@end


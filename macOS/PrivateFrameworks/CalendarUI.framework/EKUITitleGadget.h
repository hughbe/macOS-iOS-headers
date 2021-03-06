//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarUI/EKUISingleViewGadget.h>

#import <CalendarUI/CalUISuggestionsFieldDelegate-Protocol.h>

@class CUIKEventSuggestionGenerator, CalUISuggestionsField, NSDictionary, NSString;

@interface EKUITitleGadget : EKUISingleViewGadget <CalUISuggestionsFieldDelegate>
{
    BOOL _emptyTitleWasShownIfNeeded;
    CalUISuggestionsField *_titleField;
    double _cachedMaxHeight;
    NSDictionary *_placeholderAttributes;
    CUIKEventSuggestionGenerator *_eventSuggestionGenerator;
}

+ (id)interestedChangeKeys;
- (void).cxx_destruct;
@property(retain) CUIKEventSuggestionGenerator *eventSuggestionGenerator; // @synthesize eventSuggestionGenerator=_eventSuggestionGenerator;
@property(retain) NSDictionary *placeholderAttributes; // @synthesize placeholderAttributes=_placeholderAttributes;
@property double cachedMaxHeight; // @synthesize cachedMaxHeight=_cachedMaxHeight;
@property BOOL emptyTitleWasShownIfNeeded; // @synthesize emptyTitleWasShownIfNeeded=_emptyTitleWasShownIfNeeded;
@property(retain) CalUISuggestionsField *titleField; // @synthesize titleField=_titleField;
- (void)insertNewline;
- (void)suggestionSelected:(id)arg1;
- (id)titleForSuggestion:(id)arg1;
- (id)viewForSuggestion:(id)arg1;
- (void)queryForString:(id)arg1 suggestionsFoundHandler:(CDUnknownBlockType)arg2;
- (void)controlTextDidChange:(id)arg1;
@property(readonly) CalUISuggestionsField *textField;
- (BOOL)performDragOperation:(id)arg1;
- (id)claimedPboardTypes;
- (void)updateWithChanges:(id)arg1;
- (BOOL)isObjectEditable;
- (id)objectTitle;
- (void)updateObject;
- (void)updateTitle:(id)arg1;
- (BOOL)needsExpansion;
- (BOOL)shouldDisplay;
- (BOOL)shouldKeepSuggestedEventsOnTheirOriginalCalendar;
- (BOOL)wantsTimeDetection;
- (void)setObject:(id)arg1;
- (id)control;
- (double)preferredWidth;
- (double)maxHeight;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


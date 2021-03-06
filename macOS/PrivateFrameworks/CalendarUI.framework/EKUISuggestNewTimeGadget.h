//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarUI/EKUILabeledGadget.h>

#import <CalendarUI/EKUISummary-Protocol.h>

@class EKUIPopUpButton, EKUISummaryTextButton, NSString, NSView;

@interface EKUISuggestNewTimeGadget : EKUILabeledGadget <EKUISummary>
{
    NSView *_container;
    EKUISummaryTextButton *_textField;
    EKUIPopUpButton *_statusPicker;
}

+ (id)interestedChangeKeys;
- (void).cxx_destruct;
@property(retain) EKUIPopUpButton *statusPicker; // @synthesize statusPicker=_statusPicker;
@property(retain) EKUISummaryTextButton *textField; // @synthesize textField=_textField;
@property(retain) NSView *container; // @synthesize container=_container;
- (id)summaryString;
- (id)attributedSummaryString;
- (void)updateWithChanges:(id)arg1;
- (id)control;
- (double)pixelsBetweenLabelAndControl;
- (double)baselineOffset;
- (BOOL)shouldDisplay;
- (BOOL)isEditable;
- (BOOL)needsExpansion;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


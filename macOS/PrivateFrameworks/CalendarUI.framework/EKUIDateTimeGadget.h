//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarUI/EKUILabeledGadget.h>

#import <CalendarUI/IIDatePickerWithMiniCalDelegate-Protocol.h>

@class IIDatePickerWithMiniCal, NSString;

@interface EKUIDateTimeGadget : EKUILabeledGadget <IIDatePickerWithMiniCalDelegate>
{
    BOOL _shouldSuppressMiniCal;
    IIDatePickerWithMiniCal *_datePicker;
}

+ (id)interestedChangeKeys;
- (void).cxx_destruct;
@property BOOL shouldSuppressMiniCal; // @synthesize shouldSuppressMiniCal=_shouldSuppressMiniCal;
@property(retain) IIDatePickerWithMiniCal *datePicker; // @synthesize datePicker=_datePicker;
- (double)preferredControlWidth;
- (double)baselineOffset;
- (double)pixelsBetweenLabelAndControl;
- (double)additionalVerticalOffsetForPickerPopover;
- (void)datePickerDidResignFirstResponder:(id)arg1;
- (void)datePickerWithMiniCalChanged:(id)arg1;
- (BOOL)datePickerShouldDisplayTimeSuggestions:(id)arg1;
- (BOOL)datePickerShouldDisplayMiniCal:(id)arg1;
- (void)setExpanded:(BOOL)arg1;
- (id)startDate;
- (void)datePickerChangedToDate:(id)arg1;
- (void)updateDatePickerWithDate:(id)arg1;
- (void)updateWithChanges:(id)arg1;
- (BOOL)shouldDisplayWhenNotEditable;
- (BOOL)shouldDisplay;
- (id)control;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


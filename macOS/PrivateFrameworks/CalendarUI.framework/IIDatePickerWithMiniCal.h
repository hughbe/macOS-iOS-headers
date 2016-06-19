//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "IIDatePickerDelegate.h"
#import "IIDatePickerPanelDelegate.h"
#import "NSDatePickerCellDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class EKViewController, IIClosableDatePicker, IIDatePicker, IIDatePickerPanel, IIDatePickerPanelContentView, NSArray, NSDate, NSDatePicker, NSPanel, NSString, NSTableView;

@interface IIDatePickerWithMiniCal : NSView <NSDatePickerCellDelegate, IIDatePickerDelegate, IIDatePickerPanelDelegate, NSTableViewDelegate, NSTableViewDataSource>
{
    IIDatePicker *_textDatePicker;
    IIDatePicker *_textDatePickerForPanel;
    IIDatePicker *_textTimePicker;
    IIClosableDatePicker *_calDatePicker;
    IIDatePickerPanel *_calPanel;
    NSPanel *_timeSuggestionPanel;
    NSTableView *_timeSuggestionTable;
    NSArray *_timeDescriptions;
    NSDate *_sourceDate;
    BOOL _calendarDatePickerShown;
    BOOL _userDismissedCalendarPicker;
    BOOL _openingCalendarPicker;
    id <IIDatePickerWithMiniCalDelegate> _delegate;
    double _pixelsBetweenDateAndTime;
    EKViewController *_viewController;
    IIDatePickerPanelContentView *_calPanelContentView;
    NSView *_nextGadget;
    long long _indexOfSelectedTimeSuggestion;
    NSArray *_horizontalConstraints;
}

+ (double)_maximumWidthFromAttributedStringArray:(id)arg1;
+ (id)_selectedDurationDescriptions;
+ (id)_durationDescriptions;
+ (id)_timeDescriptionsForDate:(id)arg1 inTimeZone:(id)arg2;
@property(retain) NSArray *horizontalConstraints; // @synthesize horizontalConstraints=_horizontalConstraints;
@property BOOL openingCalendarPicker; // @synthesize openingCalendarPicker=_openingCalendarPicker;
@property long long indexOfSelectedTimeSuggestion; // @synthesize indexOfSelectedTimeSuggestion=_indexOfSelectedTimeSuggestion;
@property BOOL userDismissedCalendarPicker; // @synthesize userDismissedCalendarPicker=_userDismissedCalendarPicker;
@property __weak NSView *nextGadget; // @synthesize nextGadget=_nextGadget;
@property(retain) IIDatePickerPanelContentView *calPanelContentView; // @synthesize calPanelContentView=_calPanelContentView;
@property(retain) IIDatePicker *textDatePickerForPanel; // @synthesize textDatePickerForPanel=_textDatePickerForPanel;
@property(retain) IIClosableDatePicker *calDatePicker; // @synthesize calDatePicker=_calDatePicker;
@property __weak EKViewController *viewController; // @synthesize viewController=_viewController;
@property double pixelsBetweenDateAndTime; // @synthesize pixelsBetweenDateAndTime=_pixelsBetweenDateAndTime;
@property(retain) NSDate *sourceDate; // @synthesize sourceDate=_sourceDate;
@property(retain) NSArray *timeDescriptions; // @synthesize timeDescriptions=_timeDescriptions;
@property(retain) NSTableView *timeSuggestionTable; // @synthesize timeSuggestionTable=_timeSuggestionTable;
@property BOOL calendarDatePickerShown; // @synthesize calendarDatePickerShown=_calendarDatePickerShown;
@property __weak id <IIDatePickerWithMiniCalDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSDatePicker *textTimePicker; // @synthesize textTimePicker=_textTimePicker;
@property(retain) IIDatePicker *textDatePicker; // @synthesize textDatePicker=_textDatePicker;
- (void).cxx_destruct;
- (void)_updateSuggestionPanelSize;
- (void)_setTimeToSuggestionAtIndex:(long long)arg1;
- (void)_timeSuggestionPicked:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)selectPreviousKeyViewHidingPanel:(id)arg1;
- (void)selectNextKeyViewHidingPanel:(id)arg1;
- (void)datePickerPanelDidResignKeyWindow:(id)arg1;
- (void)datePickerCell:(id)arg1 validateProposedDateValue:(id *)arg2 timeInterval:(double *)arg3;
- (BOOL)_datePickerCell:(id)arg1 receivedKeyDown:(id)arg2;
- (BOOL)_datePickerCell:(id)arg1 receivedMouseDown:(id)arg2;
- (void)_datePickerCellDidResignFirstResponder:(id)arg1;
- (void)_datePickerCellDidBecomeFirstResponder:(id)arg1;
- (void)_inspectorWasScrolled:(id)arg1;
- (void)_updateSelectedTimeSuggestionCheckbox;
- (void)_hideTimeSuggestions;
- (void)_displayTimeSuggestions;
- (void)_hideCalendarPickerAndSelectDatePicker;
- (void)_hideCalendarPicker;
- (void)_displayCalendarPicker;
- (void)_textTimePickerChanged:(id)arg1;
- (void)_calPickerChanged:(id)arg1;
- (void)_textDatePickerForPanelChanged:(id)arg1;
- (void)_textDatePickerChanged:(id)arg1;
- (void)_updateAllPickersWithDate:(id)arg1;
- (id)_calendar;
- (void)setMinDate:(id)arg1;
- (void)clearDelegates;
- (double)baselineOffsetFromBottom;
- (void)setEnabled:(BOOL)arg1;
- (void)setDateValue:(id)arg1;
- (id)dateValue;
- (void)showElements:(long long)arg1;
- (void)setTimeZone:(id)arg1;
- (id)cell;
- (void)setNextKeyView:(id)arg1;
- (void)dealloc;
- (void)setBackgroundColor:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setFont:(id)arg1;
@property(readonly, nonatomic) NSPanel *timeSuggestionPanel;
@property(readonly) IIDatePickerPanel *calPanel;
- (BOOL)allowsVibrancy;
- (void)setup;
- (void)awakeFromNib;
- (id)initWithViewController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


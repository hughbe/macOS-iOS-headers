//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UXKit/UXViewController.h>

@class KHCalendarProjectLayoutsDataSource, NSPopUpButton, NSStepper, NSTextField;

@interface KHCalendarDateRangePickerController : UXViewController
{
    NSPopUpButton *_monthMenuButton;
    NSPopUpButton *_yearMenuButton;
    NSPopUpButton *_numberOfMonthsMenuButton;
    NSTextField *_monthNumberField;
    NSStepper *_monthNumberStepper;
    NSTextField *_startLabel;
    NSTextField *_numberOfMonthsLabel;
    KHCalendarProjectLayoutsDataSource *_dataSource;
}

- (void).cxx_destruct;
@property __weak KHCalendarProjectLayoutsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain) NSTextField *numberOfMonthsLabel; // @synthesize numberOfMonthsLabel=_numberOfMonthsLabel;
@property(retain) NSTextField *startLabel; // @synthesize startLabel=_startLabel;
@property(retain) NSStepper *monthNumberStepper; // @synthesize monthNumberStepper=_monthNumberStepper;
@property(retain) NSTextField *monthNumberField; // @synthesize monthNumberField=_monthNumberField;
@property(retain) NSPopUpButton *numberOfMonthsMenuButton; // @synthesize numberOfMonthsMenuButton=_numberOfMonthsMenuButton;
@property(retain) NSPopUpButton *yearMenuButton; // @synthesize yearMenuButton=_yearMenuButton;
@property(retain) NSPopUpButton *monthMenuButton; // @synthesize monthMenuButton=_monthMenuButton;
- (void)numberOfMonthsChanged:(id)arg1;
- (void)changeStartDate:(id)arg1;
- (void)loadView;
- (id)initWithProjectDatasource:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/NSObject-Protocol.h>

@class NSArray, NSDate, NSNumber;

@protocol EKProtocolRecurrenceRule <NSObject>
@property(readonly, nonatomic) BOOL ruleIsForFloatingItem;
@property(readonly, nonatomic) BOOL ruleIsForAllDayItem;
@property(readonly, copy, nonatomic) NSArray *weeksOfTheYear;
@property(readonly, copy, nonatomic) NSArray *setPositions;
@property(readonly, copy, nonatomic) NSArray *monthsOfTheYear;
@property(readonly, copy, nonatomic) NSNumber *intervalNumber;
@property(readonly, copy, nonatomic) NSNumber *frequencyNumber;
@property(readonly, copy, nonatomic) NSNumber *firstDayOfTheWeekNumber;
@property(readonly, copy, nonatomic) NSDate *endDate;
@property(readonly, copy, nonatomic) NSArray *daysOfTheYear;
@property(readonly, copy, nonatomic) NSArray *daysOfTheWeek;
@property(readonly, copy, nonatomic) NSArray *daysOfTheMonth;
@property(readonly, copy, nonatomic) NSNumber *countNumber;
@end


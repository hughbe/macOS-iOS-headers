//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ExchangeWebServices/EWSRecurrencePatternBaseType.h>

#import <ExchangeWebServices/XSDefinitionProvider-Protocol.h>

@class NSString;

@interface EWSRelativeYearlyRecurrencePatternType : EWSRecurrencePatternBaseType <XSDefinitionProvider>
{
    long long _DaysOfWeek;
    long long _DayOfWeekIndex;
    long long _Month;
}

+ (id)definition;
@property(nonatomic) long long Month; // @synthesize Month=_Month;
@property(nonatomic) long long DayOfWeekIndex; // @synthesize DayOfWeekIndex=_DayOfWeekIndex;
@property(nonatomic) long long DaysOfWeek; // @synthesize DaysOfWeek=_DaysOfWeek;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarAgentLink/CalStoreRemoteObject.h>

@interface CalStoreRemoteCALWeekDayNumber : CalStoreRemoteObject
{
    unsigned long long _day;
    long long _number;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long number; // @synthesize number=_number;
@property(nonatomic) unsigned long long day; // @synthesize day=_day;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface _CDQueryRankerParameters : NSObject
{
    unsigned long long _resultLimit;
    unsigned long long _minimumTermFrequency;
    double _scoreThreshold;
    NSDate *_referenceDate;
    double _eventWindow;
    double _timeHalfLife;
    double _timeOfDayHalfLife;
    double _timeOfWeekHalfLife;
    double _timeWeight;
    double _timeOfDayWeight;
    double _timeOfWeekWeight;
    double _durationWeight;
    double _engagementWeight;
    double _renderWeight;
    double _offset;
    double _sameWeekPeriodWeight;
    double _diffWeekPeriodWeight;
    CDUnknownBlockType _aggregation;
}

+ (id)parametersFromDictionary:(id)arg1;
+ (id)parametersForModel:(unsigned long long)arg1;
+ (id)defaultParameters;
@property(copy) CDUnknownBlockType aggregation; // @synthesize aggregation=_aggregation;
@property double diffWeekPeriodWeight; // @synthesize diffWeekPeriodWeight=_diffWeekPeriodWeight;
@property double sameWeekPeriodWeight; // @synthesize sameWeekPeriodWeight=_sameWeekPeriodWeight;
@property double offset; // @synthesize offset=_offset;
@property double renderWeight; // @synthesize renderWeight=_renderWeight;
@property double engagementWeight; // @synthesize engagementWeight=_engagementWeight;
@property double durationWeight; // @synthesize durationWeight=_durationWeight;
@property double timeOfWeekWeight; // @synthesize timeOfWeekWeight=_timeOfWeekWeight;
@property double timeOfDayWeight; // @synthesize timeOfDayWeight=_timeOfDayWeight;
@property double timeWeight; // @synthesize timeWeight=_timeWeight;
@property double timeOfWeekHalfLife; // @synthesize timeOfWeekHalfLife=_timeOfWeekHalfLife;
@property double timeOfDayHalfLife; // @synthesize timeOfDayHalfLife=_timeOfDayHalfLife;
@property double timeHalfLife; // @synthesize timeHalfLife=_timeHalfLife;
@property double eventWindow; // @synthesize eventWindow=_eventWindow;
@property(retain) NSDate *referenceDate; // @synthesize referenceDate=_referenceDate;
@property double scoreThreshold; // @synthesize scoreThreshold=_scoreThreshold;
@property unsigned long long minimumTermFrequency; // @synthesize minimumTermFrequency=_minimumTermFrequency;
@property unsigned long long resultLimit; // @synthesize resultLimit=_resultLimit;
- (void).cxx_destruct;

@end


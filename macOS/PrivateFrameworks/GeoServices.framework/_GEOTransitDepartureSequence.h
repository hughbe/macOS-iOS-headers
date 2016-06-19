//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOTransitDepartureSequence.h"

@class GEOPDDepartureSequence, NSArray, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _GEOTransitDepartureSequence : NSObject <GEOTransitDepartureSequence>
{
    GEOPDDepartureSequence *_sequence;
    id <GEOTransitLine> _line;
    NSSet *_nextStopIDs;
    long long _displayStyle;
}

@property(readonly, nonatomic) NSSet *nextStopIDs;
- (id)operatingHoursForDate:(id)arg1 inTimeZone:(id)arg2;
- (BOOL)isDepartureDateInactive:(id)arg1 withReferenceDate:(id)arg2;
- (id)frequencyToDescribeAtDate:(id)arg1;
- (double)frequencyForSortingAtDate:(id)arg1;
- (BOOL)hasFrequencyAtDate:(id)arg1;
- (id)departuresValidForDate:(id)arg1;
- (id)firstDepartureValidForDate:(id)arg1;
- (id)firstOpenOperatingDateOnOrAfterDate:(id)arg1;
- (id)firstDepartureFrequencyOnOrAfterDate:(id)arg1;
- (unsigned long long)numberOfDeparturesAfterDate:(id)arg1;
- (id)firstDepartureOnOrAfterDate:(id)arg1;
- (id)firstDepartureAfterDate:(id)arg1;
- (void)_enumerateDeparturesValidForDate:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (BOOL)isValidForDate:(id)arg1 inTimeZone:(id)arg2;
@property(readonly, nonatomic) long long displayStyle;
@property(readonly, nonatomic) BOOL isLowFrequency;
@property(readonly, nonatomic) NSArray *operatingHours;
@property(readonly, nonatomic) NSString *headsign;
@property(readonly, nonatomic) NSString *direction;
@property(readonly, nonatomic) id <GEOTransitLine> line;
@property(readonly, nonatomic) NSArray *frequencies;
@property(readonly, nonatomic) NSArray *departures;
- (void)dealloc;
- (id)initWithSequence:(id)arg1 line:(id)arg2 pbLine:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


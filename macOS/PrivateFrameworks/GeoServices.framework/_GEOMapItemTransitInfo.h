//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOMapItemTransitInfo.h"

@class GEOPDTransitInfo, GEOPDTransitSchedule, NSArray, NSDate, NSString, NSTimeZone;

__attribute__((visibility("hidden")))
@interface _GEOMapItemTransitInfo : NSObject <GEOMapItemTransitInfo>
{
    GEOPDTransitInfo *_transitInfo;
    GEOPDTransitSchedule *_transitSchedule;
    NSArray *_systems;
    NSArray *_lines;
    NSArray *_departureSequences;
    NSTimeZone *_timeZone;
    NSArray *_incidents;
    BOOL _hasTransitIncidentComponent;
    NSDate *_incidentExpirationDate;
    NSArray *_connections;
    NSString *_displayName;
}

@property(readonly, nonatomic) BOOL hasTransitIncidentComponent; // @synthesize hasTransitIncidentComponent=_hasTransitIncidentComponent;
- (id)inactiveLinesForSystem:(id)arg1 relativeToDateFromBlock:(CDUnknownBlockType)arg2 excludingIncidentEntities:(id)arg3;
- (id)serviceResumesDateForLine:(id)arg1 excludingIncidentEntities:(id)arg2 afterDate:(id)arg3 blocked:(out char *)arg4;
- (id)sequencesForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 direction:(id)arg3 validForDateFromBlock:(CDUnknownBlockType)arg4;
- (id)allSequencesForSystem:(id)arg1 direction:(id)arg2;
- (id)directionsForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 validForDateFromBlock:(CDUnknownBlockType)arg3 hasSequencesWithNoDirection:(out char *)arg4;
- (id)departureSequencesForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 direction:(id)arg3 validForDateFromBlock:(CDUnknownBlockType)arg4;
- (id)_departureSequencesForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 ignoreDirectionFilter:(BOOL)arg3 direction:(id)arg4 validForDateFromBlock:(CDUnknownBlockType)arg5;
- (unsigned long long)numAdditionalDeparturesForSequence:(id)arg1;
@property(readonly, nonatomic) NSDate *lastFullScheduleValidDate;
@property(readonly, nonatomic) NSArray *departureSequences;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) BOOL isTransitIncidentsTTLExpired;
@property(readonly, nonatomic) NSArray *incidents;
- (id)linesForSystem:(id)arg1;
@property(readonly, nonatomic) unsigned long long linesCount;
@property(readonly, nonatomic) NSArray *lines;
@property(readonly, nonatomic) unsigned long long systemsCount;
@property(readonly, nonatomic) NSArray *systems;
@property(readonly, nonatomic) NSArray *connections;
@property(readonly, nonatomic) NSArray *labelItems;
- (void)dealloc;
- (id)initWithTransitInfo:(id)arg1 schedule:(id)arg2 timeZone:(id)arg3 incidents:(id)arg4 hasTransitIncidentComponent:(BOOL)arg5 incidentExpirationDate:(id)arg6 providerID:(int)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


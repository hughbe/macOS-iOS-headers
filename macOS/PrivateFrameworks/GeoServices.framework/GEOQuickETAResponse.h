//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOLocation, GEOQuickETATransitDeparturesInfo, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOQuickETAResponse : NSObject
{
    GEOLocation *_sourceLocation;
    GEOLocation *_destinationLocation;
    unsigned int _responseETASeconds;
    unsigned int _baselineETASeconds;
    double _distance;
    GEOQuickETATransitDeparturesInfo *_transitDeparturesInfo;
    double _distanceToDepartureStop;
    double _walkingDurationToDepartureStop;
    NSMutableArray *_sortedETAs;
}

@property(readonly, nonatomic) NSMutableArray *sortedETAs; // @synthesize sortedETAs=_sortedETAs;
@property(readonly, nonatomic) double walkingDurationToDepartureStop; // @synthesize walkingDurationToDepartureStop=_walkingDurationToDepartureStop;
@property(readonly, nonatomic) double distanceToDepartureStop; // @synthesize distanceToDepartureStop=_distanceToDepartureStop;
@property(readonly, nonatomic) GEOQuickETATransitDeparturesInfo *transitDeparturesInfo; // @synthesize transitDeparturesInfo=_transitDeparturesInfo;
@property(readonly, nonatomic) double distance; // @synthesize distance=_distance;
@property(readonly, nonatomic) unsigned int baselineETASeconds; // @synthesize baselineETASeconds=_baselineETASeconds;
@property(readonly, nonatomic) unsigned int responseETASeconds; // @synthesize responseETASeconds=_responseETASeconds;
@property(readonly, nonatomic) GEOLocation *destinationLocation; // @synthesize destinationLocation=_destinationLocation;
@property(readonly, nonatomic) GEOLocation *sourceLocation; // @synthesize sourceLocation=_sourceLocation;
- (void)dealloc;
- (id)initWithDirectionsResponse:(id)arg1 fromRequest:(id)arg2;
- (id)initWithETAResult:(id)arg1 fromRequest:(id)arg2;

@end


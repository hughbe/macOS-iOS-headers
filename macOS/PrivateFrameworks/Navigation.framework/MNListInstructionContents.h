//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNInstructionContents.h"

@class GEOComposedWaypoint, NSArray, NSString;

@interface MNListInstructionContents : NSObject <MNInstructionContents>
{
    double _distance;
    id <GEOServerFormattedString> _distanceFormat;
    id <GEOServerFormattedString> _instructionFormat;
    int _maneuverType;
    int _transportType;
    NSString *_intersectionName;
    NSString *_destinationName;
    NSString *_exitNumber;
    NSArray *_branchNames;
    NSArray *_towardNames;
    int _junctionAngle;
    BOOL _toFreeway;
    BOOL _suppressNames;
    BOOL _suppressFallback;
    GEOComposedWaypoint *_destination;
}

+ (id)contentsWithManeuverType:(int)arg1 transportType:(int)arg2;
+ (id)contentsWithSubstep:(id)arg1 transportType:(int)arg2;
+ (id)contentsWithStep:(id)arg1 transportType:(int)arg2;
@property(nonatomic) BOOL suppressFallback; // @synthesize suppressFallback=_suppressFallback;
@property(nonatomic) BOOL suppressNames; // @synthesize suppressNames=_suppressNames;
@property(nonatomic) int junctionAngle; // @synthesize junctionAngle=_junctionAngle;
@property(nonatomic) BOOL toFreeway; // @synthesize toFreeway=_toFreeway;
@property(retain, nonatomic) NSArray *towardNames; // @synthesize towardNames=_towardNames;
@property(retain, nonatomic) NSArray *branchNames; // @synthesize branchNames=_branchNames;
@property(retain, nonatomic) NSString *exitNumber; // @synthesize exitNumber=_exitNumber;
@property(retain, nonatomic) NSString *destinationName; // @synthesize destinationName=_destinationName;
@property(retain, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) NSString *intersectionName; // @synthesize intersectionName=_intersectionName;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(nonatomic) int maneuverType; // @synthesize maneuverType=_maneuverType;
@property(retain, nonatomic) id <GEOServerFormattedString> instructionFormat; // @synthesize instructionFormat=_instructionFormat;
@property(retain, nonatomic) id <GEOServerFormattedString> distanceFormat; // @synthesize distanceFormat=_distanceFormat;
@property(nonatomic) double distance; // @synthesize distance=_distance;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL hasServerContent;
- (id)instructionForStage:(unsigned long long)arg1 distance:(double)arg2;
- (id)instructionWithShorterAlternatives;
- (id)instruction;
- (id)instructionWithShorterAlternatives:(id *)arg1;
- (id)stringForDistance:(double)arg1 abbreviateUnits:(BOOL)arg2 detail:(long long)arg3;
@property(readonly, nonatomic) long long context;
- (id)_walkingInstructionForStart;
- (id)_walkingInstructionForRoundabout;
- (id)_walkingInstructionForUTurn;
- (id)_walkingInstructionForContinue;
- (id)_walkingInstructionForTurn;
- (id)_instructionForChangeHighway;
- (id)_instructionForExit;
- (id)_instructionForStart;
- (id)_instructionForArrival;
- (id)_instructionForFerry;
- (id)_instructionForRoundabout;
- (id)_instructionForUTurn;
- (id)_instructionForContinue;
- (id)_instructionForBranch;
- (id)_instructionForTurn;
- (id)_instructionsForSigns;
- (id)description;
@property(readonly, nonatomic) NSString *primaryName;
@property(readonly, nonatomic) BOOL hasName;
@property(readonly, nonatomic) BOOL useTowardNames;
@property(readonly, nonatomic) BOOL useDestinationName;
@property(readonly, nonatomic) BOOL useIntersectionName;
@property(readonly, nonatomic) BOOL useRoadName;
@property(readonly, nonatomic) BOOL isExitManeuver;
@property(retain, nonatomic) NSString *roadName;
- (void)_populateFromSubstep:(id)arg1;
- (void)_populateFromStep:(id)arg1;
- (id)_exitNumberFromNameInfo:(id)arg1;
- (id)_stringFromNameInfo:(id)arg1;
- (void)_setName:(id)arg1 signposts:(id)arg2;
- (id)init;

@end


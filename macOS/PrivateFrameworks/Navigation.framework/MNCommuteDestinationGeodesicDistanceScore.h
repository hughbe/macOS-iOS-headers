//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/MNCommuteDestinationScore.h>

#import <Navigation/MNCommuteDestinationLocationScore-Protocol.h>

@class NSMutableArray;

@interface MNCommuteDestinationGeodesicDistanceScore : MNCommuteDestinationScore <MNCommuteDestinationLocationScore>
{
    int _score;
    NSMutableArray *_geodesicDistances;
    double _slope;
}

+ (double)weight;
- (void).cxx_destruct;
@property(nonatomic) double slope; // @synthesize slope=_slope;
@property(retain, nonatomic) NSMutableArray *geodesicDistances; // @synthesize geodesicDistances=_geodesicDistances;
- (void)_updateScoreAndDestinationInvalid;
- (id)descriptionExtras;
- (BOOL)destinationInvalid;
- (int)score;
- (void)updateScoreIfPossible;
- (void)updateForLocation:(id)arg1;
- (id)initWithDestination:(id)arg1;

@end


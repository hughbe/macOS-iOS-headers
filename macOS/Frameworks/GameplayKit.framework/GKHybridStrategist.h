//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameplayKit/GKStrategist-Protocol.h>

@class NSString;
@protocol GKGameModel, GKRandom;

__attribute__((visibility("hidden")))
@interface GKHybridStrategist : NSObject <GKStrategist>
{
    struct GKCHybridStrategist *_hybridStrategist;
}

- (id)bestMoveForActivePlayer;
- (BOOL)validateRandomSource;
- (BOOL)validateGameModel:(id)arg1;
- (void)dealloc;
- (id)init;
@property(nonatomic) unsigned long long maxLookAheadDepth;
@property(nonatomic) unsigned long long explorationParameter;
@property(nonatomic) unsigned long long budget;
@property(retain, nonatomic) id <GKRandom> randomSource;
@property(retain, nonatomic) id <GKGameModel> gameModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


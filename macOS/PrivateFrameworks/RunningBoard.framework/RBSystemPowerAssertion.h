//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoard/RBPowerAssertion.h>

@class RBSystemState;

__attribute__((visibility("hidden")))
@interface RBSystemPowerAssertion : RBPowerAssertion
{
    RBSystemState *_state;
}

- (void).cxx_destruct;
@property(copy, nonatomic) RBSystemState *state; // @synthesize state=_state;
- (int)_targetPid;
- (id)_preventIdleSleepIdentifiers;
- (id)init;

@end


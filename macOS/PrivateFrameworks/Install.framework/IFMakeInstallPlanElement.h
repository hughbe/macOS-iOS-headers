//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Install/IFInstallQueueElement.h>

@interface IFMakeInstallPlanElement : IFInstallQueueElement
{
}

- (long long)run;
- (BOOL)_noteComponents;
- (BOOL)_applyHints;
- (BOOL)_resolveActions;
- (BOOL)_setupPlan;
- (id)description;
- (id)logDescription;

@end


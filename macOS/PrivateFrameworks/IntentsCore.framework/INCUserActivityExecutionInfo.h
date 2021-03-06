//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IntentsCore/INCExecutionInfo.h>

@class NSString;

@interface INCUserActivityExecutionInfo : INCExecutionInfo
{
    NSString *_userActivityType;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *userActivityType; // @synthesize userActivityType=_userActivityType;
- (BOOL)canRunOnLocalDevice;
- (id)_initWithUserActivityType:(id)arg1 launchableAppBundleId:(id)arg2 containingAppBundleURL:(id)arg3;
- (id)initWithUserActivityType:(id)arg1 launchableAppBundleId:(id)arg2;

@end


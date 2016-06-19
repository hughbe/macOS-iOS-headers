//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol _DASActivitySchedulerIntrospectingServer <NSObject>
- (void)startedActivities:(NSArray *)arg1;
- (void)forceRunActivities:(NSArray *)arg1;
- (void)activityRunStatisticsWithHandler:(void (^)(NSDictionary *))arg1;
- (void)scoresForActivityWithName:(NSString *)arg1 withHandler:(void (^)(NSArray *))arg2;
- (void)runningGroupActivitiesWithHandler:(void (^)(NSArray *))arg1;
- (void)runningActivitiesWithHandler:(void (^)(NSArray *))arg1;
- (void)submittedActivitiesWithHandler:(void (^)(NSArray *))arg1;

@optional
- (void)cancelActivities:(NSArray *)arg1;
@end


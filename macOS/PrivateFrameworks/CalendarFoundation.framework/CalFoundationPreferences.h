//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CalPreferences, NSArray, NSString;

@interface CalFoundationPreferences : NSObject
{
    CalPreferences *_preferences;
}

+ (id)shared;
- (void).cxx_destruct;
@property(nonatomic) double simulatedDateForNowOffset;
@property(readonly, nonatomic) NSArray *logSimpleConfiguration;
@property(readonly, nonatomic) NSString *logFilePath;
@property(readonly, nonatomic) BOOL logEmitUserNotifications;
@property(readonly, nonatomic) BOOL logAutoFlush;
- (id)init;

@end


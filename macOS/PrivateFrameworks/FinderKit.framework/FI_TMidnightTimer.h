//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface FI_TMidnightTimer : NSObject
{
    struct TNSRef<NSTimer *, void> _midnightTimer;
    struct TNSRef<NSDate *, void> _midnightFireDate;
    struct TNSRef<NSDateComponents *, void> _dateComponents;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)checkTimersAfterSleeping:(id)arg1;
- (void)_checkTimerAndFireDate;
- (void)_setUpMidnightTimer;
- (void)_midnightPassed;
- (void)_systemTimeChanged:(id)arg1;
- (void)postNotificationIfDayChanged;
- (void)aboutToTearDown;
- (id)init;

@end


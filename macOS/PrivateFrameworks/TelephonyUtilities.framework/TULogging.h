//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TULogging : NSObject
{
}

+ (BOOL)sendDirectoryToCrashReporter:(id)arg1 error:(id *)arg2;
+ (void)unregisterForShouldLogChangedNotification;
+ (void)registerForShouldLogChangedNotification;
+ (void)disablePhoneLogging;
+ (void)enablePhoneLogging;

@end


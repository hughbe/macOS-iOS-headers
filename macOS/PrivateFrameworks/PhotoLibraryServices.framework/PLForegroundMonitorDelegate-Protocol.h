//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSString, PLForegroundMonitor;

@protocol PLForegroundMonitorDelegate <NSObject>
- (void)foregroundMonitor:(PLForegroundMonitor *)arg1 changedStateToForeground:(BOOL)arg2 forBundleIdentifier:(NSString *)arg3;
@end


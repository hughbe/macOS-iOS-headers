//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSRunLoop.h>

@interface NSRunLoop (IFExtensions)
+ (void)flushEventsQueuedOnMainRunLoop;
+ (void)waitWithoutBlockingMainThread:(double)arg1;
+ (BOOL)currentRunLoopIsMainRunLoop;
@end


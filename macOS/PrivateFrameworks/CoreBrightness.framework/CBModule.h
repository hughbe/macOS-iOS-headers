//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface CBModule : NSObject
{
    CDUnknownBlockType _notificationBlock;
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)unregisterNotificationBlock;
- (void)registerNotificationBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end


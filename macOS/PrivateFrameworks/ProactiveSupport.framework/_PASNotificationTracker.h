//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface _PASNotificationTracker : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    unsigned long long _nextNotificationToken;
    NSMutableDictionary *_observers;
}

- (void).cxx_destruct;
- (void)issueNotificationAsyncWithContext:(id)arg1;
- (BOOL)deregisterHandlerAsyncWithToken:(id)arg1;
- (BOOL)deregisterHandlerWithToken:(id)arg1;
- (BOOL)_deregisterHandlerWithToken:(id)arg1 waitOnPending:(BOOL)arg2;
- (id)registerWithQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end


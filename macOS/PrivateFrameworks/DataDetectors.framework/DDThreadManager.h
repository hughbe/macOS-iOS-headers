//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface DDThreadManager : NSObject
{
    NSOperationQueue *_queue;
    BOOL _stopping;
}

- (void).cxx_destruct;
- (void)cancelOperationForIdentifier:(id)arg1;
- (id)queueTextToScanInController:(id)arg1 identifier:(id)arg2 delegate:(id)arg3 retryCount:(int)arg4;
- (void)deactivate;
- (id)init;

@end


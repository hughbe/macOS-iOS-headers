//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue;

@interface FileTransferIconLoader : NSObject
{
    NSOperationQueue *_queue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)queueURL:(id)arg1 forSize:(double)arg2 withDelegate:(id)arg3;
- (void)queueURL:(id)arg1 bookmark:(id)arg2 forSize:(double)arg3 withDelegate:(id)arg4;
- (void)cancelNotificationsForDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

@end


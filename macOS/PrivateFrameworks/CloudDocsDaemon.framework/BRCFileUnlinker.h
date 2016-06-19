//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

__attribute__((visibility("hidden")))
@interface BRCFileUnlinker : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_cachePurgeSource;
    NSString *_unlinkRootPath;
}

+ (id)fileUnlinker;
- (void).cxx_destruct;
- (BOOL)renameAndUnlinkInBackgroundItemAt:(int)arg1 path:(id)arg2;
- (void)forcePurgeWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_purge;
- (BOOL)renameAndUnlinkInBackgroundItemAtPath:(id)arg1;
- (void)resume;
- (id)init;

@end


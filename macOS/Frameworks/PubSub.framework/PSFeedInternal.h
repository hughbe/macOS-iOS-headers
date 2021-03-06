//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PubSub/PSInternal.h>

@class NSMutableSet, PSFeedSettings;

__attribute__((visibility("hidden")))
@interface PSFeedInternal : PSInternal
{
    struct FeedCore *feedCore;
    struct FunctionReceiver<Foundation::Notification, PSFeed *> *feedListener;
    BOOL refreshing;
    BOOL publishing;
    int unreadCount;
    NSMutableSet *addedEntries;
    NSMutableSet *deletedEntries;
    NSMutableSet *updatedEntries;
    NSMutableSet *flaggedEntries;
    PSFeedSettings *temporarySettings;
}

- (void)finalize;
- (void)_clearFeedListener;
- (void)setFeedCore:(struct FeedCore *)arg1;

@end


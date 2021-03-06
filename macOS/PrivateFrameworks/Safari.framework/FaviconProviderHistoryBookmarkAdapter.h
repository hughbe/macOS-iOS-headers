//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, WBSCacheRetainReleasePolicy;
@protocol FaviconProviderHistoryBookmarkAdapterDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FaviconProviderHistoryBookmarkAdapter : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSCacheRetainReleasePolicy *_cachePolicy;
    BOOL _didNotifyDelegate;
    long long _bookmarksState;
    long long _historyState;
    NSArray *_observers;
    id <FaviconProviderHistoryBookmarkAdapterDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FaviconProviderHistoryBookmarkAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_notifyDelegateIfReady;
- (void)_bookmarksDidReload;
- (void)_bookmarkURLDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_historyWasLoadedInMemory;
- (void)_historyWasLoaded;
- (void)_historyItemsWereRemoved:(id)arg1;
- (void)_historyItemsWereAdded:(id)arg1;
- (void)dealloc;
- (id)init;

@end


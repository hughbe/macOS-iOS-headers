//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSSiteMetadataProvider.h"

@class NSCache, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface BookmarkFolderTouchIconProvider : NSObject <WBSSiteMetadataProvider>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_requestsToRequestInfos;
    NSCache *_folderUUIDsToTouchIconInfo;
    id <WBSSiteMetadataProviderDelegate> _providerDelegate;
}

+ (id)defaultFolderIcon;
@property(nonatomic) __weak id <WBSSiteMetadataProviderDelegate> providerDelegate; // @synthesize providerDelegate=_providerDelegate;
- (void).cxx_destruct;
- (void)_bookmarksWereRemoved:(id)arg1;
- (id)_thumbnailImageViewForImage:(id)arg1 backgroundColor:(id)arg2;
- (void)_dispatchResponseForRequest:(id)arg1 touchIcon:(id)arg2;
- (id)_drawTouchIconOfSize:(struct CGSize)arg1 withThumbnails:(id)arg2 backgroundColors:(id)arg3;
- (void)_getTouchIconForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_dispatchResponseForRequest:(id)arg1;
- (void)_coalesceResponseDispatchForRequest:(id)arg1;
- (CDUnknownBlockType)_responseHandlerForRequest:(id)arg1 thumbnailIndex:(unsigned long long)arg2;
- (void)_prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2;
- (id)_defaultTouchIconForRequest:(id)arg1;
- (void)stopWatchingUpdatesForRequest:(id)arg1;
- (void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2;
- (id)responseForRequest:(id)arg1 willProvideUpdates:(char *)arg2;
- (BOOL)canHandleRequest:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


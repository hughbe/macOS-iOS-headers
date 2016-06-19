//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNUIPRLikenessProviderCache.h"

@class NSString;

@interface CNUIPRLikenessProviderCache : NSObject <CNUIPRLikenessProviderCache>
{
    id <CNUIPRLikenessProvider> _placeholderProvider;
    id <CNUIPRLikenessProvider> _loadingPlaceholderProvider;
    id <CNScheduler> _resourceLock;
    id <CNScheduler> _highPriorityLock;
}

@property(retain, nonatomic) id <CNScheduler> highPriorityLock; // @synthesize highPriorityLock=_highPriorityLock;
@property(retain, nonatomic) id <CNScheduler> resourceLock; // @synthesize resourceLock=_resourceLock;
- (void).cxx_destruct;
@property(readonly) id <CNUIPRLikenessProvider> loadingPlaceholderProvider;
@property(readonly) id <CNUIPRLikenessProvider> placeholderProvider;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


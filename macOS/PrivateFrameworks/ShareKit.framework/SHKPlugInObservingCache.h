//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ShareKit/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SHKPlugInObservingCache : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    NSMutableDictionary *_dictionary;
}

- (void).cxx_destruct;
- (void)pluginsWillUninstall:(id)arg1;
- (void)pluginsDidInstall:(id)arg1;
- (id)bundleForURL:(id)arg1;
- (void)setBundle:(id)arg1 forURL:(id)arg2;
- (void)dealloc;
- (void)invalidateCache;
- (BOOL)needsRefresh;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


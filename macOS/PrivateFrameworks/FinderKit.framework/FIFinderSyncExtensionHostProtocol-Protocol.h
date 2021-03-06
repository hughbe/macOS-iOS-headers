//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FinderKit/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL;

@protocol FIFinderSyncExtensionHostProtocol <NSObject>
- (void)setBadgeIdentifiersForURLs:(NSArray *)arg1;
- (void)setBadgeImageDictionary:(NSDictionary *)arg1 label:(NSString *)arg2 forIdentifier:(NSString *)arg3;
- (void)setToolbarItemName:(NSString *)arg1 imageData:(NSData *)arg2 isTemplate:(_Bool)arg3 toolTip:(NSString *)arg4;
- (void)unregisterForDirectoryAtURL:(NSURL *)arg1;
- (void)registerForDirectoryAtURL:(NSURL *)arg1;
@end


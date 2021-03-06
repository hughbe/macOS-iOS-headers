//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SystemExtensions/NSObject-Protocol.h>

@class NSURL, OSSystemExtensionInfo;

@protocol _OSSystemExtensionPointInterface <NSObject>
- (void)terminateExtension:(OSSystemExtensionInfo *)arg1 replyHandler:(void (^)(NSError *))arg2;
- (void)startExtension:(OSSystemExtensionInfo *)arg1 replyHandler:(void (^)(NSError *))arg2;
- (void)willReplaceExtension:(OSSystemExtensionInfo *)arg1 withExtension:(OSSystemExtensionInfo *)arg2 replyHandler:(void (^)(NSError *))arg3;
- (void)willUninstallExtension:(OSSystemExtensionInfo *)arg1 replyHandler:(void (^)(NSError *))arg2;
- (void)willTerminateExtension:(OSSystemExtensionInfo *)arg1 replyHandler:(void (^)(NSError *))arg2;
- (void)willStartExtension:(OSSystemExtensionInfo *)arg1 replyHandler:(void (^)(NSError *))arg2;
- (void)validateExtension:(OSSystemExtensionInfo *)arg1 atTemporaryBundleURL:(NSURL *)arg2 replyHandler:(void (^)(NSDictionary *, NSError *))arg3;
@end


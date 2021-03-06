//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DataVaultsManager : NSObject
{
}

+ (BOOL)isURLProtectedByDataVaults:(id)arg1;
+ (BOOL)shouldUseDataVaults;
+ (BOOL)dataVaultsEnabled;
+ (id)dataVaultsApplicationURLByFetchingSynchronouslyFromDisk;
+ (void)getDataVaultsSharedURLWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)getDataVaultsApplicationURLWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)getDataVaultsURLWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)dataVaultsURL;
+ (id)_dataVaultsURL;
+ (id)_dataVaultsURLWithPathComponent:(id)arg1;

@end


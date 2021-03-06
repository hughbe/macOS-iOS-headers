//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoAnalysis/PHADownloadRequestManagement-Protocol.h>

@class NSDate, NSString;
@protocol OS_dispatch_queue;

@interface PHAAssetResourceDownloadRequestManager : NSObject <PHADownloadRequestManagement>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_dateToRequestPermissionAgain;
    unsigned long long _allowedDownloadCount;
    unsigned long long _expectedRequestsCount;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)requestPermissionToDownloadWithPhotoLibrary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property unsigned long long expectedRequestsCount; // @synthesize expectedRequestsCount=_expectedRequestsCount;
- (id)statusAsDictionary;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


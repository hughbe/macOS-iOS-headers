//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, PPSManager;

@interface KHCloudServiceManager : NSObject
{
    BOOL _cloudKitIsAvailable;
    NSString *_container;
    NSString *_zone;
    PPSManager *_ppsManager;
}

+ (id)_ppsManagersByIdentifier;
+ (id)cloudServiceManagersByIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) PPSManager *ppsManager; // @synthesize ppsManager=_ppsManager;
@property(readonly, nonatomic) BOOL cloudKitIsAvailable; // @synthesize cloudKitIsAvailable=_cloudKitIsAvailable;
@property(retain, nonatomic) NSString *zone; // @synthesize zone=_zone;
@property(retain, nonatomic) NSString *container; // @synthesize container=_container;
- (void)die;
@property(readonly, nonatomic) NSURL *ppsManagerIdentifier;
- (id)initWithPPSManager:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary;

@interface CSPowerLog : NSObject
{
    NSMutableDictionary *_operationsByBundleID;
    NSDate *_lastFlushDate;
    unsigned long long _cachedCount;
}

+ (id)keyNameForOperation:(long long)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long cachedCount; // @synthesize cachedCount=_cachedCount;
@property(retain, nonatomic) NSDate *lastFlushDate; // @synthesize lastFlushDate=_lastFlushDate;
@property(retain, nonatomic) NSMutableDictionary *operationsByBundleID; // @synthesize operationsByBundleID=_operationsByBundleID;
- (void)flushToPowerLog;
- (void)_addToDictionary:(long long)arg1 bundleID:(id)arg2 itemCount:(unsigned long long)arg3;
- (void)logWithBundleID:(id)arg1 indexOperation:(long long)arg2 itemCount:(unsigned long long)arg3;
- (id)init;

@end


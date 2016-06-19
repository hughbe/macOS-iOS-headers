//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableDictionary;

@interface IADNSCache : NSObject
{
    NSDate *_lastSyncDate;
    NSMutableDictionary *_cacheDict;
}

+ (id)shared;
@property(retain) NSDate *lastSyncDate; // @synthesize lastSyncDate=_lastSyncDate;
- (void).cxx_destruct;
- (void)_delayedSync;
- (void)_sync;
- (void)cacheResult:(id)arg1 forHost:(id)arg2;
- (id)resultForHost:(id)arg1;
- (id)init;

@end


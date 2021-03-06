//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SearchUIExchangeManager : NSObject
{
    NSMutableDictionary *_exchangesByName;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)saveChanges;
- (void)reloadExchangesFromDefaults;
- (void)_loadExchangesFromDefaults;
- (void)removeExchange:(id)arg1;
- (void)_addExchange:(id)arg1;
- (void)addExchange:(id)arg1;
- (BOOL)containsExchange:(id)arg1;
- (id)exchangeWithName:(id)arg1 createIfNotFound:(BOOL)arg2;
- (id)exchangeWithName:(id)arg1;
- (id)exchangeList;
- (id)init;

@end


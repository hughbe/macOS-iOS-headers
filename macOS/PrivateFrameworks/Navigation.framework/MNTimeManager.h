//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MNObserverHashTable;
@protocol MNTimeProvider;

@interface MNTimeManager : NSObject
{
    MNObserverHashTable *_timeManagerObservers;
    id <MNTimeProvider> _provider;
}

+ (id)currentDate;
+ (double)currentTime;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) id <MNTimeProvider> provider; // @synthesize provider=_provider;
- (void)_resetToDefaultProvider;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

@end


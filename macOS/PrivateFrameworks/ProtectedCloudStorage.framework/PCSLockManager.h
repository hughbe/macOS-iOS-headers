//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface PCSLockManager : NSObject
{
    NSHashTable *_observers;
    NSHashTable *_holders;
    NSObject<OS_os_log> *_log;
}

+ (void)dropAssertion;
+ (_Bool)holdAssertion;
+ (id)manager;
- (void).cxx_destruct;
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain) NSHashTable *holders; // @synthesize holders=_holders;
@property(retain) NSHashTable *observers; // @synthesize observers=_observers;
- (void)dropAssertion:(id)arg1;
- (void)_onlockDropAssertion:(id)arg1;
- (_Bool)holdAssertion:(id)arg1;
- (void)removeAssertion:(id)arg1;
- (id)lockAssertion:(id)arg1;
- (id)initManager;

@end


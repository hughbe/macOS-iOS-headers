//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveML/PMLTrainingStore.h>

@class PMLTrainingStoredSessionBatch;

@interface PMLInMemoryCachedStore : PMLTrainingStore
{
    PMLTrainingStoredSessionBatch *_cachedSessions;
}

+ (id)cachedStoreFromRealStore:(id)arg1 sessionDescriptor:(id)arg2 sessionsLimit:(unsigned long long)arg3;
- (void).cxx_destruct;
- (void)_registerUnlockHandler;
- (void)_openDbIfUnlocked;
- (void)loadSessionsForModel:(id)arg1 excludeItemIdsUsedWithin:(double)arg2 limit:(unsigned long long)arg3 onlyAppleInternal:(BOOL)arg4 positiveLabel:(unsigned long long)arg5 skew:(double)arg6 block:(CDUnknownBlockType)arg7;
- (id)initWithSessionBatch:(id)arg1;

@end


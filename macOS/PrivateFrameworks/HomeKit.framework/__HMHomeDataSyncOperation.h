//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFOperation.h>

@class HMHomeManager;

__attribute__((visibility("hidden")))
@interface __HMHomeDataSyncOperation : HMFOperation
{
    BOOL _refresh;
    HMHomeManager *_manager;
}

- (void).cxx_destruct;
@property(getter=isRefresh) BOOL refresh; // @synthesize refresh=_refresh;
@property(readonly) __weak HMHomeManager *manager; // @synthesize manager=_manager;
- (void)main;
- (id)initWithHomeManager:(id)arg1 timeout:(double)arg2;
- (id)initWithHomeManager:(id)arg1;

@end


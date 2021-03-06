//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class MutableMediaStateTracker, NSArray;
@protocol MutableMediaSource;

@protocol MutableMediaStateTrackerDataSource <NSObject>
- (id <MutableMediaSource>)targetMediaSourceToToggleScreenCaptureByMutableMediaStateTracker:(MutableMediaStateTracker *)arg1;
- (id <MutableMediaSource>)targetMediaSourceToToggleMuteByMutableMediaStateTracker:(MutableMediaStateTracker *)arg1;
- (NSArray *)mutableMediaStateTracker:(MutableMediaStateTracker *)arg1 mediaSourcesWithMutableMediaState:(unsigned long long)arg2;
- (NSArray *)constituentMediaSourcesForMutableMediaStateTracker:(MutableMediaStateTracker *)arg1;
@end


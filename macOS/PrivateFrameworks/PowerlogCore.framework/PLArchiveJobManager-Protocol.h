//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PowerlogCore/NSObject-Protocol.h>

@class PLArchiveEntry;

@protocol PLArchiveJobManager <NSObject>
- (void)handleFailure:(long long)arg1 forArchiveEntry:(PLArchiveEntry *)arg2;
- (BOOL)isInterrupted;
@end


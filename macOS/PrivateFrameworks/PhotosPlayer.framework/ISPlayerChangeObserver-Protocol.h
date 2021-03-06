//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ISPlayer, ISPlayerItem;

@protocol ISPlayerChangeObserver <NSObject>

@optional
- (void)player:(ISPlayer *)arg1 didChangePlayerStatus:(long long)arg2;
- (void)player:(ISPlayer *)arg1 didChangePlaybackState:(long long)arg2;
- (void)player:(ISPlayer *)arg1 didChangePlayerItem:(ISPlayerItem *)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitMacHelper/NSObject-Protocol.h>

@class NSArray, NSPasteboard;

@protocol NSServicesMenuRequestor <NSObject>

@optional
- (BOOL)readSelectionFromPasteboard:(NSPasteboard *)arg1;
- (BOOL)writeSelectionToPasteboard:(NSPasteboard *)arg1 types:(NSArray *)arg2;
@end


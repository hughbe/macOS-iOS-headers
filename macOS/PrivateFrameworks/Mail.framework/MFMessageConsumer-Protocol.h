//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@protocol MFMessageConsumer <NSObject>
@property(readonly) BOOL shouldCancel;
- (void)finishedSendingMessages;
- (void)newMessagesAvailable:(NSArray *)arg1 secondaryMessages:(NSArray *)arg2 options:(NSDictionary *)arg3;

@optional
- (void)searchPhaseComplete;
@end


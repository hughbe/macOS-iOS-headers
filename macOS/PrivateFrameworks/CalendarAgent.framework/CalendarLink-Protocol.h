//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSString;

@protocol CalendarLink
- (void)updateClientSideCacheWithReply:(void (^)(NSDictionary *))arg1;
- (void)registerWithAgent;
- (void)broadcastNotificationToOtherClients:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
@end


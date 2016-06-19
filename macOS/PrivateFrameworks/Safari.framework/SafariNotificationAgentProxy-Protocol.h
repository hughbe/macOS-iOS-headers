//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSData, NSString;

@protocol SafariNotificationAgentProxy
- (void)agentDidUnregisterForRemoteNotifications:(unsigned long long)arg1 disallowedDomains:(NSArray *)arg2;
- (void)agentDidRegisterForRemoteNotifications:(unsigned long long)arg1 allowedDomains:(NSArray *)arg2 deviceToken:(NSString *)arg3;
- (void)agentDidVerifyRemoteNotificationProviderRequest:(unsigned long long)arg1 withResult:(int)arg2 websiteName:(NSString *)arg3 lowResIcon:(NSData *)arg4 highResIcon:(NSData *)arg5;
- (void)agentDidVerifyRemoteNotificationProviderRequest:(unsigned long long)arg1 withResult:(int)arg2 websiteName:(NSString *)arg3 lowResIcon:(NSData *)arg4 highResIcon:(NSData *)arg5 errorMessages:(NSArray *)arg6;
@end


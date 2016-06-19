//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, PARRequest, PARSessionConfiguration, SFFeedback;

@protocol PARDaemonXPC
- (void)fileHandleAndAttributesForResource:(NSString *)arg1 completion:(void (^)(NSFileHandle *, NSDictionary *, NSError *))arg2;
- (void)listSessions:(void (^)(NSArray *))arg1;
- (void)listenToFlusher:(void (^)(NSXPCListenerEndpoint *))arg1;
- (void)feedback:(NSString *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)reportEvent:(NSString *)arg1 queryId:(long long)arg2 feedback:(SFFeedback *)arg3;
- (void)request:(PARRequest *)arg1 reply:(void (^)(long long, PARReply *, NSError *))arg2;
- (void)bag:(void (^)(PARBag *, NSError *))arg1;
- (void)configure:(PARSessionConfiguration *)arg1 reply:(void (^)(NSXPCListenerEndpoint *))arg2;
@end


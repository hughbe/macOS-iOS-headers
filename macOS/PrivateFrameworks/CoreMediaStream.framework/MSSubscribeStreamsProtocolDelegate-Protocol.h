//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMediaStream/MSStreamsProtocolDelegate-Protocol.h>

@class MSSubscribeStreamsProtocol, NSArray, NSDictionary, NSError, NSString;

@protocol MSSubscribeStreamsProtocolDelegate <MSStreamsProtocolDelegate>
- (void)subscribeStreamsProtocol:(MSSubscribeStreamsProtocol *)arg1 didReceiveAuthenticationError:(NSError *)arg2;
- (void)subscribeStreamsProtocol:(MSSubscribeStreamsProtocol *)arg1 didFinishError:(NSError *)arg2;
- (void)subscribeStreamsProtocol:(MSSubscribeStreamsProtocol *)arg1 didFindTemporarilyUnavailableSubscriptionForPersonID:(NSString *)arg2;
- (void)subscribeStreamsProtocol:(MSSubscribeStreamsProtocol *)arg1 didFindDisappearedSubscriptionForPersonID:(NSString *)arg2;
- (void)subscribeStreamsProtocol:(MSSubscribeStreamsProtocol *)arg1 didFinishReceivingUpdatesForPersonID:(NSString *)arg2 ctag:(NSString *)arg3;
- (void)subscribeStreamsProtocol:(MSSubscribeStreamsProtocol *)arg1 didReceiveAssetCollections:(NSArray *)arg2 forPersonID:(NSString *)arg3;
- (void)subscribeStreamsProtocol:(MSSubscribeStreamsProtocol *)arg1 willReceiveUpdatesForPersonID:(NSString *)arg2 wasReset:(BOOL)arg3 metadata:(NSDictionary *)arg4;
@end


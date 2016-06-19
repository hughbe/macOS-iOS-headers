//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSNumber, NSString;

@interface IDSBaseMessage : NSObject <NSCopying>
{
    BOOL _forceCellular;
    BOOL _usingOutgoingPush;
    BOOL _wantsResponse;
    BOOL _wantsMultipleResponses;
    BOOL _wantsBinaryPush;
    BOOL _wantsIntegerUniqueIDs;
    BOOL _highPriority;
    BOOL _hasReceivedPushAck;
    int _timeoutRetries;
    id _context;
    NSDictionary *_clientInfo;
    NSData *_serviceData;
    unsigned long long _uniqueID;
    NSDictionary *_userInfo;
    NSDate *_creationDate;
    NSString *_topic;
    double _timeout;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _deliveryAcknowledgementBlock;
    NSDictionary *_cachedBody;
    NSString *_dsAuthID;
    double _timeSent;
    NSString *_dataUsageBundleIdentifier;
    NSDictionary *_responseAlert;
    NSNumber *_retryCount;
}

@property(copy, nonatomic) NSNumber *retryCount; // @synthesize retryCount=_retryCount;
@property BOOL hasReceivedPushAck; // @synthesize hasReceivedPushAck=_hasReceivedPushAck;
@property BOOL highPriority; // @synthesize highPriority=_highPriority;
@property(copy) NSDictionary *responseAlertInfo; // @synthesize responseAlertInfo=_responseAlert;
@property BOOL wantsIntegerUniqueIDs; // @synthesize wantsIntegerUniqueIDs=_wantsIntegerUniqueIDs;
@property BOOL wantsBinaryPush; // @synthesize wantsBinaryPush=_wantsBinaryPush;
@property int timeoutRetries; // @synthesize timeoutRetries=_timeoutRetries;
@property double timeSent; // @synthesize timeSent=_timeSent;
@property(copy, nonatomic, setter=setDSAuthID:) NSString *dsAuthID; // @synthesize dsAuthID=_dsAuthID;
@property(retain, setter=_setCachedBody:) NSDictionary *_cachedBody; // @synthesize _cachedBody;
@property BOOL wantsMultipleResponses; // @synthesize wantsMultipleResponses=_wantsMultipleResponses;
@property BOOL wantsResponse; // @synthesize wantsResponse=_wantsResponse;
@property(copy) CDUnknownBlockType deliveryAcknowledgementBlock; // @synthesize deliveryAcknowledgementBlock=_deliveryAcknowledgementBlock;
@property(setter=_setUsingOutgoingPush:) BOOL _usingOutgoingPush; // @synthesize _usingOutgoingPush;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property double timeout; // @synthesize timeout=_timeout;
@property(retain) NSString *topic; // @synthesize topic=_topic;
@property BOOL forceCellular; // @synthesize forceCellular=_forceCellular;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property unsigned long long uniqueID; // @synthesize uniqueID=_uniqueID;
@property(copy) NSData *serviceData; // @synthesize serviceData=_serviceData;
@property(copy) NSDictionary *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain) id context; // @synthesize context=_context;
- (void)logFailureInfo;
- (void)handleResponseDictionary:(id)arg1;
- (void)handleResponseHeaders:(id)arg1;
@property(readonly, retain) NSDictionary *messageBody;
@property(readonly, retain) NSDictionary *additionalInternalHeaders;
@property(readonly, retain) NSDictionary *nonStandardMessageHeadersForOutgoingPush;
@property(readonly, retain) NSDictionary *additionalMessageHeadersForOutgoingPush;
@property(readonly, retain) NSDictionary *additionalQueryStringParameters;
@property(readonly, retain) NSDictionary *additionalMessageHeaders;
@property(readonly, retain) NSString *bagKey;
@property(readonly) long long responseCommand;
@property(readonly) long long command;
@property(readonly, retain) NSString *userAgentHeaderString;
@property(readonly) BOOL wantsUserAgentInHeaders;
@property(readonly, retain) NSArray *requiredKeys;
- (BOOL)hasRequiredKeys:(id *)arg1;
@property(copy, nonatomic) NSNumber *serverTimestampReceivedDate;
@property(copy, nonatomic) NSNumber *serverTimestamp;
@property(readonly, copy, nonatomic) NSData *IDCertificate;
@property(readonly, nonatomic) struct OpaqueSecKeyRef *identityPublicKey;
@property(readonly, nonatomic) struct OpaqueSecKeyRef *identityPrivateKey;
@property(copy, nonatomic) NSMutableArray *userIDArray;
@property(copy, nonatomic) NSMutableArray *privateKeyArray;
@property(copy, nonatomic) NSMutableArray *publicKeyArray;
@property(copy, nonatomic) NSMutableArray *certDataArray;
@property(copy, nonatomic) NSData *pushToken;
@property(copy, nonatomic) NSData *pushCertificate;
@property(nonatomic) struct OpaqueSecKeyRef *pushPublicKey;
@property(nonatomic) struct OpaqueSecKeyRef *pushPrivateKey;
- (void)_clearCache;
- (void)_cacheBody;
@property(readonly, retain) NSDictionary *messageBodyUsingCache;
@property(readonly) BOOL isValidMessage;
@property(readonly) BOOL payloadCanBeLogged;
@property(readonly, retain) NSString *dataUsageBundleIdentifier; // @synthesize dataUsageBundleIdentifier=_dataUsageBundleIdentifier;
@property(readonly) double customRetryInterval;
@property(readonly) BOOL wantsCustomRetryInterval;
@property(readonly) BOOL wantsBodySignature;
@property(readonly) BOOL wantsSignature;
@property(readonly) BOOL ignoresNetworkConnectivity;
@property(readonly) double anisetteHeadersTimeout;
@property(readonly) BOOL wantsAnisetteHeaders;
@property(readonly) BOOL wantsAPSRetries;
@property(readonly) BOOL wantsManagedRetries;
@property(readonly) BOOL wantsExtraTimeoutRetry;
@property(readonly) int maxTimeoutRetries;
@property(readonly) BOOL wantsCFNetworkTimeout;
@property(readonly) BOOL wantsBagKey;
@property(readonly) BOOL wantsHTTPGet;
@property(readonly) BOOL wantsHTTPHeaders;
@property(readonly) BOOL wantsJSONBody;
@property(readonly) BOOL wantsCompressedBody;
@property(readonly) BOOL wantsIDSServer;
@property(readonly, retain) NSString *uniqueIDString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end


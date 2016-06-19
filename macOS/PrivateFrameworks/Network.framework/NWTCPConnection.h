//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NWPrettyDescription.h"

@class NSArray, NSData, NSDictionary, NSError, NSObject<OS_tcp_connection>, NSString, NWEndpoint, NWParameters, NWPath;

@interface NWTCPConnection : NSObject <NWPrettyDescription>
{
    BOOL _viable;
    BOOL _hasBetterPath;
    long long _state;
    NWEndpoint *_endpoint;
    NSArray *_certificateChain;
    NSObject<OS_tcp_connection> *_internalConnection;
    id _delegate;
    NWParameters *_parameters;
}

+ (id)stringFromNWTCPConnectionState:(long long)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
@property(readonly, nonatomic) NWParameters *parameters; // @synthesize parameters=_parameters;
@property __weak id delegate; // @synthesize delegate=_delegate;
@property(retain) NSObject<OS_tcp_connection> *internalConnection; // @synthesize internalConnection=_internalConnection;
@property(retain) NSArray *certificateChain; // @synthesize certificateChain=_certificateChain;
@property(retain, nonatomic) NWEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(nonatomic) BOOL hasBetterPath; // @synthesize hasBetterPath=_hasBetterPath;
@property(nonatomic, getter=isViable) BOOL viable; // @synthesize viable=_viable;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *TCPInfo;
@property(readonly, nonatomic) NSDictionary *multipathSubflowSwitchCounts;
@property(readonly, nonatomic) int multipathPrimarySubflowInterfaceIndex;
@property(readonly, nonatomic) unsigned long long multipathConnectedSubflowCount;
@property(readonly, nonatomic) unsigned long long multipathSubflowCount;
@property(readonly, nonatomic) BOOL isMultipath;
@property(readonly, nonatomic) BOOL TFOSucceeded;
- (BOOL)fillOutTCPConnectionInfo:(struct tcp_connection_info *)arg1;
- (BOOL)startInternal;
- (void)setupEventHandler;
- (void)handleIdentityRequestWithContext:(struct nw_tls_context *)arg1 resumptionHandler:(CDUnknownBlockType)arg2;
- (void)handlePrepareTLSContext:(struct nw_tls_context *)arg1;
- (int)setRequiredPropertiesOnContext:(struct nw_tls_context *)arg1 fromIdentity:(struct OpaqueSecIdentityRef *)arg2 certificateChain:(id)arg3;
- (void)handlePeerCertificateTrustEvaluationWithContext:(struct nw_tls_context *)arg1 resumptionHandler:(CDUnknownBlockType)arg2;
- (int)setRequiredPropertiesOnContext:(struct nw_tls_context *)arg1 fromTrust:(struct __SecTrust *)arg2;
- (struct __SecTrust *)createTrustEvaluationFromCertificateChain:(id)arg1 peerHostname:(id)arg2;
- (void)cleanupPreviousTLSIdentity;
- (void)writeClose;
- (void)write:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)readMinimumLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 timeout:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)readToPattern:(id)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)readMinimumLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)readLength:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancel;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSData *txtRecord;
@property(readonly, nonatomic) NWEndpoint *remoteAddress;
@property(readonly, nonatomic) NWEndpoint *localAddress;
@property(readonly, nonatomic) NWPath *connectedPath;
@property(readonly, copy, nonatomic) NSString *privateDescription;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2;
- (void)dealloc;
- (id)initWithUpgradeForConnection:(id)arg1;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2 delegate:(id)arg3;
- (id)initWithAcceptedInternalConnection:(id)arg1;

@end


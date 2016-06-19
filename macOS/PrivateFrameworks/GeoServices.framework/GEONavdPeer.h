//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEONavdClientInfo, NSMutableDictionary, NSXPCConnection;

@interface GEONavdPeer : NSObject
{
    NSXPCConnection *_connection;
    NSMutableDictionary *_entitlementCache;
    GEONavdClientInfo *_clientInfo;
    BOOL _expectingUpdates;
}

@property(nonatomic) BOOL expectingUpdates; // @synthesize expectingUpdates=_expectingUpdates;
@property(readonly, nonatomic) GEONavdClientInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)dealloc;
- (BOOL)hasEntitlement:(id)arg1;
- (id)initWithXPCConnection:(id)arg1;

@end


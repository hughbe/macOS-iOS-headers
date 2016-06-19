//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_xpc_object>, NSString, NSURLRequest;

@interface IMRemoteURLConnection : NSObject
{
    NSURLRequest *_request;
    NSString *_bundleIdentifierForDataUsage;
    CDUnknownBlockType _block;
    NSObject<OS_xpc_object> *_connection;
    BOOL _cancelled;
    BOOL _loading;
    BOOL _forceCellularIfPossible;
    BOOL _requireIDSHost;
    int _retries;
    BOOL _shouldUsePipelining;
    int _concurrentConnections;
    BOOL _disableKeepAlive;
    int _keepAliveWifi;
    int _keepAliveCell;
}

@property(copy) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain) NSURLRequest *request; // @synthesize request=_request;
@property int keepAliveCell; // @synthesize keepAliveCell=_keepAliveCell;
@property int keepAliveWifi; // @synthesize keepAliveWifi=_keepAliveWifi;
@property BOOL disableKeepAlive; // @synthesize disableKeepAlive=_disableKeepAlive;
@property int concurrentConnections; // @synthesize concurrentConnections=_concurrentConnections;
@property BOOL shouldUsePipelining; // @synthesize shouldUsePipelining=_shouldUsePipelining;
@property BOOL requireIDSHost; // @synthesize requireIDSHost=_requireIDSHost;
@property(retain) NSString *bundleIdentifierForDataUsage; // @synthesize bundleIdentifierForDataUsage=_bundleIdentifierForDataUsage;
@property BOOL forceCellularIfPossible; // @synthesize forceCellularIfPossible=_forceCellularIfPossible;
- (void)cancel;
- (void)load;
- (void)dealloc;
- (id)initWithURLRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (BOOL)_connect;
- (BOOL)_disconnect;
- (void)_disconnected;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSObject<OS_dispatch_queue>, NSSet;

@interface CUTNetworkInterfaceListener : NSObject
{
    void *_dynamicStore;
    NSHashTable *_delegateMap;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    int _wifiState;
    int _cellState;
    NSSet *_IPv6Addresses;
    NSSet *_IPv4Addresses;
}

+ (id)sharedInstance;
@property(readonly, retain, nonatomic) NSSet *IPv4Addresses; // @synthesize IPv4Addresses=_IPv4Addresses;
@property(readonly, retain, nonatomic) NSSet *IPv6Addresses; // @synthesize IPv6Addresses=_IPv6Addresses;
@property(readonly, nonatomic) int cellState; // @synthesize cellState=_cellState;
@property(readonly, nonatomic) int wifiState; // @synthesize wifiState=_wifiState;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)_notifyDelegatesOfAddressChange:(id)arg1 isIPv6:(BOOL)arg2;
- (void)_notifyDelegatesOfCellChange:(int)arg1;
- (void)_notifyDelegatesOfWifiChange:(int)arg1;
- (void)_handleNetworkChange:(id)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)allocWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end


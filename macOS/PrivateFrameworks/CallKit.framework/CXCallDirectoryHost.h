//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CXCallDirectoryManagerHostProtocol.h"

@class NSObject<OS_dispatch_queue>, NSString, NSXPCListener;

@interface CXCallDirectoryHost : NSObject <CXCallDirectoryManagerHostProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <CXCallDirectoryHostDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSXPCListener *_xpcListener;
}

@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <CXCallDirectoryHostDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (BOOL)_connectionContainsCallDirectoryHostEntitlementCapability:(id)arg1;
- (oneway void)setPrioritizedExtensionIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)getPrioritizedExtensionIdentifiersWithReply:(CDUnknownBlockType)arg1;
- (oneway void)synchronizeExtensionsWithReply:(CDUnknownBlockType)arg1;
- (oneway void)firstIdentificationEntriesForEmailAddresses:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)firstIdentificationEntriesForPhoneNumbers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_extensionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)getEnabledStatusForCallDirectoryExtensionWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)removeDataForCallDirectoryExtensionWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)reloadCallDirectoryExtensionWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)performDelegateCallback:(CDUnknownBlockType)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


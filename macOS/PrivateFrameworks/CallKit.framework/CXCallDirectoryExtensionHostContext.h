//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSExtensionContext.h"

#import "CXCallDirectoryProviderHostProtocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CXCallDirectoryExtensionHostContext : NSExtensionContext <CXCallDirectoryProviderHostProtocol>
{
    id <CXCallDirectoryProviderHostProtocol> _delegate;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@property(nonatomic) __weak id <CXCallDirectoryProviderHostProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (oneway void)completeRequestWithReply:(CDUnknownBlockType)arg1;
- (oneway void)addIdentificationEntriesWithPhoneNumbers:(id)arg1 labels:(id)arg2;
- (oneway void)addBlockingEntriesWithPhoneNumbers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


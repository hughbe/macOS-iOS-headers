//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CXCallDirectoryExtensionDataRequest.h"
#import "CXCallDirectoryProviderHostProtocol.h"

@class NSError, NSExtension, NSObject<OS_dispatch_queue>, NSString;

@interface CXCallDirectoryExtensionDataRequest : NSObject <CXCallDirectoryProviderHostProtocol, CXCallDirectoryExtensionDataRequest>
{
    id <CXCallDirectoryExtensionDataRequestDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSExtension *_extension;
    id <NSCopying> _requestIdentifier;
    NSError *_hostCancellationError;
}

@property(retain, nonatomic) NSError *hostCancellationError; // @synthesize hostCancellationError=_hostCancellationError;
@property(retain, nonatomic) id <NSCopying> requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CXCallDirectoryExtensionDataRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (oneway void)completeRequestWithReply:(CDUnknownBlockType)arg1;
- (oneway void)addIdentificationEntriesWithPhoneNumbers:(id)arg1 labels:(id)arg2;
- (oneway void)addBlockingEntriesWithPhoneNumbers:(id)arg1;
- (void)cancelWithError:(id)arg1;
- (void)beginWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithExtension:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ACC2SVTransportControllerProtocol.h"

@class NSString;

@interface ACM2SVTransportController : NSObject <ACC2SVTransportControllerProtocol>
{
    id <ACM2SVTransportControllerDelegate> _delegate;
}

@property(nonatomic) id <ACM2SVTransportControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cancelImageFetching;
- (void)getImageWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)verifySecureCodeWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)generateAndSendSecCodeWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadTrustedDevicesWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


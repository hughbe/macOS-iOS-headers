//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionAppleIDContext.h"

@class AKAnisetteData, AKAnisetteProvisioningController, AKDevice, NSLock, NSString;

@interface AKAppleIDSession : NSObject <NSURLSessionAppleIDContext>
{
    NSString *_serviceID;
    AKAnisetteProvisioningController *_nativeAnisetteController;
    AKAnisetteProvisioningController *_pairedDeviceAnisetteController;
    AKAnisetteData *_proxiedAnisetteData;
    NSLock *_anisetteControllerLock;
    AKDevice *_pairedDevice;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) AKDevice *pairedDevice; // @synthesize pairedDevice=_pairedDevice;
- (void).cxx_destruct;
- (id)_pairedDeviceAnisetteController;
- (id)_nativeAnisetteController;
- (void)_handleURLResponse:(id)arg1 forRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_generateAppleIDHeadersForRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)handleResponse:(id)arg1 forRequest:(id)arg2 shouldRetry:(char *)arg3;
- (id)appleIDHeadersForRequest:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 getAppleIDHeadersForResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)relevantHTTPStatusCodes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


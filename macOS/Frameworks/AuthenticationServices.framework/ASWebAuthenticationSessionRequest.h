//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthenticationServices/NSCopying-Protocol.h>
#import <AuthenticationServices/NSSecureCoding-Protocol.h>

@class ASWebAuthenticationSessionController, NSString, NSURL, NSUUID;
@protocol ASWebAuthenticationSessionRequestDelegate;

@interface ASWebAuthenticationSessionRequest : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _shouldUseEphemeralSession;
    NSUUID *_UUID;
    NSURL *_URL;
    NSString *_callbackURLScheme;
    id <ASWebAuthenticationSessionRequestDelegate> _delegate;
    ASWebAuthenticationSessionController *_controller;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) __weak ASWebAuthenticationSessionController *controller; // @synthesize controller=_controller;
@property(nonatomic) __weak id <ASWebAuthenticationSessionRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BOOL shouldUseEphemeralSession; // @synthesize shouldUseEphemeralSession=_shouldUseEphemeralSession;
@property(readonly, copy, nonatomic) NSString *callbackURLScheme; // @synthesize callbackURLScheme=_callbackURLScheme;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void)completeWithCallbackURL:(id)arg1;
- (void)cancelWithError:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithUUID:(id)arg1 URL:(id)arg2 callbackURLScheme:(id)arg3 shouldUseEphemeralSession:(BOOL)arg4;

@end


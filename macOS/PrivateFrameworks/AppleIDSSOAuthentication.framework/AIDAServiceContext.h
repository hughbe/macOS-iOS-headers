//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleIDSSOAuthentication/NSCopying-Protocol.h>
#import <AppleIDSSOAuthentication/NSMutableCopying-Protocol.h>

@class NSDictionary, NSWindow;
@protocol CDPStateUIProvider;

@interface AIDAServiceContext : NSObject <NSMutableCopying, NSCopying>
{
    NSDictionary *_authenticationResults;
    BOOL _shouldForceOperation;
    long long _operationUIPermissions;
    NSWindow *_hostWindow;
    id <CDPStateUIProvider> _cdpUiProvider;
}

+ (id)contextWithContext:(id)arg1;
+ (BOOL)accessInstanceVariablesDirectly;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <CDPStateUIProvider> cdpUiProvider; // @synthesize cdpUiProvider=_cdpUiProvider;
@property(readonly, nonatomic) NSWindow *hostWindow; // @synthesize hostWindow=_hostWindow;
@property(readonly, nonatomic) long long operationUIPermissions; // @synthesize operationUIPermissions=_operationUIPermissions;
@property(readonly, nonatomic) BOOL shouldForceOperation; // @synthesize shouldForceOperation=_shouldForceOperation;
@property(readonly, copy, nonatomic) NSDictionary *authenticationResults; // @synthesize authenticationResults=_authenticationResults;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InternetAccounts/IAAccountSetupInput.h>

@class NSNumber, NSString;

@interface IALDAPAccountSetupInput : IAAccountSetupInput
{
    NSString *_serverAddress;
    NSNumber *_useSSL;
    long long _port;
    NSString *_scope;
    NSString *_searchBase;
    BOOL _authenticate;
}

- (void).cxx_destruct;
@property BOOL authenticate; // @synthesize authenticate=_authenticate;
@property(retain) NSString *searchBase; // @synthesize searchBase=_searchBase;
@property(retain) NSString *scope; // @synthesize scope=_scope;
@property long long port; // @synthesize port=_port;
@property(retain) NSNumber *useSSL; // @synthesize useSSL=_useSSL;
@property(retain) NSString *serverAddress; // @synthesize serverAddress=_serverAddress;

@end


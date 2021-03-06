//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebDriver/WDXPCServiceClient-Protocol.h>

@class NSXPCConnection;

@interface WDSafariDriverXPCClient : NSObject <WDXPCServiceClient>
{
    NSXPCConnection *_webDriverServiceConnection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSXPCConnection *webDriverServiceConnection; // @synthesize webDriverServiceConnection=_webDriverServiceConnection;
- (void)fetchContentsOfFiles:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchAttributesOfFiles:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)launchApplication:(id)arg1 withArguments:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)serverStopped;
- (void)serverStarted;
- (void)runServerOnPort:(long long)arg1 captureDiagnostics:(BOOL)arg2;
- (CDUnknownBlockType)_defaultErrorHandler;

@end


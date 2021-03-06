//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection, NSXPCInterface;

@interface SPDeveloperPolicy : NSObject
{
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (BOOL)unregisterDevelopmentTeamWithIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)registerDevelopmentTeamWithIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)removeLocalDevelopmentCertificateForUser:(unsigned int)arg1 error:(id *)arg2;
- (id)createLocalDevelopmentCertificateForUser:(unsigned int)arg1 error:(id *)arg2;
- (BOOL)isDeveloperToolEnvironmentWithError:(id *)arg1;
- (BOOL)setDeveloperModeEnabled:(BOOL)arg1 error:(id *)arg2;
@property(readonly, getter=isDeveloperModeEnabled) BOOL developerModeEnabled;
- (void)dealloc;
- (id)init;

@end


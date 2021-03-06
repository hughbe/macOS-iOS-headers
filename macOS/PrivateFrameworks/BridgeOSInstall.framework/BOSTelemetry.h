//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BOSDevice, BOSRequest, NSDate, NSError, NSString, NSUUID;

@interface BOSTelemetry : NSObject
{
    BOOL _isAppleInternalBuild;
    NSUUID *_sessionUUID;
    NSError *_error;
    BOSRequest *_request;
    BOSDevice *_device;
    NSDate *_startDate;
    NSString *_fromMacOSBuild;
    NSString *_projectVersion;
}

- (void).cxx_destruct;
@property(retain) NSString *projectVersion; // @synthesize projectVersion=_projectVersion;
@property BOOL isAppleInternalBuild; // @synthesize isAppleInternalBuild=_isAppleInternalBuild;
@property(retain) NSString *fromMacOSBuild; // @synthesize fromMacOSBuild=_fromMacOSBuild;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain) BOSDevice *device; // @synthesize device=_device;
@property(retain) BOSRequest *request; // @synthesize request=_request;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
- (void)__submitToInstallerDiagnostics;
- (void)_submitToInstallerDiagnostics;
- (id)_shortDescriptionForAction:(unsigned long long)arg1;
- (id)_summaryForLogging;
- (void)submit;
- (id)initWithRequest:(id)arg1;
- (id)init;

@end


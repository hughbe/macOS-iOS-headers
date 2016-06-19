//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XSDefinitionProvider.h"

@class NSString;

@interface EWSServerVersionInfo : NSObject <XSDefinitionProvider>
{
    long long _MajorBuildNumber;
    long long _MajorVersion;
    long long _MinorBuildNumber;
    long long _MinorVersion;
    NSString *_Version;
}

+ (id)definition;
@property(copy, nonatomic) NSString *Version; // @synthesize Version=_Version;
@property(nonatomic) long long MinorVersion; // @synthesize MinorVersion=_MinorVersion;
@property(nonatomic) long long MinorBuildNumber; // @synthesize MinorBuildNumber=_MinorBuildNumber;
@property(nonatomic) long long MajorVersion; // @synthesize MajorVersion=_MajorVersion;
@property(nonatomic) long long MajorBuildNumber; // @synthesize MajorBuildNumber=_MajorBuildNumber;
- (void).cxx_destruct;
- (BOOL)supportsSchema:(id)arg1;
- (id)_minorVersionString;
- (id)_majorVersionString;
- (void)messageTraceVersion;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface UAUserActivityLoggingManager : NSObject
{
    BOOL _loggingEnabled;
    BOOL _isServer;
    NSMutableDictionary *_logsForTags;
}

+ (id)hexDataDump:(id)arg1;
+ (id)sharedDebugManager;
@property(readonly, retain) NSMutableDictionary *logsForTags; // @synthesize logsForTags=_logsForTags;
@property BOOL isServer; // @synthesize isServer=_isServer;
- (void).cxx_destruct;
- (void)log:(const char *)arg1 line:(long long)arg2 queue:(const char *)arg3 format:(const char *)arg4;
- (id)createLogFileForClient:(id)arg1 rotateLogs:(BOOL)arg2;
@property(readonly) BOOL loggingEnabled;
- (id)logForCategory:(id)arg1;
- (id)log;
- (void)resume;
- (void)suspend;
- (id)init;

@end


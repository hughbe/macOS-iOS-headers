//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSObject<OS_dispatch_queue>, NSString;

@interface GEOEventRecorderInstrumentation : NSObject
{
    NSObject<OS_dispatch_queue> *_loggingQueue;
    NSString *_filepath;
    NSString *_geoFilepath;
    NSString *_movieFilepath;
    NSDate *_startDate;
}

+ (void)endInstrumentation;
+ (id)defaultInstrumentation;
+ (id)initializeDefaultInstrumentation;
- (void)initializeFilepaths;
- (void)_captureScreenVideo:(id)arg1;
- (void)captureEventRecorderScreenVideo;
- (void)writeString:(id)arg1 ToFilepath:(id)arg2;
- (void)captureUserActionLogMessageEvent:(id)arg1;
- (void)captureUIEvent:(id)arg1;
- (void)_setupLogging;
- (id)getRecordedFilePaths;
- (void)dealloc;
- (id)init;

@end


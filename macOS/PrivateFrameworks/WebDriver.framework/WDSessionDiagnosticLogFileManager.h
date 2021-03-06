//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebDriver/DDLogFileManagerDefault.h>

@class NSDateFormatter, NSString;

@interface WDSessionDiagnosticLogFileManager : DDLogFileManagerDefault
{
    NSDateFormatter *_dateFormatter;
    NSString *_sessionIdentifier;
}

- (void).cxx_destruct;
- (id)createNewLogFile;
- (id)logFilePrefix;
- (BOOL)isLogFile:(id)arg1;
- (id)initWithLogsDirectory:(id)arg1 relatedSession:(id)arg2;

@end


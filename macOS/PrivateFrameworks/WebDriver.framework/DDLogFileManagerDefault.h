//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebDriver/DDLogFileManager-Protocol.h>

@class NSString;

@interface DDLogFileManagerDefault : NSObject <DDLogFileManager>
{
    unsigned long long maximumNumberOfLogFiles;
    NSString *_logsDirectory;
}

- (void).cxx_destruct;
@property unsigned long long maximumNumberOfLogFiles; // @synthesize maximumNumberOfLogFiles;
- (id)createNewLogFile;
- (id)generateShortUUID;
- (id)sortedLogFileInfos;
- (id)sortedLogFileNames;
- (id)sortedLogFilePaths;
- (id)unsortedLogFileInfos;
- (id)unsortedLogFileNames;
- (id)unsortedLogFilePaths;
- (BOOL)isLogFile:(id)arg1;
- (id)logsDirectory;
- (id)defaultLogsDirectory;
- (void)deleteOldLogFiles;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithLogsDirectory:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


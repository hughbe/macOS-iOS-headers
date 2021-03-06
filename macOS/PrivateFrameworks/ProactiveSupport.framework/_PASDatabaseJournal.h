//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _PASDatabaseJournalFile;
@protocol OS_dispatch_queue;

@interface _PASDatabaseJournal : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_directoryPath;
    unsigned long long _serialNumber;
    NSString *_uuid;
    BOOL _journaling;
    BOOL _inMemory;
    _PASDatabaseJournalFile *_currentFile;
}

+ (CDUnknownBlockType)_binderForDictionary:(id)arg1;
+ (id)journalForInMemoryDb;
+ (id)journalWithDbPath:(id)arg1;
+ (id)_journalPathForDbPath:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL journaling; // @synthesize journaling=_journaling;
- (id)directoryPath;
- (BOOL)stopJournaling;
- (BOOL)startJournaling;
- (BOOL)deleteAllJournaledQueries;
- (BOOL)executeQueriesOnDatabase:(id)arg1;
- (BOOL)_executeFile:(id)arg1 onDb:(id)arg2 becameLocked:(char *)arg3;
- (BOOL)_executeNextRecordFromFile:(id)arg1 onDb:(id)arg2 becameLocked:(char *)arg3 deleteFile:(char *)arg4;
- (void)runQuery:(id)arg1 values:(id)arg2 onDb:(id)arg3;
- (id)description;

@end


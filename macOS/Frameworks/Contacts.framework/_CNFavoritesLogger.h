//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/CNFavoritesLogger-Protocol.h>

@class NSString;
@protocol OS_os_log;

@interface _CNFavoritesLogger : NSObject <CNFavoritesLogger>
{
    NSObject<OS_os_log> *_log;
    NSObject<OS_os_log> *_summaryLog;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_os_log> *summaryLog; // @synthesize summaryLog=_summaryLog;
@property(readonly, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
- (void)reportFavoritesAccessedBeforeFirstUnlock;
- (void)_simulateCrashReportWithMessage:(id)arg1;
- (void)failedToWriteFavoritesToPath:(id)arg1 error:(id)arg2 simulateCrashReport:(BOOL)arg3;
- (void)failedToVerifyWrittenFavoritesExistsAtPath:(id)arg1;
- (void)failedToWriteRemoteFavorites:(id)arg1;
- (void)failedToVerifyFavorites:(id)arg1 withPropertyListFavorites:(id)arg2 error:(id)arg3;
- (void)failedToConvertFavoritesToPropertyList:(id)arg1;
- (void)failedToReadFavoritesFromPath:(id)arg1 error:(id)arg2 simulateCrashReport:(BOOL)arg3;
- (void)failedToReadRemoteFavorites:(id)arg1;
- (void)finishedWritingFavoritesToPath:(id)arg1 entriesCount:(unsigned long long)arg2;
- (void)finishedWritingRemoteFavorites;
- (void)finishedReadingFavoritesFromPath:(id)arg1 entriesCount:(unsigned long long)arg2;
- (void)finishedReadingRemoteFavorites;
- (void)rematchingFavorites:(CDUnknownBlockType)arg1;
- (void)writingFavorites:(CDUnknownBlockType)arg1;
- (void)readingFavorites:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CRKFTSEnumeration : NSObject
{
    NSString *mDirectoryPath;
    int mOptions;
}

+ (int)defaultOptions;
- (void).cxx_destruct;
- (BOOL)shouldSkipEntry:(struct _ftsent *)arg1;
- (id)readNextEntryFromFTS:(CDStruct_2263269c *)arg1 error:(id *)arg2;
- (id)readAllEntriesFromFTS:(CDStruct_2263269c *)arg1 error:(id *)arg2;
- (void)closeFTS:(CDStruct_2263269c *)arg1;
- (CDStruct_2263269c *)makeFTSWithError:(id *)arg1;
- (id)entriesWithError:(id *)arg1;
- (id)initWithDirectoryPath:(id)arg1 options:(int)arg2;
- (id)initWithDirectoryPath:(id)arg1;
- (id)init;

@end


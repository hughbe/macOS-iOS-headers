//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@class NSURL;

@interface NSFileManager (ICNFMCMailCoreAdditions)
- (long long)ic_fileSizeAtPath:(id)arg1 traverseLink:(BOOL)arg2;
@property(readonly, nonatomic) NSURL *ic_URLForNonContainerizedHomeDirectory;
- (id)ic_createUniqueDirectoryAtPath:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 error:(id *)arg4;
@end


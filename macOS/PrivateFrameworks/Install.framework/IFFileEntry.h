//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IFFileEntry : NSObject
{
    NSMutableArray *_children;
    IFFileEntry *_parent;
    int _hash;
}

- (struct stat *)statInfo;
- (unsigned long long)size;
- (BOOL)isDirectory;
- (id)fileType;
- (unsigned long long)rawSize;
- (long long)rawOffset;
- (id)rawHashForType:(id)arg1;
- (id)rawHashTypes;
- (int)compressionType;
- (id)path;
- (id)childEntries;
- (id)parentEntry;
- (void)addChildEntry:(id)arg1;
- (void)setParentEntry:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;

@end


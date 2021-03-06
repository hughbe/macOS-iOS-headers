//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFileManagerDelegate.h"

@class NSString;

@interface ChunkedTreeRemover : NSObject <NSFileManagerDelegate>
{
    unsigned long long _removedFileCount;
}

+ (BOOL)removeTreeAtPathWithChunkedFiles:(id)arg1;
+ (BOOL)removeTreeAtPathWithChunkedFiles:(id)arg1 error:(id *)arg2;
@property unsigned long long removedFileCount; // @synthesize removedFileCount=_removedFileCount;
- (BOOL)_removeItemAtPath:(id)arg1 error:(id *)arg2;
- (BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtPath:(id)arg3;
- (BOOL)fileManager:(id)arg1 shouldRemoveItemAtPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPLCloudKitOperationContext.h"

@class NSMutableDictionary, NSString;

@interface CPLUploadOperationContext : NSObject <CPLCloudKitOperationContext>
{
    NSMutableDictionary *recordIDToProgressMap;
    NSMutableDictionary *recordIDToCPLRecordMap;
}

- (void).cxx_destruct;
- (id)extendedStatusDescriptionStrings;
- (id)recordForRecordID:(id)arg1;
- (void)recordCompletionForRecordID:(id)arg1 withError:(id)arg2;
- (void)updateProgress:(double)arg1 forRecordID:(id)arg2;
- (void)addRecord:(id)arg1 forRecordID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


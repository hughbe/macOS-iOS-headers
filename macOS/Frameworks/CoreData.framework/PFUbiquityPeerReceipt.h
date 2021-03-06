//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/PFUbiquitySafeSaveFile.h>

@class NSDate, PFUbiquityKnowledgeVector, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityPeerReceipt : PFUbiquitySafeSaveFile
{
    PFUbiquityKnowledgeVector *_kv;
    NSDate *_writeDate;
}

@property(retain, nonatomic) NSDate *writeDate; // @synthesize writeDate=_writeDate;
@property(readonly, nonatomic) PFUbiquityKnowledgeVector *kv; // @synthesize kv=_kv;
- (BOOL)writeFileToLocation:(id)arg1 error:(id *)arg2;
- (BOOL)loadFileFromLocation:(id)arg1 error:(id *)arg2;
- (id)description;
@property(readonly, nonatomic) PFUbiquityLocation *receiptFileLocation;
- (void)dealloc;
- (id)initWithLocalPeerID:(id)arg1 andReceiptFileLocation:(id)arg2;
- (id)initWithLocalPeerID:(id)arg1 andKnowledgeVector:(id)arg2 forPeerID:(id)arg3 storeName:(id)arg4 modelVersionHash:(id)arg5 andUbiquityRootLocation:(id)arg6;
- (id)initWithLocalPeerID:(id)arg1 receiptPeerID:(id)arg2 storeName:(id)arg3 modelVersionHash:(id)arg4 andUbiquityRootLocation:(id)arg5;
- (id)init;

@end


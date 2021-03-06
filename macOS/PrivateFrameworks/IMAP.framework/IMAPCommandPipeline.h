//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IMAPCommandPipeline : NSObject
{
    BOOL _isSending;
    unsigned int _chunkSize;
    unsigned int _expectedSize;
    NSMutableArray *_fetchUnits;
    id _imapCommandPipelineLock;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id imapCommandPipelineLock; // @synthesize imapCommandPipelineLock=_imapCommandPipelineLock;
@property(retain, nonatomic) NSMutableArray *fetchUnits; // @synthesize fetchUnits=_fetchUnits;
@property(nonatomic) BOOL isSending; // @synthesize isSending=_isSending;
@property(nonatomic) unsigned int expectedSize; // @synthesize expectedSize=_expectedSize;
@property(nonatomic) unsigned int chunkSize; // @synthesize chunkSize=_chunkSize;
- (id)_newCommandsAssigningResponseHandler:(id)arg1;
- (id)failureResponsesFromSendingCommandsToServer:(id)arg1 responseHandler:(id)arg2 highPriority:(BOOL)arg3;
- (void)_removeFetchUnitMatchingResponse:(id)arg1;
- (void)addFetchCommandForUid:(unsigned int)arg1 fetchItem:(id)arg2 expectedLength:(unsigned int)arg3;
- (id)description;
@property(readonly, nonatomic) BOOL isFull;
- (id)init;

@end


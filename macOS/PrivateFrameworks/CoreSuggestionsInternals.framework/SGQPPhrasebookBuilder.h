//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface SGQPPhrasebookBuilder : NSObject
{
    NSMutableArray *_entries;
    int _maxTokensPerEntry;
    struct __CFStringTokenizer *_tokenizer;
}

- (void).cxx_destruct;
- (void)serializeToFileAtPath:(id)arg1;
- (void)sortEntries;
- (void)addEntry:(id)arg1 predictionType:(unsigned int)arg2 payload:(double)arg3;
- (void)addNormalizedEntry:(id)arg1 predictionType:(unsigned int)arg2 payload:(double)arg3 ntokens:(int)arg4;
- (void)dealloc;
- (id)init;

@end


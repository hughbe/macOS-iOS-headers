//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKDResponseBodyParser.h"

@class NSError, NSMutableData, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface CKDJSONResponseBodyParser : NSObject <CKDResponseBodyParser>
{
    CDUnknownBlockType _objectParsedBlock;
    CDUnknownBlockType _logParsedObjectBlock;
    NSError *_parserError;
    NSObject<OS_dispatch_queue> *_parseQueue;
    NSMutableData *_parserData;
}

@property(retain, nonatomic) NSMutableData *parserData; // @synthesize parserData=_parserData;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *parseQueue; // @synthesize parseQueue=_parseQueue;
@property(retain, nonatomic) NSError *parserError; // @synthesize parserError=_parserError;
@property(copy, nonatomic) CDUnknownBlockType logParsedObjectBlock; // @synthesize logParsedObjectBlock=_logParsedObjectBlock;
@property(copy, nonatomic) CDUnknownBlockType objectParsedBlock; // @synthesize objectParsedBlock=_objectParsedBlock;
- (void).cxx_destruct;
- (void)finishWithCompletion:(CDUnknownBlockType)arg1;
- (void)processData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


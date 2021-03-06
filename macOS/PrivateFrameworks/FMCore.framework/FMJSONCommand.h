//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FMCore/FMCommandBase.h>

@class NSDictionary, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface FMJSONCommand : FMCommandBase
{
    BOOL __hasParsedResponseBody;
    NSError *_jsonResponseParseError;
    NSDictionary *__responseBodyDict;
    NSDictionary *__requestBodyDict;
    NSObject<OS_dispatch_queue> *_responseQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *responseQueue; // @synthesize responseQueue=_responseQueue;
@property(retain, nonatomic) NSDictionary *_requestBodyDict; // @synthesize _requestBodyDict=__requestBodyDict;
@property(retain, nonatomic) NSDictionary *_responseBodyDict; // @synthesize _responseBodyDict=__responseBodyDict;
@property(nonatomic) BOOL _hasParsedResponseBody; // @synthesize _hasParsedResponseBody=__hasParsedResponseBody;
@property(retain, nonatomic) NSError *jsonResponseParseError; // @synthesize jsonResponseParseError=_jsonResponseParseError;
@property(readonly, nonatomic) NSDictionary *serverAlertInfo;
@property(readonly, nonatomic) NSDictionary *jsonResponseDictionary;
- (id)jsonBodyDictionary;
- (id)body;
- (id)headers;
- (void)sendRequest;
- (id)init;

@end


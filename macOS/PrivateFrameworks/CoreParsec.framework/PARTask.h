//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PARRequest, PARSession;

@interface PARTask : NSObject
{
    CDUnknownBlockType _completionBlock;
    PARSession *_session;
    long long _queryId;
    PARRequest *_request;
}

@property(retain, nonatomic) PARRequest *request; // @synthesize request=_request;
@property long long queryId; // @synthesize queryId=_queryId;
@property(nonatomic) __weak PARSession *session; // @synthesize session=_session;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)resume;

@end


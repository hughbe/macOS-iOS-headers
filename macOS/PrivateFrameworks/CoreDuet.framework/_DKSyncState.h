//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray, _DKKnowledgeSyncStorageAssertion;

@interface _DKSyncState : NSObject
{
    BOOL _needsCloudSyncDown;
    BOOL _needsCloudSyncUp;
    NSError *_error;
    _DKKnowledgeSyncStorageAssertion *_assertion;
    NSMutableArray *_replies;
}

- (void).cxx_destruct;
@property(retain) NSMutableArray *replies; // @synthesize replies=_replies;
@property(retain) _DKKnowledgeSyncStorageAssertion *assertion; // @synthesize assertion=_assertion;
@property(retain) NSError *error; // @synthesize error=_error;
@property BOOL needsCloudSyncUp; // @synthesize needsCloudSyncUp=_needsCloudSyncUp;
@property BOOL needsCloudSyncDown; // @synthesize needsCloudSyncDown=_needsCloudSyncDown;
- (void)finish;
- (void)addReplyBlock:(CDUnknownBlockType)arg1;
- (id)initWithSyncStorageAssertion:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end


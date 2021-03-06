//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface RPClient : NSObject
{
    NSMutableSet *_assertions;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
    unsigned int _type;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
}

+ (void)primaryAccountSignedOut;
+ (void)primaryAccountSignedIn;
- (void).cxx_destruct;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)primaryAccountSignedOutWithCompletion:(CDUnknownBlockType)arg1;
- (void)primaryAccountSignedInWithCompletion:(CDUnknownBlockType)arg1;
- (void)getIdentitiesWithFlags:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getIdentitiesWithCompletion:(CDUnknownBlockType)arg1;
- (void)diagnosticShow:(id)arg1 level:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)diagnosticLogControl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)diagnosticCommand:(id)arg1 params:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addOrUpdateIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)activateAssertionWithIdentifier:(id)arg1;
- (void)_invalidated;
- (void)invalidate;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (id)init;

@end


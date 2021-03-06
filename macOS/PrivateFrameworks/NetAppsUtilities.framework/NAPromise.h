//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetAppsUtilities/NAPromise-Protocol.h>

@class NAFuture, NSString;

@interface NAPromise : NSObject <NAPromise>
{
    NAFuture *_future;
}

- (void).cxx_destruct;
@property(readonly) NAFuture *future; // @synthesize future=_future;
- (CDUnknownBlockType)errorOnlyCompletionHandlerAdapter;
- (CDUnknownBlockType)completionHandlerAdapter;
- (BOOL)finishWithNoResult;
- (BOOL)finishWithResult:(id)arg1 error:(id)arg2;
- (BOOL)finishWithError:(id)arg1;
- (BOOL)finishWithResult:(id)arg1;
@property(copy, nonatomic) NSString *descriptor;
- (id)initWithFuture:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


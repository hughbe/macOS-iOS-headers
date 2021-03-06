//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSObject, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDCloudAccountOperation : NSOperation
{
    NSUUID *_identifier;
    NSObject<OS_dispatch_queue> *_clientQueue;
    CDUnknownBlockType _operationBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType operationBlock; // @synthesize operationBlock=_operationBlock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)main;
- (id)description;
- (id)initWithBlock:(CDUnknownBlockType)arg1 clientQueue:(id)arg2;

@end


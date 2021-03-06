//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSProgress, NSString, NSTask;
@protocol OS_dispatch_queue;

@interface SMTask : NSObject
{
    int _terminationStatus;
    NSTask *_task;
    NSString *_logPrefix;
    double _estimatedTimeToComplete;
    NSProgress *_parentProgress;
    double _parentProgressPendingUnits;
    NSObject<OS_dispatch_queue> *_parentProgressQueue;
    NSFileHandle *_outputFileHandle;
}

- (void).cxx_destruct;
@property(retain) NSFileHandle *outputFileHandle; // @synthesize outputFileHandle=_outputFileHandle;
@property(retain) NSObject<OS_dispatch_queue> *parentProgressQueue; // @synthesize parentProgressQueue=_parentProgressQueue;
@property double parentProgressPendingUnits; // @synthesize parentProgressPendingUnits=_parentProgressPendingUnits;
@property(retain) NSProgress *parentProgress; // @synthesize parentProgress=_parentProgress;
@property double estimatedTimeToComplete; // @synthesize estimatedTimeToComplete=_estimatedTimeToComplete;
@property int terminationStatus; // @synthesize terminationStatus=_terminationStatus;
@property(retain) NSString *logPrefix; // @synthesize logPrefix=_logPrefix;
@property(retain) NSTask *task; // @synthesize task=_task;
- (void)fileHandleReadCompleted:(id)arg1;
- (void)processOutput:(id)arg1;
- (void)processRemainingData;
- (BOOL)run;
- (id)sipSanitizedTaskFromTask:(id)arg1;
- (id)initWithTask:(id)arg1 allowSIP:(BOOL)arg2;
- (id)initWithTask:(id)arg1;

@end


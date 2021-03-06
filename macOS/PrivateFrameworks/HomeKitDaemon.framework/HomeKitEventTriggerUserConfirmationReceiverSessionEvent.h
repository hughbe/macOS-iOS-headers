//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class AWDHomeKitEventTriggerUserConfirmationReceiverSession, NSDate, NSString;

@interface HomeKitEventTriggerUserConfirmationReceiverSessionEvent : HMDLogEvent <HMDAWDLogEvent>
{
    AWDHomeKitEventTriggerUserConfirmationReceiverSession *_metric;
    NSDate *_startTime;
}

+ (id)uuid;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) AWDHomeKitEventTriggerUserConfirmationReceiverSession *metric; // @synthesize metric=_metric;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;
- (id)initWithSessionID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


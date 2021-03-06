//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FLFollowUpController;
@protocol OS_dispatch_queue;

@interface AMSFollowUp : NSObject
{
    FLFollowUpController *_followUpController;
    NSObject<OS_dispatch_queue> *_followUpQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *followUpQueue; // @synthesize followUpQueue=_followUpQueue;
@property(retain, nonatomic) FLFollowUpController *followUpController; // @synthesize followUpController=_followUpController;
- (id)_pendingFollowUpWithBackingIdentifier:(id)arg1 error:(id *)arg2;
- (id)postFollowUpItem:(id)arg1;
- (id)pendingFollowUpWithIdentifier:(id)arg1 account:(id)arg2;
- (id)pendingFollowUpsForAccount:(id)arg1;
- (id)pendingFollowUps;
- (id)clearFollowUpWithIdentifier:(id)arg1 account:(id)arg2;
- (id)clearFollowUpWithBackingIdentifier:(id)arg1;
- (id)clearFollowUpItem:(id)arg1;
- (id)init;

@end


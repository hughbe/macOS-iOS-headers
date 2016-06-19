//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Install/IFInstallQueueElement.h>

@class NSString;

@interface IFMessageElement : IFInstallQueueElement
{
    NSString *_notificationName;
    NSString *_message;
}

+ (void)addPhaseMsgElementToQ:(id)arg1 withKey:(id)arg2;
+ (void)addStatusMsgElementToQ:(id)arg1 withKey:(id)arg2;
- (long long)run;
- (id)description;
- (id)logDescription;
- (void)dealloc;
- (id)init;
- (id)initWithEndJobsDidEndMessage:(id)arg1;
- (id)initWithEndJobsWillBeginMessage:(id)arg1;
- (id)initWithInstallCompletedMessage:(id)arg1;
- (id)initWithInstallJobStartedMessage:(id)arg1;
- (id)initWithInstallJobCompletedMessage:(id)arg1;
- (id)initWithPackageInstallCompletedMessage:(id)arg1;
- (id)initWithPackageInstallStartedMessage:(id)arg1;
- (id)initWithStatusMessage:(id)arg1;
- (id)initWithPhaseMessage:(id)arg1;
- (id)initWithPhase:(int)arg1 andTitle:(id)arg2;
- (id)_descriptionForPhase:(int)arg1 packageTitle:(id)arg2;

@end


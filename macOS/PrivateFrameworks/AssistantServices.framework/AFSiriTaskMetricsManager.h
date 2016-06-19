//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDSession, NSObject<OS_dispatch_queue>;

@interface AFSiriTaskMetricsManager : NSObject
{
    NSObject<OS_dispatch_queue> *_duetQueue;
    CDSession *_coreDuetSession;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)deleteRegisteredIdentifiers;
- (BOOL)_parseCoreDuetAttributeValue:(id)arg1 aceId:(id *)arg2 duration:(double *)arg3;
- (void)retrieveMetricsFromPreviousPunchout:(CDUnknownBlockType)arg1;
- (void)registerPunchoutIdentifier:(id)arg1;
- (id)init;

@end


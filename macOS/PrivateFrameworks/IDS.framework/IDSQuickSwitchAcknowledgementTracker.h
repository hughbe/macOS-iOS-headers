//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface IDSQuickSwitchAcknowledgementTracker : NSObject
{
    NSMutableSet *_delegateIdentifiers;
    struct _opaque_pthread_mutex_t _delegateIdentifiersMutex;
}

- (void)_accessDelegateIdentifiersInCriticalSectionWithBlock:(CDUnknownBlockType)arg1;
- (void)stopAwaitingAcknowledgementFromAllServiceDelegates;
- (void)stopAwaitingAcknowledgementFromServiceDelegateWithIdentifier:(id)arg1;
- (id)identifierForServiceDelegate:(id)arg1;
- (id)awaitAcknowledgementFromServiceDelegate:(id)arg1;
@property(readonly, nonatomic) BOOL isAwaitingAcknowledgement;
- (void)dealloc;
- (id)init;

@end


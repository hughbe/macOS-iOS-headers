//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore;
@protocol CNCancelable;

__attribute__((visibility("hidden")))
@interface CNAccountCollectionUpdateWatcher : NSObject
{
    id _target;
    SEL _action;
    ACAccountStore *_accountStore;
    id <CNCancelable> _cancelationToken;
}

+ (id)accountsWithStore:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <CNCancelable> cancelationToken; // @synthesize cancelationToken=_cancelationToken;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(readonly) SEL action; // @synthesize action=_action;
@property(readonly) __weak id target; // @synthesize target=_target;
- (void)stopObserving;
- (void)startObservingAccountStore:(id)arg1 notificationCenter:(id)arg2;
- (void)startObserving;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end


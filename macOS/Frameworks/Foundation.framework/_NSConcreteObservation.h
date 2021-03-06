//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObservation.h>

@class NSObject;
@protocol NSObservable, NSObserver;

__attribute__((visibility("hidden")))
@interface _NSConcreteObservation : NSObservation
{
    NSObject<NSObservable> *_LHSobservable;
    NSObject<NSObserver> *_RHSobserver;
    id _observers[4];
}

- (void)dealloc;
- (void)_receiveBox:(id)arg1;
- (void)finishObserving;
- (void)remove;
- (void *)_observerStorageOfSize:(unsigned long long)arg1;
- (id)initWithObservable:(id)arg1 observer:(id)arg2;
- (id)debugDescription;
- (BOOL)isEqual:(id)arg1;

@end


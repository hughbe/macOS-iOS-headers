//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSArrayController, NSPredicate;

__attribute__((visibility("hidden")))
@interface _NSArrayControllerExtensions : NSObject
{
    NSArrayController *_controller;
    NSArray *_automaticRearrangementKeyPaths;
    NSArray *_sortDescriptors;
    NSPredicate *_filterPredicate;
    id _suppressedContentObjectsObservingTracker;
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopRearrangementObservingForSuppressedContentObjects;
- (void)_startRearrangementObservingForSuppressedContentObjects:(id)arg1;
- (id)_filterPredicate;
- (id)_setFilterPredicate:(id)arg1;
- (void)_setFilterPredicateNoCopy:(id)arg1;
- (id)_sortDescriptors;
- (id)_setSortDescriptors:(id)arg1;
- (void)_setSortDescriptorsNoCopy:(id)arg1;
- (id)_automaticRearrangementKeyPaths;
- (id)_setAutomaticRearrangementKeyPaths:(id)arg1;
- (void)dealloc;
- (id)initWithController:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface BU_TKeyValueObserverGlue : NSObject
{
    function_f9feaa7d _functor;
    function_0f2a703c _functorWithChange;
    unordered_set_1c20e8cc _observedObjects;
    struct TString _observedKeyPath;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;
- (void)initCommon:(const unordered_set_1c20e8cc *)arg1 observedKeyPath:(const struct TString *)arg2;
- (id)initWithFunctorWithChange:(const function_0f2a703c *)arg1 observedObjects:(const unordered_set_1c20e8cc *)arg2 observedKeyPath:(const struct TString *)arg3;
- (id)initWithFunctor:(const function_f9feaa7d *)arg1 observedObjects:(const unordered_set_1c20e8cc *)arg2 observedKeyPath:(const struct TString *)arg3;

@end


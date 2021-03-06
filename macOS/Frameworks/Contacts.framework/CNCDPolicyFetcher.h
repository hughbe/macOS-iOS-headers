//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNCDPersistenceContext, CNContainer;

__attribute__((visibility("hidden")))
@interface CNCDPolicyFetcher : NSObject
{
    CNContainer *_container;
    CNCDPersistenceContext *_persistenceContext;
}

+ (id)policyForContainerWithIdentifier:(id)arg1 inPersistenceStack:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) CNCDPersistenceContext *persistenceContext; // @synthesize persistenceContext=_persistenceContext;
@property(retain, nonatomic) CNContainer *container; // @synthesize container=_container;
- (id)fetchPolicy:(id *)arg1;
- (id)initWithContainer:(id)arg1 persistenceContext:(id)arg2;
- (id)init;

@end


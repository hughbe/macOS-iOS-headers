//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOPhoneNumberResolving.h"

@class NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface GEOPhoneNumberResolverRemoteProxy : NSObject <GEOPhoneNumberResolving>
{
    NSObject<OS_dispatch_queue> *_workQueue;
}

- (void)resolvePhoneNumbers:(id)arg1 handler:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


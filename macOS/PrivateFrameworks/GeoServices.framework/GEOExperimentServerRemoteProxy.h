//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOExperimentServerProxy.h"

@class GEOABAssignmentResponse, NSLock, NSString;

@interface GEOExperimentServerRemoteProxy : NSObject <GEOExperimentServerProxy>
{
    id <GEOExperimentServerProxyDelegate> _delegate;
    GEOABAssignmentResponse *_experimentsInfo;
    NSLock *_experimentsInfoLock;
    int _experimentsChangedToken;
}

@property(nonatomic) id <GEOExperimentServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_debug_setQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3;
- (void)forceUpdate;
@property(readonly, nonatomic) GEOABAssignmentResponse *experimentsInfo;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


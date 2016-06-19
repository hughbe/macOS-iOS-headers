//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVTaskGroup.h"

#import "CoreDAVTaskDelegate.h"

@class CalDAVPrincipalEmailDetailsResult, NSSet, NSString, NSURL;

@interface CalDAVGetPrincipalEmailDetailsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate>
{
    NSURL *_principalURL;
    CalDAVPrincipalEmailDetailsResult *_principalResult;
}

@property(retain, nonatomic) CalDAVPrincipalEmailDetailsResult *principalResult; // @synthesize principalResult=_principalResult;
@property(retain, nonatomic) NSURL *principalURL; // @synthesize principalURL=_principalURL;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSString *displayName;
@property(readonly, retain, nonatomic) NSSet *addresses;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)_processPropFind:(id)arg1;
- (void)_finishWithError:(id)arg1;
- (void)startTaskGroup;
- (id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


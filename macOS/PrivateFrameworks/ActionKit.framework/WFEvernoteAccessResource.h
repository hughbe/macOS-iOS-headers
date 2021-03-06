//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAccessResource.h>

@interface WFEvernoteAccessResource : WFAccessResource
{
}

+ (id)evernoteCallbackScheme;
+ (id)evernoteSession;
- (void)logOut;
- (BOOL)canLogOut;
- (id)username;
- (id)resourceName;
- (unsigned long long)globalLevelStatus;
- (id)protectedResourceDescription;
- (void)dealloc;
- (id)initWithDefinition:(id)arg1;
- (id)associatedAppIdentifier;

@end


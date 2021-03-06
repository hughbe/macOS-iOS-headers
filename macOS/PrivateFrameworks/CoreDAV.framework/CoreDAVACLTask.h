//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVTask.h>

@class NSArray;
@protocol CoreDAVACLTaskDelegate;

@interface CoreDAVACLTask : CoreDAVTask
{
    NSArray *_accessControlEntities;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *accessControlEntities; // @synthesize accessControlEntities=_accessControlEntities;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)requestBody;
- (id)httpMethod;
- (id)description;
- (id)initWithAccessControlEntities:(id)arg1 atURL:(id)arg2;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <CoreDAVACLTaskDelegate> delegate; // @dynamic delegate;

@end


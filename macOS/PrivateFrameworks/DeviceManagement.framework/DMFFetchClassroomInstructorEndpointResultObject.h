//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSXPCListenerEndpoint;

@interface DMFFetchClassroomInstructorEndpointResultObject : CATTaskResultObject
{
    NSXPCListenerEndpoint *_endpoint;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSXPCListenerEndpoint *endpoint; // @synthesize endpoint=_endpoint;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEndpoint:(id)arg1;

@end


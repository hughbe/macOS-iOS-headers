//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskRequest.h>

@class DMFControlGroupIdentifier, NSDictionary;

@interface CRKBuildASMConfigurationRequest : CATTaskRequest
{
    NSDictionary *_existingASMConfiguration;
    DMFControlGroupIdentifier *_courseIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
- (void).cxx_destruct;
@property(retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // @synthesize courseIdentifier=_courseIdentifier;
@property(copy, nonatomic) NSDictionary *existingASMConfiguration; // @synthesize existingASMConfiguration=_existingASMConfiguration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAStartRequest.h>

@class NSString, SAConfidenceScores;

@interface SAStartMultiUserTestRequest : SAStartRequest
{
}

+ (id)startMultiUserTestRequestWithDictionary:(id)arg1 context:(id)arg2;
- (BOOL)requiresResponse;
@property(retain, nonatomic) SAConfidenceScores *voiceIDConfidenceScores;
@property(copy, nonatomic) NSString *expectedSelectedSharedUserId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end


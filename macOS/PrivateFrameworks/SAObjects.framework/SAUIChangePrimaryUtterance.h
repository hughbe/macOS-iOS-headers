//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAUIChangePrimaryUtterance : SABaseClientBoundCommand
{
}

+ (id)changePrimaryUtteranceWithDictionary:(id)arg1 context:(id)arg2;
+ (id)changePrimaryUtterance;
- (BOOL)requiresResponse;
@property(nonatomic) long long utteranceIndex;
@property(copy, nonatomic) NSString *speechRecognitionId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end


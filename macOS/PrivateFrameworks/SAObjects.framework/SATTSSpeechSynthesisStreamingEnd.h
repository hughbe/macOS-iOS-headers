//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SATTSSpeechSynthesisStreaming.h>

@class NSString;

@interface SATTSSpeechSynthesisStreamingEnd : SATTSSpeechSynthesisStreaming
{
}

+ (id)speechSynthesisStreamingEndWithDictionary:(id)arg1 context:(id)arg2;
+ (id)speechSynthesisStreamingEnd;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *errorMessage;
@property(nonatomic) long long errorCode;
@property(nonatomic) long long count;
- (id)encodedClassName;
- (id)groupIdentifier;

@end


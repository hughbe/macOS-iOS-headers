//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INIntentResponse.h>

@class NSArray, _INPBSearchForMessagesIntentResponse;

@interface INSearchForMessagesIntentResponse : INIntentResponse
{
    _INPBSearchForMessagesIntentResponse *_responseMessagePBRepresentation;
}

+ (int)_errorCodeFromCode:(long long)arg1;
+ (long long)_codeFromErrorCode:(int)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSArray *messages;
- (id)_responseMessagePBRepresentation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) long long code;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)init;
@property(copy) NSArray *searchResults;

@end


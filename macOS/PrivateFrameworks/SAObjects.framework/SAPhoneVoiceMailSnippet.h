//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSNumber;

@interface SAPhoneVoiceMailSnippet : SAUISnippet
{
}

+ (id)voiceMailSnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)voiceMailSnippet;
@property(retain, nonatomic) id <SAClientBoundCommand> postPlayCommand;
@property(copy, nonatomic) NSArray *playVoiceMailCommands;
@property(copy, nonatomic) NSArray *calls;
@property(copy, nonatomic) NSNumber *autoPlay;
- (id)encodedClassName;
- (id)groupIdentifier;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray;

@interface SASmsRecipientSearch : SADomainCommand
{
}

+ (id)recipientSearchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)recipientSearch;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSArray *recipients;
@property(nonatomic) BOOL clientShouldResolvePhonesAndEmails;
- (id)encodedClassName;
- (id)groupIdentifier;

@end


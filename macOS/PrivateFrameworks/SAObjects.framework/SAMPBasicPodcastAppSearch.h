//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SAMPBasicPodcastAppSearch : SADomainCommand
{
}

+ (id)basicPodcastAppSearchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)basicPodcastAppSearch;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *query;
@property(nonatomic) long long maxResults;
@property(nonatomic) BOOL acceptPodcastStations;
@property(nonatomic) BOOL acceptPodcastCollections;
- (id)encodedClassName;
- (id)groupIdentifier;

@end


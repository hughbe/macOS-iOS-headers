//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSNumber;

@interface SAABMultiPersonSearch : SADomainCommand
{
}

+ (id)multiPersonSearchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)multiPersonSearch;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSNumber *resultsLimit;
@property(copy, nonatomic) NSArray *personSearches;
- (id)encodedClassName;
- (id)groupIdentifier;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface CIMIssueReporterCandidateState : NSObject
{
    NSString *_markedText;
    NSArray *_candidates;
    NSDictionary *_sessionLog;
    NSArray *_userDictionaryEntries;
    NSArray *_addressBookEntries;
}

@property(retain) NSArray *addressBookEntries; // @synthesize addressBookEntries=_addressBookEntries;
@property(retain) NSArray *userDictionaryEntries; // @synthesize userDictionaryEntries=_userDictionaryEntries;
@property(copy) NSDictionary *sessionLog; // @synthesize sessionLog=_sessionLog;
@property(copy) NSArray *candidates; // @synthesize candidates=_candidates;
@property(copy) NSString *markedText; // @synthesize markedText=_markedText;
- (void).cxx_destruct;
@property(readonly, retain) NSArray *textOnlyCandidates;

@end


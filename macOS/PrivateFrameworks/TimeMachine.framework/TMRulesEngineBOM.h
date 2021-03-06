//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSSet, NSString;

@interface TMRulesEngineBOM : NSObject
{
    unsigned int _baseRuleSet;
    NSSet *_sourceDisks;
    NSSet *_spotlightOracles;
    NSSet *_userHomes;
    NSArray *_pathExclusions;
    NSMutableDictionary *_systemFilesExcludedMap;
    NSString *_mailRealmSubpath;
}

@property(copy) NSString *mailRealmSubpath; // @synthesize mailRealmSubpath=_mailRealmSubpath;
@property(copy) NSArray *pathExclusions; // @synthesize pathExclusions=_pathExclusions;
@property(copy) NSSet *userHomes; // @synthesize userHomes=_userHomes;
@property(copy) NSSet *spotlightOracles; // @synthesize spotlightOracles=_spotlightOracles;
@property(copy) NSSet *sourceDisks; // @synthesize sourceDisks=_sourceDisks;
@property unsigned int baseRuleSet; // @synthesize baseRuleSet=_baseRuleSet;
- (BOOL)systemFilesExcludedForMountPoint:(id)arg1;
- (void)setSystemFilesExcludedForMountPoint:(id)arg1;
- (void)dealloc;
- (id)init;

@end


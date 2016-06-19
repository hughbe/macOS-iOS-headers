//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PackageKit/PKMutableDistributionContainer.h>

@class NSDictionary, PKArchive;

@interface PKArchiveDistributionContainer : PKMutableDistributionContainer
{
    PKArchive *_archive;
    NSDictionary *_lprojSubpathByName;
    NSDictionary *_strings;
}

- (BOOL)commitReturningError:(id *)arg1;
- (BOOL)setResourceData:(id)arg1 forKey:(id)arg2 forLocalization:(id)arg3;
- (BOOL)setStringsData:(id)arg1 forLocalization:(id)arg2;
- (BOOL)setDistributionFromContainer:(id)arg1;
- (id)_resourceDataForKey:(id)arg1;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2;
- (id)stringsDictionary;
- (id)_lprojSubpathByName;
- (void)dealloc;
- (id)initWithArchive:(id)arg1 forWriting:(BOOL)arg2 error:(id *)arg3;

@end


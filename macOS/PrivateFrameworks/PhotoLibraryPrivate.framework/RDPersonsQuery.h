//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDQueryBase.h>

@interface RDPersonsQuery : RDQueryBase
{
}

+ (id)_contextFilter:(id)arg1 personContext:(long long)arg2 database:(id)arg3;
+ (long long)unverifiedFaceCountThresholdForDatabase:(id)arg1;
+ (id)adjustedFilter:(id)arg1 withOptions:(id)arg2 database:(id)arg3;
+ (id)tableForDatabase:(id)arg1;
- (id)initWithPersonIds:(id)arg1 database:(id)arg2 options:(id)arg3;
- (id)initWithVersionsQuery:(id)arg1 excludingPersons:(id)arg2 options:(id)arg3;
- (id)initWithVersions:(id)arg1 options:(id)arg2;
- (id)initWithAssociatedClusterId:(long long)arg1 database:(id)arg2 options:(id)arg3;
- (id)initWithFace:(id)arg1 options:(id)arg2;
- (id)initWithFaceGroup:(id)arg1 options:(id)arg2;
- (id)initWithType:(long long)arg1 database:(id)arg2 options:(id)arg3;
- (id)initForVerifiedPersons:(BOOL)arg1 database:(id)arg2 options:(id)arg3;

@end


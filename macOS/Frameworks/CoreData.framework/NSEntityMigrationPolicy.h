//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSEntityMigrationPolicy : NSObject
{
}

- (id)_nonNilValueOrDefaultValueForAttribute:(id)arg1 source:(id)arg2 destination:(id)arg3;
- (BOOL)endEntityMapping:(id)arg1 manager:(id)arg2 error:(id *)arg3;
- (BOOL)performCustomValidationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id *)arg3;
- (BOOL)endRelationshipCreationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id *)arg3;
- (BOOL)createRelationshipsForDestinationInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id *)arg4;
- (BOOL)endInstanceCreationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id *)arg3;
- (BOOL)createDestinationInstancesForSourceInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id *)arg4;
- (BOOL)beginEntityMapping:(id)arg1 manager:(id)arg2 error:(id *)arg3;

@end


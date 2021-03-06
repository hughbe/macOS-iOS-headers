//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SyncServices/ISDProperty.h>

#import <SyncServices/NSCoding-Protocol.h>

@class ISDEntity, NSArray;

@interface ISDRelationship : ISDProperty <NSCoding>
{
    ISDEntity *_source;
    NSArray *_targets;
    NSArray *_inverseRelationships;
    NSArray *_anonymousInverseRelationshipNames;
}

+ (void)initialize;
- (BOOL)isRelationship;
- (void)setOrdering:(int)arg1;
- (int)ordering;
- (void)setToMany:(BOOL)arg1;
- (BOOL)isToMany;
- (void)setDeleteRule:(int)arg1;
- (int)deleteRule;
- (void)setAnonymousInverseRelationshipNames:(id)arg1;
- (id)anonymousInverseRelationshipNames;
- (void)setInverseRelationships:(id)arg1;
- (id)inverseRelationships;
- (void)setTargets:(id)arg1;
- (id)targets;
- (id)sourceName;
- (void)setSource:(id)arg1;
- (id)source;
- (BOOL)morphInToObject:(id)arg1;
- (BOOL)isCompatibleExtensionOf:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)replacementObjectForPortCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end


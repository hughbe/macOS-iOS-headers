//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectID, NSMutableDictionary, NSPersistentStoreMap, NSString;

__attribute__((visibility("hidden")))
@interface NSStoreMapNode : NSObject
{
    NSPersistentStoreMap *_map;
    NSManagedObjectID *_objectID;
    NSMutableDictionary *_relatedNodes;
    NSString *_entityName;
    unsigned int _version;
}

+ (BOOL)supportsSecureCoding;
+ (void)initialize;
- (id)_snapshot_;
- (const id *)knownKeyValuesPointer;
- (void)_setVersionNumber:(unsigned int)arg1;
- (unsigned int)_versionNumber;
- (void)_setMap:(id)arg1;
- (id)_relatedNodes;
- (void)setDestinations:(id)arg1 forRelationship:(id)arg2;
- (id)destinationsForRelationship:(id)arg1;
- (id)configurationName;
- (id)entity;
- (id)key;
- (id)objectID;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1;

@end


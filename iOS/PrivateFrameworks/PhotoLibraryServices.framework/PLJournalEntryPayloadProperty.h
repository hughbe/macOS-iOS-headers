/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLJournalEntryPayloadProperty : NSObject {
    bool  _isToManySubRelationship;
    bool  _isUUIDKey;
    NSString * _key;
    PLJournalEntryPayloadProperty * _parentProperty;
    NSSet * _relatedEntityPropertyNames;
    bool  _requiresConversion;
    bool  _shouldPrefetchRelationship;
    NSDictionary * _subRelationshipProperties;
    unsigned long long  _type;
}

@property (nonatomic, readonly) bool isPropertyListSupportedType;
@property (nonatomic, readonly) bool isToManySubRelationship;
@property (nonatomic, readonly) bool isUUIDKey;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, retain) PLJournalEntryPayloadProperty *parentProperty;
@property (nonatomic, readonly) NSSet *relatedEntityPropertyNames;
@property (nonatomic, readonly) bool requiresConversion;
@property (nonatomic, readonly) bool shouldPrefetchRelationship;
@property (nonatomic, readonly) NSDictionary *subRelationshipProperties;
@property (nonatomic, readonly) unsigned long long type;

+ (id)payloadPropertyForUUID;
+ (id)payloadPropertyWithKey:(id)arg1 andType:(unsigned long long)arg2;
+ (id)payloadPropertyWithKey:(id)arg1 andType:(unsigned long long)arg2 requiresConversion:(bool)arg3;
+ (id)payloadPropertyWithKey:(id)arg1 relatedEntityPropertyNames:(id)arg2 shouldPrefetchRelationship:(bool)arg3;
+ (id)payloadPropertyWithKey:(id)arg1 subRelationshipProperties:(id)arg2 isToMany:(bool)arg3;

- (void).cxx_destruct;
- (id)description;
- (id)initWithKey:(id)arg1 andType:(unsigned long long)arg2 subRelationshipProperties:(id)arg3 requiresConversion:(bool)arg4 relatedEntityPropertyNames:(id)arg5 isUUIDKey:(bool)arg6 isToManySubRelationship:(bool)arg7 shouldPrefetchRelationship:(bool)arg8;
- (bool)isEqualToKey:(id)arg1;
- (bool)isPropertyListSupportedType;
- (bool)isToManySubRelationship;
- (bool)isUUIDKey;
- (id)key;
- (id)parentProperty;
- (id)relatedEntityPropertyNames;
- (bool)requiresConversion;
- (void)setParentProperty:(id)arg1;
- (bool)shouldPrefetchRelationship;
- (id)subRelationshipProperties;
- (unsigned long long)type;

@end

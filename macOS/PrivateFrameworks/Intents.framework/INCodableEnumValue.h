//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCodableAttributeRelationComparing-Protocol.h>
#import <Intents/INCodableCoding-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INCodableEnum, NSArray, NSString;

@interface INCodableEnumValue : NSObject <INCodableAttributeRelationComparing, NSSecureCoding, NSCopying, INCodableCoding>
{
    INCodableEnum *_codableEnum;
    long long _index;
    NSString *_name;
    NSString *_displayName;
    NSString *_displayNameLocID;
    NSArray *_synonyms;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *synonyms; // @synthesize synonyms=_synonyms;
@property(copy, nonatomic) NSString *displayNameLocID; // @synthesize displayNameLocID=_displayNameLocID;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic, setter=_setCodableEnum:) __weak INCodableEnum *_codableEnum; // @synthesize _codableEnum;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (id)dictionaryRepresentation;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryKeyForKeyPath:(id)arg1;
@property(readonly, copy, nonatomic) NSString *keyPrefix;
@property(readonly, copy, nonatomic) NSString *cacheGroup;
- (id)localizedDisplayNameWithLocalizer:(id)arg1;
- (id)localizedDisplayNameForLanguage:(id)arg1;
@property(readonly, copy) NSString *localizedDisplayName;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


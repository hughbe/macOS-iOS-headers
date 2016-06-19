//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface BKItemKeyDescription : NSObject
{
    NSMutableDictionary *_descriptionDictionary;
}

+ (id)keyDescriptionFor:(id)arg1;
+ (void)updateConfigurationWith:(id)arg1;
+ (id)descriptionsDictionary;
+ (void)updateDescriptionsWith:(id)arg1;
+ (id)transformItemKeyDescriptionVersion1toVersion2:(id)arg1;
- (void)dealloc;
- (id)badgesFromArray:(id)arg1;
- (id)bindingsFromArray:(id)arg1;
- (id)sortDescriptorsForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)valueTransformerForKey:(id)arg1;
- (Class)classForKey:(id)arg1;
- (BOOL)boolValueForKey:(id)arg1 defaultValue:(BOOL)arg2;
- (double)floatValueForKey:(id)arg1 defaultValue:(double)arg2;
- (id)stringFromAlignment:(unsigned long long)arg1;
- (unsigned long long)alignmentFromString:(id)arg1;
- (id)badges;
- (id)predicateValueUnits;
- (id)predicateValueUnitMultipliers;
- (BOOL)predicateUseColorLabel;
- (BOOL)predicateUseCannedSearch;
- (BOOL)predicateSuppressEqualsOperatorType;
- (BOOL)predicateHasImplicitInOperator;
- (id)predicateDefault;
- (id)predicateCannedSearchStrings;
- (id)predicateCannedSearchOptionalItemDescription;
- (BOOL)predicateAllowsMatchesOperatorType;
- (BOOL)tableColumnShowTitle;
- (unsigned long long)tableColumnTitleAlignment;
- (unsigned long long)tableColumnTextAlignment;
- (BOOL)tableColumnSortable;
- (unsigned long long)tableColumnResizingMask;
- (double)tableColumnMaxWidth;
- (double)tableColumnMinWidth;
- (double)tableColumnWidth;
- (id)sortDescriptors;
- (BOOL)editable;
- (id)bindings;
- (Class)cellClass;
- (id)valueTransformer;
- (id)valueTransformerName;
- (Class)formatterClass;
- (Class)contentTypeClass;
- (id)type;
- (id)itemKey;
- (id)descriptionDictionary;
- (id)initWithItemKey:(id)arg1 primary:(id)arg2 secondary:(id)arg3;
- (unsigned long long)_resizingMaskForString:(id)arg1;
- (id)_objectForKey:(id)arg1;

@end

